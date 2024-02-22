#include "pch.h"
#include "CLmapCommande.h"  // Include the header file if it's in a separate file

namespace NS_Composants {
    // Constructor
    CLmapCommande::CLmapCommande() {
        this->ID_Commande = -1;
        this->Date_Commande = DateTime::MinValue;
        this->Date_reglement_solde = DateTime::MinValue;
        this->ID_Client = -1;
        this->Nom_Client = "RIEN";
    }

    // Setters
    void CLmapCommande::setIDCommande(int id) {
        this->ID_Commande = id;
    }

    void CLmapCommande::setDateCommande(DateTime date) {
        this->Date_Commande = date;
    }
    void CLmapCommande::setDateLivraison(DateTime dateliv) {
        this->Date_Livraison = dateliv;
    }
    void CLmapCommande::setDateRegSolde(DateTime dateRegSolde) {
        this->Date_Livraison = dateRegSolde;
    }

    void CLmapCommande::setID_Client(int idClient) {
        this->ID_Client = idClient;
    }

    void CLmapCommande::setNomClient(String^ nomClient) {
        this->Nom_Client = nomClient;
    }

    // Getters
    int CLmapCommande::getIDCommande() {
        return this->ID_Commande;
    }

    DateTime CLmapCommande::getDateCommande() {
        return this->Date_Commande;
    }
    DateTime CLmapCommande::getDateLivraison() {
        return this->Date_Livraison;
    }
    DateTime CLmapCommande::getDateRegSolde() {
        return this->Date_reglement_solde;
    }

    int CLmapCommande::getID_Client() {
        return this->ID_Client;
    }

    String^ CLmapCommande::getNomClient() {
        return this->Nom_Client;
    }

    // SQL Queries
    String^ CLmapCommande::INSERT() {
        return "INSERT INTO Commande (ID_Commande, Date_Commande,Date_Livraison,Date_reglement_solde, ID_Client, Nom_Client) VALUES (" +
            this->getID_Client() + ", '" + this->getDateCommande() + "', '" + this->getDateRegSolde() + "', " + this->getID_Client() + ", '" + this->getNomClient() + "');";
    }

    String^ CLmapCommande::SelectbyIDClient() {
        return "SELECT ID_Commande, Date_Commande, ID_Client, Nom_Client FROM Commande;" +
            "FROM Command" +
            "Where(ID_Client = " + this->ID_Client + ");";

    }
    String^ CLmapCommande::UPDATE() {
        return "UPDATE Commande SET Date_Commande = '" + this->getDateCommande() + "', ID_Client = " + this->getID_Client() +
            ", Nom_Client = '" + this->getNomClient() + "' WHERE ID_Commande = " + this->getIDCommande() + ";";
    }

    String^ CLmapCommande::DELETE() {
        return "DELETE FROM Commande WHERE ID_Commande = " + this->getID_Client() + ";";
    }

    // Add implementations for other SQL queries (UPDATE, DELETE) as needed.
}
