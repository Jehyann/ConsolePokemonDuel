#include <iostream>
#include <string>
#include "players.h"
#include "pokemon.h"

int main() {

    Attaque attaque1("Vive attaque", "Effectue une attaque si rapide que son ennemi ne voit rien.", 20);
    Attaque attaque2("Charge", "Charge l'ennemi.", 20);



    Pokemon pokemon1("Salameche", 100, "Feu");
    pokemon1.ajouterAttaque(attaque1);
    pokemon1.ajouterAttaque(attaque2);

    Pokemon pokemon2("Bulbizarre", 100, "Plante");
    pokemon2.ajouterAttaque(attaque1);
    pokemon2.ajouterAttaque(attaque2);

    Pokemon pokemon3("Carapuce", 100, "Eau");
    pokemon3.ajouterAttaque(attaque1);
    pokemon3.ajouterAttaque(attaque2);

    Pokemon pokemon4("Ectoplasma", 100, "Spectre");
    pokemon4.ajouterAttaque(attaque1);
    pokemon4.ajouterAttaque(attaque2);

    Pokemon pokemon5("Mewtwo", 100, "Psy");
    pokemon5.ajouterAttaque(attaque1);
    pokemon5.ajouterAttaque(attaque2);

    Pokemon pokemon6("Pikachu", 100, "Electrique");
    pokemon6.ajouterAttaque(attaque1);
    pokemon6.ajouterAttaque(attaque2);

    Pokemon pokemon7("Evoli", 100, "Normal");
    pokemon7.ajouterAttaque(attaque1);
    pokemon7.ajouterAttaque(attaque2);

    Pokemon pokemon8("Miaouss", 100, "Normal");
    pokemon8.ajouterAttaque(attaque1);
    pokemon8.ajouterAttaque(attaque2);

    Pokemon pokemon9("Lucario", 100, "Combat");
    pokemon9.ajouterAttaque(attaque1);
    pokemon9.ajouterAttaque(attaque2);

    Pokemon pokemon10("Azurill", 100, "Normal");
    pokemon10.ajouterAttaque(attaque1);
    pokemon10.ajouterAttaque(attaque2);

    Pokemon pokemon11("Melofee", 100, "Fee");
    pokemon11.ajouterAttaque(attaque1);
    pokemon11.ajouterAttaque(attaque2);

    Pokemon pokemon12("Taupiqueur", 100, "Sol");
    pokemon12.ajouterAttaque(attaque1);
    pokemon12.ajouterAttaque(attaque2);

    Pokemon pokemon13("Magneti", 100, "Acier");
    pokemon13.ajouterAttaque(attaque1);
    pokemon13.ajouterAttaque(attaque2);

    Pokemon pokemon14("Dracolosse", 100, "Vol");
    pokemon14.ajouterAttaque(attaque1);
    pokemon14.ajouterAttaque(attaque2);

    Pokemon pokemon15("Racaillou", 100, "Roche");
    pokemon15.ajouterAttaque(attaque1);
    pokemon15.ajouterAttaque(attaque2);

    Pokemon pokemon16("Draco", 100, "Dragon");
    pokemon16.ajouterAttaque(attaque1);
    pokemon16.ajouterAttaque(attaque2);

    Pokemon pokemon17("Noctali", 100, "Tenebre");
    pokemon17.ajouterAttaque(attaque1);
    pokemon17.ajouterAttaque(attaque2);

    Pokemon pokemon18("Leviator", 100, "Eau");
    pokemon18.ajouterAttaque(attaque1);
    pokemon18.ajouterAttaque(attaque2);

    Pokemon pokemon19("Farfuret", 100, "Glace");
    pokemon19.ajouterAttaque(attaque1);
    pokemon19.ajouterAttaque(attaque2);

    Pokemon pokemon20("Cacturne", 100, "Plante");
    pokemon20.ajouterAttaque(attaque1);
    pokemon20.ajouterAttaque(attaque2);

    Pokemon pokemon21("Tadmorv", 100, "Poison");
    pokemon21.ajouterAttaque(attaque1);
    pokemon21.ajouterAttaque(attaque2);

    Pokemon pokemon22("Cornebre", 100, "Tenebre");
    pokemon22.ajouterAttaque(attaque1);
    pokemon22.ajouterAttaque(attaque2);

    Pokemon pokemon23("Smogogo", 100, "Poison");
    pokemon23.ajouterAttaque(attaque1);
    pokemon23.ajouterAttaque(attaque2);

    Pokemon pokemon24("Nosferapti", 100, "Poison");
    pokemon24.ajouterAttaque(attaque1);
    pokemon24.ajouterAttaque(attaque2);

    Pokemon pokemon25("Alakazam", 100, "Psy");
    pokemon25.ajouterAttaque(attaque1);
    pokemon25.ajouterAttaque(attaque2);

    Pokemon pokemon26("Togepi", 100, "Fee");
    pokemon26.ajouterAttaque(attaque1);
    pokemon26.ajouterAttaque(attaque2);

    Pokemon pokemon27("Mimiqui", 100, "Spectre");
    pokemon27.ajouterAttaque(attaque1);
    pokemon27.ajouterAttaque(attaque2);

    Pokemon pokemon28("Necrozma", 100, "Psy");
    pokemon28.ajouterAttaque(attaque1);
    pokemon28.ajouterAttaque(attaque2);

    Pokemon pokemon29("Altaria", 100, "Vol");
    pokemon29.ajouterAttaque(attaque1);
    pokemon29.ajouterAttaque(attaque2);

    Pokemon pokemon30("Blizzaroi", 100, "Glace");
    pokemon30.ajouterAttaque(attaque1);
    pokemon30.ajouterAttaque(attaque2);

    Pokemon pokemon31("Nymphali", 100, "Fee");
    pokemon31.ajouterAttaque(attaque1);
    pokemon31.ajouterAttaque(attaque2);

    Pokemon pokemon32("Ponyta", 100, "Feu");
    pokemon32.ajouterAttaque(attaque1);
    pokemon32.ajouterAttaque(attaque2);

    Pokemon pokemon33("Scarabrute", 100, "Insecte");
    pokemon33.ajouterAttaque(attaque1);
    pokemon33.ajouterAttaque(attaque2);

    Pokemon pokemon34("Musteflott", 100, "Eau");
    pokemon34.ajouterAttaque(attaque1);
    pokemon34.ajouterAttaque(attaque2);


    // Afficher les informations des Pokémon
    pokemon1.afficherInfo();

    return 0;
}