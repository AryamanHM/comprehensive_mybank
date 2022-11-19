<?php
$message="The mail message was sent with the following mail";
$headers="From:aryaman.mishra73@gmail.com";
mail("aryaman.mishra73@gmail.com","Testing",$message,$headers);
echo "Test message is sent<br/>";

?>