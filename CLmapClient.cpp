#include "pch.h"
#include "CLmapClient.h"

namespace NS_Composants {
	CLmapClient::CLmapClient() {
		this->ID_Client = -1;
		this->Nom_Client = "RIEN";
		this->Prenom_Client = "RIEN";
		this->Adress_Client = "RIen";
		this->Telephone_Client = "RIEN";
		this->Pays_Client = "RIEN";
	}
	String^ CLmapClient::SelectClient() {
		return "SELECT ID_Client, Nom_Client, Prenom_Client,Adress_Client,Telephone_Client, Pays_Client" +
			"FROM Client;";
	}
    String^ CLmapClient::INSERT(void) {
        return "INSERT INTO Client " +
            "(Nom_Client, Prenom_Client,Adress_Client,Telephone_Client,Pays_Client), " +
            "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getAdress() + "', '" + this->getTelephone() + "', '" + this->getPays() + "');SELECT @@IDENTITY;";
    }
    String^ CLmapClient::UPDATE(void) {
        return "UPDATE Client " +
            "SET Nom_Client = '" + this->getNom() + "', Prenom_Client = '" + this->getPrenom() + "',Adress_Client = '" + this->getAdress() + "',Telephone_Client = '" + this->getTelephone() + "',Pays_Client = '" + this->getPays() + "' " +
            "WHERE(ID_Client = " + this->getId() + ");";
    }
    String^ CLmapClient::DELETE(void) {
        return "DELETE FROM Client " +
            "WHERE(ID_Client = " + this->getId() + ");";
    }
    void CLmapClient::setID(int ID_Client) {
        if (ID_Client > 0)
        {
            this->ID_Client = ID_Client;
        }
    }

    void CLmapClient::setPrenom(String^ Prenom_Client) {
        if (Prenom_Client != "")
        {
            this->Prenom_Client = Prenom_Client;
        }
    }
    void CLmapClient::setNom(String^ Nom_Client) {
        if (Nom_Client != "")
        {
            this->Nom_Client = Nom_Client;
        }
    }
    void CLmapClient::setAdress(String^ Adress_Client) {
        if (Adress_Client != "")
        {
            this->Adress_Client = Adress_Client;
        }
    }
    void CLmapClient::setTelephone(String^ Telephone_Client) {
        if (Telephone_Client != "")
        {
            this->Telephone_Client = Telephone_Client;
        }
    }
    void CLmapClient::setPays(String^ Pays_Client) {
        if (Pays_Client != "")
        {
            this->Pays_Client = Pays_Client;
        }
    }

    int CLmapClient::getId(void) {
        return this->ID_Client;
    }
    String^ CLmapClient::getNom(void) {
        return this->Nom_Client;
    }
    String^ CLmapClient::getPrenom(void) {
        return this->Prenom_Client;
    }
    String^ CLmapClient::getTelephone(void) {
        return this->Telephone_Client;
    }
    String^ CLmapClient::getAdress(void) {
        return this->Adress_Client;
    }
    String^ CLmapClient::getPays(void) {
        return this->Pays_Client;
    }


}
	


