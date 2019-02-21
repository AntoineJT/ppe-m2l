ALTER TABLE LIGUE
ADD CONSTRAINT fk_tres_lig 
FOREIGN KEY (id_tresorier) REFERENCES TRESORIER(tresorier);

ALTER TABLE FACTURE
ADD CONSTRAINT fk_lig_fac 
FOREIGN KEY (compte_ligue) REFERENCES LIGUE(compte);

ALTER TABLE LIGNEFACTURE
ADD CONSTRAINT fk_fac_lfac 
FOREIGN KEY (numfacture) REFERENCES FACTURE(numfacture),
ADD CONSTRAINT fk_prest_lfac
FOREIGN KEY (code_prestation) REFERENCES PRESTATION(code);
