DROP DATABASE RAYANE;
CREATE DATABASE RAYANE;
USE RAYANE;
DROP DATABASE IF EXISTS LIGUE;
DROP DATABASE IF EXISTS PRESTATION;
DROP DATABASE IF EXISTS FACTURE;
DROP DATABASE IF EXISTS LIGNEFACTURE;
DROP DATABASE IF EXISTS TRESORIER;


CREATE TABLE LIGUE 
(
	compte int(4),
	intitule varchar(100),
	sport varchar(9),
	id_tresorier int,
	CONSTRAINT pkLigue PRIMARY KEY (compte)
);

CREATE TABLE PRESTATION 
(
	code varchar(25),
	libelle varchar(40),
	pu float,
	CONSTRAINT pkPrestation PRIMARY KEY (code)
);

CREATE TABLE FACTURE 
(
	numfacture varchar(6),
	dates varchar(20),
	echeance varchar(20),
	compte_ligue int,
	CONSTRAINT pkFacture PRIMARY KEY (numfacture)
);

CREATE TABLE LIGNEFACTURE
(
	numfacture varchar(6),
	code_prestation varchar(25),
	quantite smallint,
	CONSTRAINT pkLigneFacture PRIMARY KEY (numfacture,code_prestation)
);

CREATE TABLE TRESORIER
(
	id int,
	nom varchar(100),
	adresse varchar(100),
	codepostal int(5),
	ville varchar(50),
	CONSTRAINT pkTresorier PRIMARY KEY (id)
  );
  
SHOW TABLES;