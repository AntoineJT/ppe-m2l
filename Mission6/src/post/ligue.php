<?php
	function kill() {
		echo "Erreur! Vous avez oublié de renseigner un ou plusieurs champs!";
		die();
		return null; // unreachable code?
	}

	$numcompte = isset($_POST['n_compte']) ? $_POST['n_compte'] : kill();
	$intitule = isset($_POST['intitule']) ? $_POST['intitule'] : kill();
	$num_tresor = isset($_POST['num_tresor']) ? $_POST['num_tresor'] : kill();
	$envoi_tres = isset($_POST['envoi_tres']) ? $_POST['envoi_tres'] : kill();
	$envoi_tres = $envoi_tres ? 'O' : 'N';
	
	include_once('includes/credentials.php');

	const sql = 'INSERT INTO LIGUE ? ? ? ? ;';
	$req = $dbh->prepare(sql);
	$req->execute(array(
			$numcompte,
			$intitule,
			$num_tresor,
			$envoi_tres
		)
	);
?>
