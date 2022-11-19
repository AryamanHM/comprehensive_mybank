<html>
<body>
<?php
$cookie_name="course";
setcookie($cookie_name, "IWP", time()+(3600)*72);
if(!isset($_COOKIE[$cookie_name])) {
  echo "Cookie named is not enabled!";
} else {
  echo "Cookie is enabled!<br>";
}
	
	echo (isset($_COOKIE["course"]) && $_COOKIE["course"]=="IWP") ? 'Not Disabled' : 'Disabled';
	echo "<br>";
	if($_COOKIE["course"])
		echo "It exists";
	else
		echo "It does not exists.";
if (isset($_COOKIE["course"])) {
    unset($_COOKIE["course"]); 
    setcookie("course", "", time()-3600); 
    return true;
} else {
    return false;
}
	
?>
</body>
</html>