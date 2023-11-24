<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"content="width=device-width,initial-scale=1.0">
    <title>Database data</title>
    <style>
      table{
        width:50%;
        border-collapse:collapse;
        margin:20px 0;
        }
        table,th,td{
        border:1px solid black;
        }
        th,td{
            padding:10px;
            text-align:left;
            }
        </style>
</head>
<body>
<?php
$servername="localhost";
$username="username";
$password="password";
$database="database_name";
$conn=new mysqli($servername,$username,$password,$database);
