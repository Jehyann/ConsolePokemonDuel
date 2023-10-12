#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "pokemon.h"

void afficherListePokemon(const std::vector<Pokemon>& pokemonList) {
    std::cout << "Liste des Pokemon disponibles :" << std::endl;
    for (const Pokemon& pokemon : pokemonList) {
        std::cout << pokemon.nom << " (Type : " << pokemon.type << ")" << std::endl;
    }
}

// CHOISI LE PREMIER JOUEUR AU HASARD --------------------------------------------------------------------------------------------------------------------------------
int randomPremierJoueur() {
    return std::rand() % 2;
}

// CHOISI LES DEGATS AU HASARD --------------------------------------------------------------------------------------------------------------------------------------
int randomDegats() {
    int degats = 5 + (std::rand() % 31); 
    return degats;
}

// CONDITION SORTIE WHILE EQUIPE MORTE -------------------------------------------------------------------------------------------------------------------------------
bool equipeMorte(const std::vector<Pokemon>& equipe) {
    for (const Pokemon& p : equipe) {
        if (p.vie > 0 ) {
            return false;  // Si 1p en vie
        }
    }
    return true;  // Si 0p en vie
}

void changerPokemon(std::vector<Pokemon>& equipe) {
    bool choixValide = false; // permet de sortir uniquement si le joueur a saisi un pokemon en vie

    while (!choixValide && !equipeMorte(equipe)) {
        std::cout << "Choisissez le Pokemon avec lequel vous souhaitez échanger (1, 2, 3) : " << std::endl;
        for (size_t i = 0; i < equipe.size(); ++i) {
            std::cout << i + 1 << "# " << equipe[i].nom << std::endl;
        }

        int choixPokemon;
        std::cin >> choixPokemon;

        if (choixPokemon >= 1 && choixPokemon <= equipe.size()) {
            if (equipe[choixPokemon - 1].vie <= 0) {
                std::cout << "Ce Pokemon est KO et ne peut pas être sélectionné." << std::endl;
            } else {
                // échange le pokémon actif [0] avec le pokémon choisi
                std::swap(equipe[0], equipe[choixPokemon - 1]);
                std::cout << "Vous avez échangé votre Pokémon actif avec " << equipe[0].nom << "." << std::endl;
                choixValide = true;
            }
        } else {
            std::cout << "Choix de Pokémon non valide." << std::endl;
        }
    }
}

