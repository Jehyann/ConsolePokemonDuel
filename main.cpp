#include <iostream>
#include <string>
#include "players.h"
#include "pokemon.h"

int main() {
    Attaque attaque1("Flamme", "Lance une flamme ardente.", 30);
    Attaque attaque2("Charge", "Charge l'ennemi.", 20);

    Pokemon pokemon1("Salameche", 100, "Feu");
    pokemon1.ajouterAttaque(attaque1);

    Pokemon pokemon2("Bulbizarre", 100, "Plante");
    pokemon2.ajouterAttaque(attaque2);

    // Affiche les informations des Pokémon
    pokemon1.afficherInfo();
    pokemon2.afficherInfo();

    return 0;
}