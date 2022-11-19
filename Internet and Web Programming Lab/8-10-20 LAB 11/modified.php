<?php    
    
while($row = mysql_fetch_object($result)){    
    
    
?>  
    <tr>  
        <td>  
            <?php echo $row->uid;?>  
        </td>  
        <td>  
            <?php echo $row->name;?>  
        </td>  
        <td>  
            <?php echo $row->gender;?>  
        </td>  
        <td>  
            <?php echo $row->birthday;?>  
        </td>  
        <td>  
            <?php echo $row->address;?>  
        </td>  
        <td>  
            <?php echo $row->city;?>  
        </td>  
        <td>  
            <?php echo $row->country;?>  
        </td>  
        <td>  
            <?php echo $row->pincode;?>  
        </td>  
        <td>  
            <?php echo $row->phone;?>  
        </td>  
        <td>  
            <?php echo $row->grade;?>  
        </td>  
        <td>  
            <?php echo $row->hsc;?>  
        </td>  
        <td>  
            <?php echo $row->ug;?>  
        </td>  
        <td>  
            <?php echo $row->phd;?>  
        </td>  
        <td>  
            <?php echo $row->o;?>  
        </td>  
        <td>  
            <?php echo $row->syear;?>  
        </td>  
		<td>  
            <?php echo $row->lyear;?>  
        </td> 
		<td>  
            <?php echo $row->employer;?>  
        </td> 
		<td>  
            <?php echo $row->designation;?>  
        </td> 
		<td>  
            <?php echo $row->salary;?>  
        </td> 
		<td>  
            <?php echo $row->fromdate;?>  
        </td> 
		<td>  
            <?php echo $row->todate;?>  
        </td> 
		<td>  
            <?php echo $row->membership;?>  
        </td> <td>  
            <?php echo $row->activities;?>  
        </td> <td>  
            <?php echo $row->contacts;?>  
        </td> 
        <td> <a href="listing.php?id =     
            <?php echo $row->id;?>" onclick="return confirm('Are You Sure')">Delete    
        </a> | <a href="index.php?id =     
            <?php echo $row->id;?>" onclick="return confirm('Are You Sure')">Edit    
        </a> </td>  
        <tr>  
            <?php } ?>  
              