<?php
$connect = new mysqli("localhost", "root" , "password", "quiz");



              if($connect->connect_errno )
              {

                  die('Could not connect: ' . $connect->connect_errno);
              }
			

			if($_REQUEST["p"] && $_REQUEST["q"])
			{
				$pid = $_REQUEST['p'];
				$qty = $_REQUEST['q'];
			}
			
$sql = "INSERT INTO account (`sid`, `userid`, `pwd`, `name`, `college`, `phone`) VALUES ('0', '$pid', 'abc', 'Raja', 'vit', '$qty' )"	;
$result = $connect->query($sql);
if($result!=NULL)
	 echo "User Added Successfully";
 else
	 echo "Not Added";
 
 
			  
?>

		 