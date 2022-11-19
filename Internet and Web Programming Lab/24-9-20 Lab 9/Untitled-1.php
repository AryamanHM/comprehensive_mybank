
	<?php
	function avg($phy,$chem,$math,$eng,$hin,$n){	
	$phy_avg=0;$chem_avg=0;$math_avg=0;$eng_avg=0;$hin_avg=0;
	foreach($phy as $side=>$direc)
	$phy_avg+=$direc;
	$phy_avg/=$n;
	
	foreach($chem as $side=>$direc)
	$chem_avg+=$direc;
	$chem_avg/=$n;
	
	foreach($math as $side=>$direc)
	$math_avg+=$direc;
	$math_avg/=$n;
	
	foreach($eng as $side=>$direc)
	$eng_avg+=$direc;
	$eng_avg/=$n;
	
	foreach($hin as $side=>$direc)
	$hin_avg+=$direc;
	$hin_avg/=$n;
	
	echo "\nPhysics average = ".$phy_avg."\n"."Chemistry average = ".$chem_avg."\n"."Mathematics average = ".$math_avg."\n"."English average = ".$eng_avg."\n"."Hindi average = ".$hin_avg."\n"; 
}
echo "Enter the number of students: ";
sl:
$n=readline();
if($n>=1 && $n<=1000){
	echo "Enter the data in the format:\nFirst_Name   Physics_marks   Chemistry_marks   Mathematics_marks   English_marks   Hindi_marks\n";
	for($i=0;$i<$n;$i++){
		l:
		$s=readLine();
	    $st = explode (" ", $s);
	    if(strlen($st[0])>=1 and strlen($st[0])<=100 and $st[1]>=0 and $st[1]<=100 and $st[2]>=0 and $st[2]<=100 and $st[3]>=0 and $st[3]<=100 and $st[4]>=0 and $st[4]<=100 and $st[5]>=0 and $st[5]<=100){
	    $phy[$st[0]]=$st[1];
	    $chem[$st[0]]=$st[2];
	    $math[$st[0]]=$st[3];
	    $eng[$st[0]]=$st[4];
	    $hin[$st[0]]=$st[5];
		}
		else{
			echo "Invalid Input! Re-enter the data line\n";
			goto l;
			}
		
	}
	avg($phy,$chem,$math,$eng,$hin,$n);
	
}
		else{
			echo "Invalid Input! Re-enter the number\n";
			goto sl;
			}
?>