int main() {
    // INITIALISATION DES POKEMON --------------------------------------------------------------------------------------------------------------------------------
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    Attaque attaqueCharge("Charge", "Charge l'ennemi", 20);
    Attaque attaqueViveAtt("Vive-attaque", "Effectue une attaque si rapide que son ennemi ne voit rien", 20);

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

    // DEMANDE NOM JOUEUR --------------------------------------------------------------------------------------------------------------------------------
    std::string joueur1, joueur2;
    std::cout << "Joueur 1, veuillez entrer votre prenom : ";
    std::cin >> joueur1;
    std::cout << "Joueur 2, veuillez entrer votre prenom : ";
    std::cin >> joueur2;
    std::cout << std::endl;

    // INITIALISATION DES EQUIPE --------------------------------------------------------------------------------------------------------------------------------
    for (Pokemon& p : availablePokemon) {
        p.ajouterAttaque(attaqueCharge);
        p.ajouterAttaque(attaqueViveAtt);
    }
    
    std::vector<Pokemon> equipeJoueur1;
    std::vector<Pokemon> equipeJoueur2;
    
    // AFFICHE LA LISTE --------------------------------------------------------------------------------------------------------------------------------
    afficherListePokemon(availablePokemon);
    std::cout << std::endl;

    // CHOIX POKEMON EQUIPE --------------------------------------------------------------------------------------------------------------------------------
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

    std::cout << std::endl;
    std::cout << joueur2 << ", choisissez 3 Pokemon pour votre equipe :" << std::endl;
    std::vector<std::string> equipeJoueur2Noms; 

    for (int i = 0; i < 3; ++i) {
        std::string nomPokemon;
        std::cout << "Pokemon #" << (i + 1) << ": ";
        std::cin >> nomPokemon;

        bool dejaDansEquipe = false;

        for (const std::string& nom : equipeJoueur2Noms) {
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
                    equipeJoueur2.push_back(p);
                    equipeJoueur2Noms.push_back(p.nom);
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

    // AFFICHAGE DES EQUIPES  --------------------------------------------------------------------------------------------------------------------------------
    std::cout << std::endl;
    std::cout << joueur1 << ", voici votre equipe :" << std::endl;
    for (const Pokemon& p : equipeJoueur1) {
        p.afficherInfo();
    }

    std::cout << std::endl;
    std::cout << joueur2 << ", voici votre equipe :" << std::endl;
    for (const Pokemon& p : equipeJoueur2) {
        p.afficherInfo();
    }

    // DEBUT DU COMBAT --------------------------------------------------------------------------------------------------------------------------------
    int tourJoueur = randomPremierJoueur();
    if (tourJoueur == 0) {
        std::cout << std::endl;
        std::cout << joueur1 << " commence le combat !" << std::endl;
        } else {
        std::cout << std::endl;
        std::cout << joueur2 << " commence le combat !" << std::endl;
    }

    // BOUCLE -------------------------------------------------------------------------------------------------------------------------------------------
    while(true) {
        int choix;
        int degats;

        // TOUR JOUEUR 1 ---------------------------------------------------------------------------------------------------------------------------------
        if (tourJoueur == 0) {
            std::cout << joueur1 << ", Qu'allez-vous faire ? (1) Attaquer (2) Changer de pokemon (passe le tour) (3) Passer le tour" << std::endl;
            std::cin >> choix;

            // Attaque
            if (choix == 1) {
                int degats = randomDegats();
                equipeJoueur2[0].vie -= degats;
                std::cout << equipeJoueur1[0].nom << " a fait " << degats << " degats a "<< equipeJoueur2[0].nom << "." << std::endl;
                std::cout << equipeJoueur2[0].nom << " a maintenant " << equipeJoueur2[0].vie << " PV." << std::endl;
                std::cout << std::endl;

                if (equipeJoueur2[0].vie <= 0 && !equipeMorte(equipeJoueur1)) {
                    std::cout << "Oh non ! " << equipeJoueur2[0].nom << " est KO. " << std::endl;
                    equipeJoueur2[0].vie = 0; // permet de set la vie à 0 et pas - de 0
                    changerPokemon(equipeJoueur2);
                }
                tourJoueur = 1;

            // Changement de pokemon
            } else if (choix == 2) {
                std::cout << joueur1 << ", voici votre equipe actuelle :" << std::endl;
                for (const Pokemon& p : equipeJoueur1) {
                    p.afficherInfo();
                }
                changerPokemon(equipeJoueur1);
                std::cout << joueur1 << ", voici votre equipe à présent :" << std::endl;
                for (const Pokemon& p : equipeJoueur1) {
                    p.afficherInfo();
                }
                tourJoueur = 1;

            // Passer le tour
            } else if (choix == 3) {
                tourJoueur = 1;

            // Erreur prise en compte
            } else {
            std::cout << "Choix non valide. Veuillez choisir une action valide." << std::endl;
            }
        } 

        // TOUR JOUEUR 2 -----------------------------------------------------------------------------------------------------------------------------------
        else {
            std::cout << joueur2 << ", Qu'allez-vous faire ? (1) Attaquer (2) Changer de pokemon (passe le tour) (3) Passer le tour" << std::endl;
            std::cin >> choix;

            // Attaque
            if (choix == 1) {

                int degats = randomDegats();
                equipeJoueur1[0].vie -= degats;
                std::cout << equipeJoueur2[0].nom << " a fait " << degats << " degats a "<< equipeJoueur1[0].nom << "." << std::endl;
                std::cout << equipeJoueur1[0].nom << " a maintenant " << equipeJoueur1[0].vie << " PV." << std::endl;
                std::cout << std::endl;

                if (equipeJoueur1[0].vie <= 0 && !equipeMorte(equipeJoueur2)) {
                    std::cout << "Oh non ! " << equipeJoueur1[0].nom << " est KO. " << std::endl;
                    equipeJoueur1[0].vie = 0; // permet de set la vie à 0 et pas - de 0
                    changerPokemon(equipeJoueur1);
                }
                tourJoueur = 0;

            // Changement de pokemon
            } else if (choix == 2) {
                std::cout << joueur2 << ", voici votre equipe actuelle :" << std::endl;
                for (const Pokemon& p : equipeJoueur2) {
                    p.afficherInfo();
                }
                changerPokemon(equipeJoueur2);
                std::cout << joueur2 << ", voici votre equipe à présent :" << std::endl;
                for (const Pokemon& p : equipeJoueur2) {
                    p.afficherInfo();
                }
                tourJoueur = 0;

            // Passer le tour
            } else if (choix == 3) {
                tourJoueur = 0;
            
            // Erreur prise en compte
            } else {
            std::cout << "Choix non valide. Veuillez choisir une action valide." << std::endl;
            }
        }

            // CONDITION DE FIN --------------------------------------------------------------------------------------------------------------------------------
        if (equipeMorte(equipeJoueur1) || equipeMorte(equipeJoueur2)) {
            if (equipeMorte(equipeJoueur1)) {
                std::cout << joueur2 << " est le vainqueur !" << std::endl;
            } else if (equipeMorte(equipeJoueur2)) {
                std::cout << joueur1 << " est le vainqueur !" << std::endl;
            }
            break;
        }


    };

    return 0;
}
