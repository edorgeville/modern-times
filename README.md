#modern-times
============

##Intention : 
Créer une boîte récréant l'univers d'une usine. Notre source d'inspiration fut les premières scènes du film "Modern Times" de Charlie Chaplin. Ainsi, un côté serait recouvert de rouages, un autre de boutons et de leviers et un dernier côté comporterait une glissade de boules qui s'illuminent lorsque la boule est au-dessus.

##[![Inpiration première](http://i.vimeocdn.com/video/70118928_1280x1024.jpg)](https://vimeo.com/12480554)
Ce projet réalisé par Saskia Freeke, Fin Kingma, Davy Jacobs et Sonja Van Vuure, quatre étudiants du "Utrecht School of Art and Technology", nous a grandement inspiré quant à la réalisation des procédés mécaniques et du style général de notre projet. 
'



##Conception : 
-Le coté des rouages serait contrôlé par deux moteurs indépendant qui permettraient d'avoir deux couches de rouages tournant dans des sens indépendant. Le sens et la vitesse des moteurs seraient contrôlés par deux potentiomètres placés sur le coté comportant tous les boutons et leviers.
    
-Le coté de la boule comporterait trois étages de glissades, avec des bandes de DELs collées sous celles-ci. En recouvrant la boule d'aluminium et en collant de petites bandes d'alluminium sur les glissages, nous voulons détecter la conductivité grâce au "Capacitive touch sensor" d'Adafruit. 

-Le côté comportant tous les boutons, potentiomètres et leviers comporterait trois boutons permettant de changer les modes d'animations des bandes de DELs. Deux leviers fonctionnant grâce des potentiomètres placés à l'horizontale contrôleraient le sens dans lequel tournent les moteurs. Enfin, les deux derniers potentiomètres placés à la verticales contrôlent la vitesse de rotation des moteurs des rouages. 




##Difficultés rencontrées : 
Lors de la réalisation de notre projet, nous avons rencontré divers problèmes inattendus qui nous ont fait perdre énormément de temps à tâtonner. 

-La réalisation de rouages à la main était particulièrement ardue.

-Lors de l'installation des bandes de DELs sur la boîte, nous étions inconscient que nous devions les installer dans un sens en particulier, perdant ainsi beaucoup de temps à tenter de comprendre le problème.

-Nous avons aussi rencontrer des difficultés avec notre capteur de capacitance, qui ne fonctionnait pas selon le plan proposé par Adafruit. Là où le document d'aide indiquait de connecter seulement l'un des "ground" du senseur au "ground" de notre Arduino, en essayant de tous les connecter, nous sommes parvenus à recevoir les données de capacitance de notre capteur.

'''
