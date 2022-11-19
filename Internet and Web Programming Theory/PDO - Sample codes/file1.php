<?php
/*
$connect = new PDO("mysql:host=localhost; dbname=quiz;", "root", "");
if(! $connect)
{
	echo ("Could not connect to DB");
}

$sql = "select * from ques_ans";

$result = $connect->query($sql);

while($row = $result->fetch())
{
	echo $row['ques'];
}


*/

?>


<?php

$connect = new PDO("mysql:host=localhost; dbname=quiz;", "root", "");
if(! $connect)
{
	
	echo ("Could not connect to DB");
}

$sql = "Select * from ques_ans";

$stmt = $connect->prepare($sql);
aksjdhaskljdhklasjd
asfkjafsdjgsdf
skdfjsd
ksjdfhds
skdjf

$result = $stmt->execute(["school" = $school]);

while ($row= $stmt->fetch())
	{
		echo $row['ques'];
		
	}


?>