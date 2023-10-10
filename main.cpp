#include <iostream>
#include <string>
#include "players.h"
#include "pokemon.h"

int main() {

    Attaque attaque1("Vive attaque", "Effectue une attaque si rapide que son ennemi ne voit rien.", 20);
    Attaque attaque2("Charge", "Charge l'ennemi.", 20);

    Type feu("Feu");
    Type plante("Plante");
    Type eau("Eau");
    Type spectre("Spectre");
    Type psy("Psy");
    Type electrik("Electrik");
    Type normal("Normal");
    Type combat("Combat");
    Type fee("Fee");
    Type acier("Acier");
    Type sol("Sol");
    Type vol("Vol");
    Type dragon("Dragon");
    Type tenebre("Tenebre");
    Type glace("Glace");
    Type poison("Poison");
    Type insecte("Insecte");
    Type roche("Roche");




    Pokemon pokemon1("Salameche", 100);
    pokemon1.ajouterType(feu);
    pokemon1.ajouterAttaque(attaque1);
    pokemon1.ajouterAttaque(attaque2);

    Pokemon pokemon2("Bulbizarre", 100);
    pokemon2.ajouterType(plante);
    pokemon2.ajouterAttaque(attaque1);
    pokemon2.ajouterAttaque(attaque2);

    Pokemon pokemon3("Carapuce", 100);
    pokemon3.ajouterType(eau);
    pokemon3.ajouterAttaque(attaque1);
    pokemon3.ajouterAttaque(attaque2);

    Pokemon pokemon4("Ectoplasma", 100);
    pokemon4.ajouterType(spectre);
    pokemon4.ajouterAttaque(attaque1);
    pokemon4.ajouterAttaque(attaque2);

    Pokemon pokemon5("Mewtwo", 100);
    pokemon5.ajouterType(psy);
    pokemon5.ajouterAttaque(attaque1);
    pokemon5.ajouterAttaque(attaque2);

    Pokemon pokemon6("Pikachu", 100);
    pokemon6.ajouterType(electrik);
    pokemon6.ajouterAttaque(attaque1);
    pokemon6.ajouterAttaque(attaque2);

    Pokemon pokemon7("Evoli", 100);
    pokemon7.ajouterType(normal);
    pokemon7.ajouterAttaque(attaque1);
    pokemon7.ajouterAttaque(attaque2);

    Pokemon pokemon8("Miaouss", 100);
    pokemon8.ajouterType(normal);
    pokemon8.ajouterAttaque(attaque1);
    pokemon8.ajouterAttaque(attaque2);

    Pokemon pokemon9("Lucario", 100);
    pokemon9.ajouterType(combat);
    pokemon9.ajouterAttaque(attaque1);
    pokemon9.ajouterAttaque(attaque2);

    Pokemon pokemon10("Azurill", 100);
    pokemon10.ajouterType(normal);
    pokemon10.ajouterAttaque(attaque1);
    pokemon10.ajouterAttaque(attaque2);

    Pokemon pokemon11("Melofee", 100);
    pokemon11.ajouterType(fee);
    pokemon11.ajouterAttaque(attaque1);
    pokemon11.ajouterAttaque(attaque2);

    Pokemon pokemon12("Taupiqueur", 100);
    pokemon12.ajouterType(sol);
    pokemon12.ajouterAttaque(attaque1);
    pokemon12.ajouterAttaque(attaque2);

    Pokemon pokemon13("Magneti", 100);
    pokemon13.ajouterType(acier);
    pokemon13.ajouterAttaque(attaque1);
    pokemon13.ajouterAttaque(attaque2);

    Pokemon pokemon14("Dracolosse", 100);
    pokemon14.ajouterType(vol);
    pokemon14.ajouterAttaque(attaque1);
    pokemon14.ajouterAttaque(attaque2);

    Pokemon pokemon15("Racaillou", 100);
    pokemon15.ajouterType(roche);
    pokemon15.ajouterAttaque(attaque1);
    pokemon15.ajouterAttaque(attaque2);

    Pokemon pokemon16("Draco", 100);
    pokemon16.ajouterType(dragon);
    pokemon16.ajouterAttaque(attaque1);
    pokemon16.ajouterAttaque(attaque2);

    Pokemon pokemon17("Noctali", 100);
    pokemon17.ajouterType(tenebre);
    pokemon17.ajouterAttaque(attaque1);
    pokemon17.ajouterAttaque(attaque2);

    Pokemon pokemon18("Leviator", 100);
    pokemon18.ajouterType(eau);
    pokemon18.ajouterAttaque(attaque1);
    pokemon18.ajouterAttaque(attaque2);

    Pokemon pokemon19("Farfuret", 100);
    pokemon19.ajouterType(glace);
    pokemon19.ajouterAttaque(attaque1);
    pokemon19.ajouterAttaque(attaque2);

    Pokemon pokemon20("Cacturne", 100);
    pokemon20.ajouterType(plante);
    pokemon20.ajouterAttaque(attaque1);
    pokemon20.ajouterAttaque(attaque2);

    Pokemon pokemon21("Tadmorv", 100);
    pokemon21.ajouterType(poison);
    pokemon21.ajouterAttaque(attaque1);
    pokemon21.ajouterAttaque(attaque2);

    Pokemon pokemon22("Cornebre", 100);
    pokemon22.ajouterType(tenebre);
    pokemon22.ajouterAttaque(attaque1);
    pokemon22.ajouterAttaque(attaque2);

    Pokemon pokemon23("Smogogo", 100);
    pokemon23.ajouterType(poison);
    pokemon23.ajouterAttaque(attaque1);
    pokemon23.ajouterAttaque(attaque2);

    Pokemon pokemon24("Nosferapti", 100);
    pokemon24.ajouterType(poison);
    pokemon24.ajouterAttaque(attaque1);
    pokemon24.ajouterAttaque(attaque2);

    Pokemon pokemon25("Alakazam", 100);
    pokemon25.ajouterType(psy);
    pokemon25.ajouterAttaque(attaque1);
    pokemon25.ajouterAttaque(attaque2);

    Pokemon pokemon26("Togepi", 100);
    pokemon26.ajouterType(fee);
    pokemon26.ajouterAttaque(attaque1);
    pokemon26.ajouterAttaque(attaque2);

    Pokemon pokemon27("Mimiqui", 100);
    pokemon27.ajouterType(spectre);
    pokemon27.ajouterAttaque(attaque1);
    pokemon27.ajouterAttaque(attaque2);

    Pokemon pokemon28("Necrozma", 100);
    pokemon28.ajouterType(psy);
    pokemon28.ajouterAttaque(attaque1);
    pokemon28.ajouterAttaque(attaque2);

    Pokemon pokemon29("Altaria", 100);
    pokemon29.ajouterType(vol);
    pokemon29.ajouterAttaque(attaque1);
    pokemon29.ajouterAttaque(attaque2);

    Pokemon pokemon30("Blizzaroi", 100);
    pokemon30.ajouterType(glace);
    pokemon30.ajouterAttaque(attaque1);
    pokemon30.ajouterAttaque(attaque2);

    Pokemon pokemon31("Nymphali", 100);
    pokemon31.ajouterType(fee);
    pokemon31.ajouterAttaque(attaque1);
    pokemon31.ajouterAttaque(attaque2);

    Pokemon pokemon32("Ponyta", 100);
    pokemon32.ajouterType(feu);
    pokemon32.ajouterAttaque(attaque1);
    pokemon32.ajouterAttaque(attaque2);

    Pokemon pokemon33("Scarabrute", 100);
    pokemon33.ajouterType(insecte);
    pokemon33.ajouterAttaque(attaque1);
    pokemon33.ajouterAttaque(attaque2);

    Pokemon pokemon34("Musteflott", 100);
    pokemon34.ajouterType(eau);
    pokemon34.ajouterAttaque(attaque1);
    pokemon34.ajouterAttaque(attaque2);

    Pokemon pokemon35("Luxray", 100);
    pokemon35.ajouterType(electrik);
    pokemon35.ajouterAttaque(attaque1);
    pokemon35.ajouterAttaque(attaque2);

    Pokemon pokemon36("Akwakwak", 100);
    pokemon36.ajouterType(eau);
    pokemon36.ajouterAttaque(attaque1);
    pokemon36.ajouterAttaque(attaque2);

    Pokemon pokemon37("Pohmarmotte", 100);
    pokemon37.ajouterType(electrik);
    pokemon37.ajouterAttaque(attaque1);
    pokemon37.ajouterAttaque(attaque2);

    Pokemon pokemon38("Demolosse", 100);
    pokemon38.ajouterType(feu);
    pokemon38.ajouterAttaque(attaque1);
    pokemon38.ajouterAttaque(attaque2);

    Pokemon pokemon39("Sucreine", 100);
    pokemon39.ajouterType(plante);
    pokemon39.ajouterAttaque(attaque1);
    pokemon39.ajouterAttaque(attaque2);



    // Afficher les informations des Pokémon
    pokemon1.afficherInfo();

    return 0;
}