#include "pch.h"
#include "CLmapProduit.h"

namespace NS_Composants {
	CLmapProduit::CLmapProduit() {
		this->ID_Produit = -1;
		this->Nom_Produit = "RIEN";
		this->Prix_Produit = 0;
		this->Quantite_Produit = 0;
		this->Image_Produit = "RIen";
	}
	String^ CLmapProduit::SelectProduit() {
		return "SELECT ID_Produit, Nom_Produit,Prix_Produit,Quantite_Produit, Image_Produit" +
			"FROM Produit;";
	}
    String^ CLmapProduit::INSERT() {
        return "INSERT INTO Produit " +
            "(Nom_Produit, Prix_Produit, Quantite_Produit, Image_Produit) " +
            "VALUES('" + this->getNom() + "', " + this->getPrix() + ", " +
            this->getQuantite() + ", '" + this->getImage() + "');";
    }
	String^ CLmapProduit::UPDATE(void) {
		return "UPDATE Produit " +
			"SET Nom_Produit = '" + this->getNom() + "',Prix_Produit = '" + this->getPrix() + "',Quantite_Produit = '" + this->getQuantite() + "',Image_Produit = '" + this->getImage() + "' " +
			"WHERE(ID_Produit = " + this->getId() + ");";
	}
	String^ CLmapProduit::DELETE(void) {
		return "DELETE FROM Produit " +
			"WHERE(ID_Produit = " + this->getId() + ");";
	}
    void CLmapProduit::setID(int ID_Produit) {
        if (ID_Produit > 0)
        {
            this->ID_Produit = ID_Produit;
        }
    }
    void CLmapProduit::setNom(String^ Nom_Produit) {
        if (Nom_Produit != "")
        {
            this->Nom_Produit = Nom_Produit;
        }
    }
    void CLmapProduit::setPrix(int Prix_Produit) {
        if (Prix_Produit >= 0)
        {
            this->Prix_Produit = Prix_Produit;
        }
    }
    void CLmapProduit::setQuantite(int Quantite_Produit) {
        if (Quantite_Produit > 0)
        {
            this->Quantite_Produit = Quantite_Produit;
        }
    }
    void CLmapProduit::setImage(String^ Image_Produit) {
        if (Image_Produit != "")
        {
            this->Image_Produit = Image_Produit;
        }
    }

    int CLmapProduit::getId(void) {
        return this->ID_Produit;
    }
    String^ CLmapProduit::getNom(void) {
        return this->Nom_Produit;
    }
    int CLmapProduit::getPrix(void) {
        return this->Prix_Produit;
    }
    int CLmapProduit::getQuantite(void) {
        return this->Quantite_Produit;
    }
    String^ CLmapProduit::getImage(void) {
        return this->Image_Produit;
    }
}
