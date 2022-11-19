<?php
$a=$_GET['name'];
$b=$_GET['city'];
$c=$_GET['ph'];
session_start();
$tm=time();
$newt = $tm+60;
if($newt < $tm)
echo"time out";
else
{
echo"Name=$a"."<br>";
echo"City=$b"."<br>";
echo"Phone Number=$c"."<br>";
}
session_destroy();

?>
