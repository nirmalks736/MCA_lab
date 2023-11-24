<?php
$db= new mysqli("localhost","root","","ghost");
if ($db->connect_error){
    die("Connection failed:" . $db->connect_error);
}
echo "Connection succesful <br>";
$result=$db->query("SELECT * FROM user");
while($row=$result->fetch_assoc()) {
echo "Name:" .$row['name'] . "<br>";
}
$db->close();

?>
