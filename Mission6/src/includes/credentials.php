<?php
	const user = 'root';
	const pass = '';
	const dsn = 'mysql:host=localhost;dbname=RAYANE';
	try {
   		$dbh = new PDO(dsn, user, pass); 
	} catch (PDOException $e){
 		print 'Erreur ! : ' . $e->getMessage() . '<br>';
 		die();     
 	}
?>
