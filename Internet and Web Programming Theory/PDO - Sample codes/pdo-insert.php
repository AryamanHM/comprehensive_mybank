<?php

$conn = new PDO("mysql:host=localhost; dbname=quiz", "root", "");
  // set the PDO error mode to exception
  $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

  // prepare sql and bind parameters
  $stmt = $conn->prepare("INSERT INTO account (userid, pwd, name, college, phone)
  VALUES (:firstname, :lastname, :email, :college, :phone)");
   
  $stmt->bindParam(':firstname', $firstname);
  $stmt->bindParam(':lastname', $lastname);
  $stmt->bindParam(':email', $email);
  $stmt->bindParam(':college', $college);
  $stmt->bindParam(':phone', $phone);

  // insert a row
  $firstname = "John";
  $lastname = "Doe";
  $email = "john@example.com";
  $college = "VIT";
  $phone = "2323";
  $stmt->execute();

  // insert another row
  $firstname = "Mary";
  $lastname = "Moe";
  $email = "mary@example.com";
  $college = "VIT";
  $phone = "2323";
  $stmt->execute();

  // insert another row
  $firstname = "Julie";
  $lastname = "Dooley";
  $email = "julie@example.com";
  $college = "VIT";
  $phone = "2323";
  $stmt->execute();
  
  echo "All queries executed successfully";
  ?>