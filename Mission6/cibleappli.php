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
		<form action="ecriture.php" method="post">
			<fieldset>
				<legend>Ajouter une ligue</legend>
				<label for="n_compte">N° Compte</label><input type="text" name="n_compte" id="n_compte"><br>
				<label for="intitule">Intitulé</label><input type="text" name="intitule" id="intitule"><br>
				<label for="nom_tresor">Nom du trésorier</label><input type="text" name="nom_tresor" id="nom_tresor"><br>
				<?php 
					// TODO Faire une requête SQL pour générer une liste de trésorier à choisir!
				?>
				<fieldset>
					<legend>Adresse</legend>
					<label for="ad_rue">Rue</label><input type="text" name="ad_rue" id="ad_rue"><br>
					<label for="cp">Code postal</label><input type="text" min="5" max="5" name="cp" id="cp"><br>
					<label for="ville">Ville</label><input type="text" name="ville" id="ville"><br>
				</fieldset>
				<input type="submit" value="Valider">
			</fieldset>
		</form>
		<?php 
			// TODO Changer les pages de traitement en php (en faire 2 distinctes et dans des sous-dossiers adaptés)
		?>
		<form action="ecriture.php" method="post">
			<fieldset>
				<legend>Ajouter une prestation</legend>
				<label for="code">Code</label><input type="text" name="code" id="code"><br>
				<label for="libel">Libellé</label><input type="text" name="libel" id="libel"><br>
				<label for="prix">Prix Unitaire</label><input type="number" step="0.1" min="0" name="prix" id="prix"><br>
				<input type="submit" value="Valider">
			</fieldset>
		</form>
		<nav><p><a href="appli.php">cliquez ici</a> pour revenir au menu</p></nav>
	</body>
</html>