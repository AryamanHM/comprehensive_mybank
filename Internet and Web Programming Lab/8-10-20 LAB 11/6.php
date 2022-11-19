<?php
    $myfile = fopen("newfile.txt", "w") or die("Unable to open file!");
    for($i=0;$i<90;$i++)
    {
        $v=mt_rand(0,9);
        fwrite($myfile,$v);
    }
    fclose($myfile);
    $myfile2 = fopen("newfile.txt", "r") or die("Unable to open file!");
    $a=array();
    for($i=0;$i<15;$i++)
    {
        array_push($a,fread($myfile2,"1"));
    }
    echo "<h1>Here are the first 15 numbers from the file</h1>";
    print_r($a);
    echo "<br>";
    echo "<h3>The numbers with odd occurences</h3>";
    $t=0;
    for($i=0;$i<15;$i++)
    {
        for($j=1;$j<15;$j++)
        {
            if($a[$i]==$a[$j])
            {
                $t=$t+1;
            }
        }
        if($t%2!=0)
        {
            echo $a[$i]." ";
        }
    }
?>
