<!DOCtype html>

<html>

	<head>

		<title>Ajouter une ligue</title>

		<meta charset="utf-8">

	</head>

	<body>

		<?php

			// TODO mettre les max et min dans les input fields (mais quand même gérer le dépassement en back!)

		?>

		<form action="chaise.php" method="post">

			<fieldset>

				<legend>Ajouter une ligue</legend>

				<label for="n_compte">N° Compte</label><input type="text" name="n_compte" id="n_compte"><br>

				<label for="intitule">Intitulé</label><input type="text" name="intitule" id="intitule"><br>

				<label for="num_tresor">Nom du trésorier</label>
				<select name="num_tresor" id="num_tresor">
					<?php 

						// TODO Faire une requête SQL pour générer une liste de trésorier à choisir!
						include_once('conecxion.php');

						$tresor_req = $dbh->query('SELECT id, nom FROM TRESORIER');
						$tresor_list = $tresor_req->fetchAll();
						foreach ($tresor_list as $tresor){
							echo '<option value="' . $tresor[0] . '">' . $tresor[1] . '</option>';
						}
					?>
				</select><br>

				<label for="envoi_tres">Envoyer sur l'adresse perso?</label>
				<input type="checkbox" name="envoi_tres" id="envoi_tres"><br>
				<input type="submit" value="Valider">

			</fieldset>

		</form>

		<?php 

			// TODO Changer les pages de traitement en php (en faire 2 distinctes et dans des sous-dossiers adaptés)

		?>
		<nav><p><a href="appli.php">cliquez ici</a> pour revenir au menu</p></nav>

	</body>

</html>