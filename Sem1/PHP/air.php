<?php
$servername = "localhost";
$username = "root";
$password = "";
$db = "ghost";
$conn = new mysqli($servername, $username, $password,$db);
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";
if ($_POST) {
    $id = $_POST["id"];
    $name = $_POST["name"];
    $destination = $_POST["destination"];
    $date = $_POST["date"];

$sql = "INSERT INTO airline (name, destination, date)VALUES ('$name', '$destination', '$date')";
if ($conn->query($sql) === TRUE) {
  echo "New record created successfully";
} 
else 
{
  echo "Error: " . $sql . "<br>" . $conn->error;
}
    echo "<h2>Booking Details</h2>";
    echo "<p>Name: $name</p>";
    echo "<p>Destination: $destination</p>";
    echo "<p>Date: $date</p>";
}
?>
