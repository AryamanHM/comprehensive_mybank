<?php
if(isset($_POST['submit'])){
$conn = new mysqli('localhost','root','','iwp_db');
  if($conn->connect_error){
    echo "$conn->connect_error";
    die("Connection Failed : ". $conn->connect_error);
  } 
  else{
  	$ei=$_POST['ei'];$en=$_POST['en'];$ea=$_POST['ea'];$ed=$_POST['ed'];$es=$_POST['es'];
    $qu="insert into employee values('$ei','$en','$ea','$ed','$es');";
    $st=mysqli_query($conn,$qu);
    if($st)
    	echo "<h1 align=center>Registration Successful!</h1>";
    else
    	echo "<h1 align=center>Registration Unsuccessful!</h1>";
    $file=fopen("test.txt", 'w');
    fwrite($file, "");
    fclose($file);
    $f1=fopen("test.txt",'a');
    $qu=mysqli_query($conn,"Select * from employee");
    while($row=mysqli_fetch_assoc($qu)){
    	fwrite($f1,$row['emp_id']."\t".$row['emp_age']."\t".$row['emp_name']."\t".$row['emp_deg']."\t".$row['emp_sal']."\t"."\n");
    }
    fclose($f1);
}
}
?>
<!DOCTYPE html>
<html>
<body style="background-color: #9df">
<div id="demo">
<div class="Reservation-page">
  <div class="form">
    <form class="Reservation-form" method="post">
      <h1 align="center" style="font-family: Calibri; margin-top: 0px;">Employee's Record</h1>
      <input type="text" name="ei" placeholder="Employee Id" required="" />
      <input type="text" name="en" placeholder="Employee's Name" required="" />
      <input type="text" name="ea" placeholder="Employee's Age" required="" />
      <input type="text" name="ed" placeholder="Employee's Qualification and Designation" required="" />
      <input type="text" name="es" placeholder="Employee's Salary" required="" />
      <a href="up.php">Update a record</a>
      <a href="del.php" style="margin-left: 30px;">Delete a record</a><br><br>
      <input type="submit" name="submit">
     
    </form>
  </div>
</div>
<style type="text/css">
	@import url(https://fonts.googleapis.com/css?family=Roboto:300);

.login-page {
  width: 360px;
  padding: 8% 0 0;
  margin: auto;
}
.form {
  margin-top: 100px;
  margin-left: 525px;
  position: relative;
  z-index: 1;
  background: #FFFFFF;
  max-width: 360px;
  padding: 45px;
  text-align: center;
  box-shadow: 0 0 20px 0 rgba(0, 0, 0, 0.2), 0 5px 5px 0 rgba(0, 0, 0, 0.24);
}
.form input {
  font-family: "Roboto", sans-serif;
  outline: 0;
  background: #f2f2f2;
  width: 100%;
  border: 0;
  margin: 0 0 15px;
  padding: 15px;
  box-sizing: border-box;
  font-size: 14px;
}
.form input[type=submit] {
  font-family: "Roboto", sans-serif;
  text-transform: uppercase;
  outline: 0;
  background: #4CAF50;
  width: 100%;
  border: 0;
  padding: 15px;
  color: #FFFFFF;
  font-size: 14px;
  -webkit-transition: all 0.3 ease;
  transition: all 0.3 ease;
  cursor: pointer;
}
.form input[type=submit]:hover,.form input[type=submit]:active,.form input[type=submit]:focus {
  background: #43A047;
}
.form a{
	text-decoration: none;
}
.form .message {
  margin: 15px 0 0;
  color: #b3b3b3;
  font-size: 12px;
}
.form .message a {
  color: #4CAF50;
  text-decoration: none;
}

.container {
  position: relative;
  z-index: 1;
  max-width: 300px;
  margin: 0 auto;
}
.container:before, .container:after {
  content: "";
  display: block;
  clear: both;
}
.container .info {
  margin: 50px auto;
  text-align: center;
}
.container .info h1 {
  margin: 0 0 15px;
  padding: 0;
  font-size: 36px;
  font-weight: 300;
  color: #1a1a1a;
}
.container .info span {
  color: #4d4d4d;
  font-size: 12px;
}
.container .info span a {
  color: #000000;
  text-decoration: none;
}
.container .info span .fa {
  color: #EF3B3A;
}
body {
  background: #76b852; /* fallback for old browsers */
  background: -webkit-linear-gradient(right, #76b852, #8DC26F);
  background: -moz-linear-gradient(right, #76b852, #8DC26F);
  background: -o-linear-gradient(right, #76b852, #8DC26F);
  background: linear-gradient(to left, #76b852, #8DC26F);
  font-family: "Roboto", sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;      
}
</style>
</body>
</html>
