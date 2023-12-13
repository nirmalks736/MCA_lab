<?php
$servername="localhost";
$username="root";
$password="";
$database="ghost";
$conn = new mysqli($servername,$username,$password,$database);
if($conn->connect_error){
  die("connection failed:".$conn->connect_error);
}
if($_POST){
	$id = $_POST["id"];
	$name = $_POST["name"];
	$email = $_POST["email"];
	$mob = $_POST["mob"];
$sql = "INSERT INTO student (name, email, mob) VALUES ('$name', '$email', '$mob')";
if ($conn->query($sql) === TRUE) {
  echo "New record created successfully";
} else {
  echo "Error: " . $sql . "<br>" . $conn->error;
}
}
?>
