#include <iostream>
#include <string>
#include <vector>

struct Attaque {
    std::string nom;
    std::string description;
    int degats;

    // Constructeur
    Attaque(const std::string& _nom, const std::string& _description, int _degats)
        : nom(_nom), description(_description), degats(_degats) {}
};

class Pokemon {
public:
    std::string nom;
    int vie;
    std::string type;
    std::vector<Attaque> attaques;

    Pokemon(const std::string& _nom, int _vie, const std::string& _type)
        : nom(_nom), vie(_vie), type(_type) {}

    // Méthode pour ajouter une attaque au Pokémon
    void ajouterAttaque(const Attaque& attaque) {
        attaques.push_back(attaque);
    }

    // Méthode pour afficher les informations du Pokémon
    void afficherInfo() {
        std::cout << "\n" << std::endl;
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "Vie : " << vie << std::endl;
        std::cout << "Type : " << type << std::endl;
        std::cout << "Attaques : " << std::endl;
        for (const Attaque& attaque : attaques) {
            std::cout << "  - " << attaque.nom << " (" << attaque.degats << " degats)" << std::endl;
        }
        std::cout << "\n" << std::endl;
    }
};