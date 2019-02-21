<?php 
 include_once('conecxion.php');
 if (isset($_POST['n_compte'])){
 	$numcompte = $_POST['n_compte'];
 }
 if (isset($_POST['intitule'])){
 	$intitule = $_POST['intitule'];
 }
  if (isset($_POST['num_tresor'])){
 	$num_tresor = $_POST['num_tresor'];
 }
 if (isset($_POST['envoi_tres'])){
 	$envoi_tres = $_POST['envoi_tres'];
 }
 $envoi_tres = $envoi_tres ? 'O' : 'N';
$sql = "INSERT INTO LIGUE ? ? ? ? ;";
$req = $dbh->prepare($sql);
$req->execute(array(
			$numcompte,
			$intitule,
			$num_tresor,
			$envoi_tres
		)
	);
?>