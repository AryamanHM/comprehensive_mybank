<?php
function getNumbersOccuringOddTimes(&$arr, $size)
{
$oddOccurencesArray=array();
echo ("No of elements in the array:".$size);
  
$count = 0;
for ($i = 0; $i < $size; $i++)
{
for ($j = 0; $j < $size; $j++)
{
echo("Comparing:".$arr[$i].$arr[$j]);
if ($arr[$i] == $arr[$j])
{
$count++;
}
}
  
if ($count % 2 != 0)
{
array_push($oddOccurencesArray,$arr[$i]);
$count =0;
}
  
}
print_r(array_unique($oddOccurencesArray));
}

$count =1;
$myfile = fopen("newfile.txt", "w") or die("Unable to open file!");
for ($x = 0; $x < 100; $x++)
{
$y = rand(10,100);
fwrite($myfile, $y);
fwrite($myfile,"\n");
  
}
fclose($myfile);
$myhandle = fopen("a.txt", "r");
$a=array();
while(! feof($myhandle))
{
array_push($a,fgets($myhandle));
}
print_r($a);
$n = sizeof($a);
  
getNumbersOccuringOddTimes($a, $n);
?>
?>