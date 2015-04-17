Les fichiers .cpp se trouve dans le dossier /src

Vous aurez un dossier ProjetDeGraphe...

- A la racine de dossier vous trouverez les fichiers de ressources du programme.
- Vous trouverez les fichiers .cpp qui se trouve dans le dossier ProjetDeGraphe

Pour compiler le code, il vous faut ouvrir un terminal et executer cette commande.

g++ main.cpp -std=c++11 -I  ../../../Essential/include/cpprest -L ../../../Essential/Binaries

Une fois terminé vous aurez normalement un fichier a.out qui sera généré (deja existant dans le projet...)

Dans une fenêtre de termine execute ce fichier simplement en tapant son nom.

Normalement à l'execution vous devriez avoir:
	" sa marche "
	...
	...
	... 
	Plein de ligne qui sont dans le fichiers Toulouse.csv "
	
En remontant le dossier parent, vous trouverez un fichier toulouse.csv qui ne contiendra qu'un seul ligne.

Il ne doit pas y avoir d'autre erreur...


Si vous avez ce resultat c'est que tout est ok.


Si vous l'avez pas encore fait, installer casablanca de cpprest. (Lien dans le projet de graphe . pdf)