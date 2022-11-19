<html>
    <body>
        <form action="" method="post">
            <center>
                <table border=0>
                    <tr>
                        <td>
                            Student Name
                        </td>
                        <td>
                            <input type=text name="t1">
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Marks for Physics(M1)
                        </td>
                        <td>
                            <input type=text name="t2">
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Marks for Chemistry(M2)
                        </td>
                        <td>
                            <input type=text name="t3">
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Marks for Math(M3)
                        </td>
                        <td>
                            <input type=text name="t4">
                        </td>
                    </tr>
					 <tr>
                        <td>
                            Marks for English(M4)
                        </td>
                        <td>
                            <input type=text name="t5">
                        </td>
                    </tr>
					 <tr>
                        <td>
                            Marks for Computer Science(M5)
                        </td>
                        <td>
                            <input type=text name="t6">
                        </td>
                    </tr>
					 <tr>
                        <td>
                            Marks for Physical Education(M6)
                        </td>
                        <td>
                            <input type=text name="t7">
                        </td>
                    </tr>
                </table>
                <br>
                <br>
                <input type=submit name="s" value="Result">
            </center>
            <?php
if(isset($_POST['s']))////checking whether the input element is set or not
{
	 $a=$_POST['t1']; //accessing value from 1st text box
    $a1=$_POST['t2']; //accessing value from 2nd text field
    $a2=$_POST['t3']; //accessing value from 3rd text field
    $a3=$_POST['t4']; //accessing value from 4th text field
	$a4=$_POST['t5']; //accessing value from 5th text field
	$a5=$_POST['t6']; //accessing value from 6th text field
	$a6=$_POST['t7']; //accessing value from 7th text field
    $sum=$a1+$a2+$a3+$a4+$a5+$a6; //total marks
    $avg=$sum/6;
    if($avg<50)
        $grade="Fail";
    if($avg>=50&&$avg<60)
        $grade="E";
    if($avg>=60&&$avg<70)
        $grade="D";
    if($avg>=70&&$avg<80)
        $grade="C";
	if($avg>=80&&$avg<90)
        $grade="B";
	if($avg>=90&&$avg<95)
        $grade="A";
	if($avg>95)
        $grade="S";
    echo "<br>";
    echo "<font size=4><center>Student is:-".$a."</center><br>"; 
    echo "<font size=4><center>Total marks:-".$sum."</center><br>"; 
echo "<font size=4><center>Average Marks:-".$avg."</center><br>"; 
    echo "<font size=4><center>Grade is:-".$grade."</center>"; 
}
            ?>
        </form>
    </body>
</html>