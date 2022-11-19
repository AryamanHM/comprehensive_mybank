<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Session-based Login</title>
	<style>
		body {
			background-color: brown;
		}
		h1 {
			color: rgba(245, 230, 83, 1);
		}
		input {
			width: 130px;
			margin-bottom: 20px;
		}
		#box {
			background-color: rgba(255, 255, 204, 1);
			padding: 40px;
			width: 600px;
			font-size: 21px;
			margin-left: 270px;
			margin-right: 250px;
		}
		#timeout {
			display: block;
		}
		#loginForm {
			display: none;
		}
		#infoForm {
			display: none;
		}
		.border {
			padding: 5px;
			border-top: solid black;
			border-bottom: solid black;
			font-weight: bold;
		}
		.logoutMsg {
			margin: 10px;
			color: red;
			background-color: pink;
			text-align: center;
		}
		button {
			float: right;
			padding: 5px;
			border: 0px;
			width: 50px;
			border-radius: 4px;
			background-color: rgb(92,184,92);
		}
	</style>
</head>
<body>
	<h1><center><u>Session-based Login</u></center></h1>
	<div id = "box">
		<div id="timeout">
			<div class="border">
				Session Timed out
			</div>
			<div class="logoutMsg">
				You are logged out due to inactivity for more than 15 minutes
			</div>
			<button onclick="dispLogin()">Login</button>
		</div>
		<form id="loginForm" action="#info" method="post">
			<label for="username">Username</label>
	        <input name="user_name" id="user_name" type="text" placeholder="Username=Aryaman" required>
	        <br>
	        <label for="password">Password</label>
	        <input name="password" id="password" type="password" placeholder="Password=IWP123" required>
	        <br>
	        <button type="submit" name="login">Login</button>
		</form>
		<form id="infoForm" action="#success" method="post">
			<label for="name">Name</label>
	        <input name="name" id="name" type="text" required>
	        <br>
	        <label for="city">City</label>
	        <input name="city" id="city" type="text" required>
	        <br>
	        <label for="phone">Phone No.</label>
	        <input name="phone" id="phone" type="text" required>
	        <br>
	        <button type="submit" name="login">Submit</button>
		</form>
	</div>
	<script>
		function dispLogin() {
			var current = document.getElementById("timeout");
			current.style.display="none";
			var next = document.getElementById("loginForm");
			next.style.display="block";
		}
		function dispInfo() {
			var current = document.getElementById("loginForm");
			current.style.display="none";
			var current = document.getElementById("timeout");
			current.style.display="none";
			var next = document.getElementById("infoForm");
			next.style.display="block";
		}
		function dispTimeout() {
			var current = document.getElementById("infoForm");
			current.style.display="none";
			var next = document.getElementById("timeout");
			next.style.display="block";
		}
	</script>
	<?php
			if (isset($_POST['login']) && !empty($_POST['user_name']) && !empty($_POST['password']))
			{
				if ($_POST['user_name'] == 'Aryaman' && $_POST['password'] == 'IWP123')
				{
					$_SESSION['user_name'] = 'Aryaman';
					$_SESSION['activeTime'] = time();
				}
				else
					echo '<script type="text/JavaScript">  
     					alert("Incorrect Password!!");
     					dispLogin();
     				</script>'; 
			}
			if (isset($_SESSION['user_name']))
			{
				if ((time() - 15*60 > $_SESSION['activeTime']))
				{
					unset($_SESSION);
					session_destroy();
					echo '<script type="text/JavaScript">  
     					dispTimeout();
     				</script>'; 
				}
				else 
				{
					$_SESSION['activeTime'] = time();
					echo '<script type="text/JavaScript">  
     					dispInfo();
     				</script>'; 
     			}
     		}
		?>
</body>
</html>
