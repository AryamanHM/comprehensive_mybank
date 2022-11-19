<html>
<body>
<?php
session_start();
if(isset( $_SESSION['Favcolor'] ))
echo "Session variable is set!<br>";
else 
echo "Session variable not set!<br>";
unset($_SESSION['Favcolor']);
 if(isset( $_SESSION['Favcolor'] ))
echo "Session variable is alive!<br>";
else 
echo "Session variable deleted!<br>";
session_destroy();
?>
</body>
</html>

