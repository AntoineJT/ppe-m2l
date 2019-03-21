<!DOCTYPE HTML>
<html lang="fr">
	<head>
		<title>Ajouter une ligue</title>
		<meta charset="utf-8">
	</head>
	<body>
		<form action="post/prestation.php" method="post">
			<fieldset>
				<legend>Ajouter une prestation</legend>
				<label for="code">Code</label><input type="text" name="code" id="code"><br>
				<label for="libel">Libellé</label><input type="text" name="libel" id="libel"><br>
				<label for="prix">Prix Unitaire</label><input type="number" step="0.1" min="0" name="prix" id="prix"><br>
				<input type="submit" value="Valider">
			</fieldset>
		</form>
		<nav>
			<p><a href="index.php">Cliquez ici</a> pour revenir au menu</p>
		</nav>
	</body>
</html>
