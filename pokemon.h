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

struct Type {
    std::string nom;

    // Constructeur
    Type(const std::string& _nom)
        : nom(_nom) {}
};

class Pokemon {
public:
    std::string nom;
    int vie;
    std::vector<Type> types;
    std::vector<Attaque> attaques;

    Pokemon(const std::string& _nom, int _vie)
        : nom(_nom), vie(_vie){}

    // Méthode pour ajouter un type au Pokémon
    void ajouterType(const Type& type) {
        types.push_back(type);
    }
    // Méthode pour ajouter une attaque au Pokémon
    void ajouterAttaque(const Attaque& attaque) {
        attaques.push_back(attaque);
    }

    // Méthode pour afficher les informations du Pokémon
    void afficherInfo() {
        std::cout << "\n" << std::endl;
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "Vie : " << vie << std::endl;
        for (const Type& type : types) {
            std::cout << "Type : " << type.nom << std::endl;
        }
        std::cout << "Attaques : " << std::endl;
        for (const Attaque& attaque : attaques) {
            std::cout << "  - " << attaque.nom << " : " << attaque.description << std::endl;
        }
        std::cout << "\n" << std::endl;
    }
};