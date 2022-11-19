<?php
$auth_yes=0;
session_start();
session_register();
#tm=time();
?>

<form method="GET" action="new.php">
<fieldset>
<legend>Enter username and password</legend>

<p>Name:&nbsp&nbsp&nbsp<input type="text" name="name"><br>
<p>City:&nbsp&nbsp&nbsp<input type="text" name="city"><br>

 
<p>Phone Number:&nbsp&nbsp&nbsp:&nbsp&nbsp&nbsp<input type="text" name="ph"><br><br>
<input type="submit" value=Submit>
</form>