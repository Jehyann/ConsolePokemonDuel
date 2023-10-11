#include <iostream>
#include <vector>
#include "pokemon.h"

void afficherListePokemon(const std::vector<Pokemon>& pokemonList) {
    std::cout << "Liste des Pokemon disponibles :" << std::endl;
    for (const Pokemon& pokemon : pokemonList) {
        std::cout << pokemon.nom << " (Type : " << pokemon.type << ")" << std::endl;
    }
}

int main() {
    std::string joueur1, joueur2;
    std::cout << "Joueur 1, veuillez entrer votre prenom : ";
    std::cin >> joueur1;
    std::cout << "Joueur 2, veuillez entrer votre prenom : ";
    std::cin >> joueur2;

    std::vector<Pokemon> availablePokemon;
    availablePokemon.push_back(Pokemon("Salameche", 100, "Feu"));
    availablePokemon.push_back(Pokemon("Bulbizarre", 100, "Plante"));
    availablePokemon.push_back(Pokemon("Carapuce", 100, "Eau"));
    availablePokemon.push_back(Pokemon("Ectoplasma", 100, "Spectre"));
    availablePokemon.push_back(Pokemon("Mewtwo", 100, "Psy"));
    availablePokemon.push_back(Pokemon("Pikachu", 100, "Electrique"));
    availablePokemon.push_back(Pokemon("Evoli", 100, "Normal"));
    availablePokemon.push_back(Pokemon("Miaouss", 100, "Normal"));
    availablePokemon.push_back(Pokemon("Lucario", 100, "Combat"));
    availablePokemon.push_back(Pokemon("Azurill", 100, "Normal"));
    availablePokemon.push_back(Pokemon("Melofee", 100, "Fee"));
    availablePokemon.push_back(Pokemon("Taupiqueur", 100, "Sol"));
    availablePokemon.push_back(Pokemon("Magneti", 100, "Acier"));
    availablePokemon.push_back(Pokemon("Dracolosse", 100, "Vol"));
    availablePokemon.push_back(Pokemon("Racaillou", 100, "Roche"));
    availablePokemon.push_back(Pokemon("Draco", 100, "Dragon"));
    availablePokemon.push_back(Pokemon("Noctali", 100, "Tenebre"));
    availablePokemon.push_back(Pokemon("Leviator", 100, "Eau"));
    availablePokemon.push_back(Pokemon("Farfuret", 100, "Glace"));
    availablePokemon.push_back(Pokemon("Cacturne", 100, "Plante"));
    availablePokemon.push_back(Pokemon("Tadmorv", 100, "Poison"));
    availablePokemon.push_back(Pokemon("Cornebre", 100, "Tenebre"));
    availablePokemon.push_back(Pokemon("Smogogo", 100, "Poison"));
    availablePokemon.push_back(Pokemon("Nosferapti", 100, "Poison"));
    availablePokemon.push_back(Pokemon("Alakazam", 100, "Psy"));
    availablePokemon.push_back(Pokemon("Togepi", 100, "Fee"));
    availablePokemon.push_back(Pokemon("Mimiqui", 100, "Spectre"));
    availablePokemon.push_back(Pokemon("Necrozma", 100, "Psy"));
    availablePokemon.push_back(Pokemon("Altaria", 100, "Vol"));
    availablePokemon.push_back(Pokemon("Blizzaroi", 100, "Glace"));
    availablePokemon.push_back(Pokemon("Nymphali", 100, "Fee"));
    availablePokemon.push_back(Pokemon("Ponyta", 100, "Feu"));
    availablePokemon.push_back(Pokemon("Musteflott", 100, "Eau"));
    availablePokemon.push_back(Pokemon("Scarabrute", 100, "Insecte"));

    std::vector<Pokemon> equipeJoueur1;
    std::vector<Pokemon> equipeJoueur2;

    // afficher la liste de Pokémon
    afficherListePokemon(availablePokemon);


std::cout << joueur1 << ", choisissez 3 Pokemon pour votre equipe :" << std::endl;
std::vector<std::string> equipeJoueur1Noms; // liste des noms des Pokémon dans l'équipe

for (int i = 0; i < 3; ++i) {
    std::string nomPokemon;
    std::cout << "Pokemon #" << (i + 1) << ": ";
    std::cin >> nomPokemon;

    bool dejaDansEquipe = false;
    
    for (const std::string& nom : equipeJoueur1Noms) {
        // vérifier si le nom du pokemon est déjà dans l'équipe
        if (nom == nomPokemon) {
            dejaDansEquipe = true;
            break;
        }
    }

    if (dejaDansEquipe) {
        std::cout << "Ce Pokemon est deja dans votre equipe. Choisissez un autre Pokemon." << std::endl;
        --i; // 'i' pour revenir à la sélection du même Pokemon
    } else {
        bool pokemonValide = false;

        for (const Pokemon& p : availablePokemon) {
            if (p.nom == nomPokemon) {
                equipeJoueur1.push_back(p);
                equipeJoueur1Noms.push_back(p.nom);
                pokemonValide = true;
                break;
            }
        }

        if (!pokemonValide) {
            std::cout << "Le nom de Pokemon saisi n'est pas valide. Choisissez un Pokemon de la liste." << std::endl;
            --i; //pour revenir à la sélection du même pok
        }
    }
}

    std::cout << joueur2 << ", choisissez 3 Pokemon pour votre equipe :" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::string nomPokemon;
        std::cout << "Pokemon #" << (i + 1) << ": ";
        std::cin >> nomPokemon;

        for (const Pokemon& p : availablePokemon) {
            if (p.nom == nomPokemon) {
                equipeJoueur2.push_back(p);
                break;
            }
        }
    }

    // afficher les équipes des joueurs
    std::cout << joueur1 << ", voici votre equipe :" << std::endl;
    for (const Pokemon& p : equipeJoueur1) {
        p.afficherInfo();
    }

    std::cout << joueur2 << ", voici votre equipe :" << std::endl;
    for (const Pokemon& p : equipeJoueur2) {
        p.afficherInfo();
    }
    
    return 0;
}
