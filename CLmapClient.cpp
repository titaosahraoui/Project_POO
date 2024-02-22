#include "pch.h"
#include "CLmapClient.h"

namespace NS_Composants {
	CLmapClient::CLmapClient() {
		this->ID_Client = -1;
		this->Nom_Client = "RIEN";
		this->Prenom_Client = "RIEN";
		this->Telephone_Client = "RIEN";
        this->Date_de_naissance = DateTime::MinValue;
        this->Date_du_prm_achat = DateTime::MinValue;
	}
	String^ CLmapClient::SelectClient() {
		return "SELECT ID_Client, Nom_Client, Prenom_Client,Date_de_naissance,Telephone_Client, Date_du_prm_achat" +
			"FROM Client;";
	}
    String^ CLmapClient::INSERT(void) {
        return "INSERT INTO Client " +
            "(Nom_Client, Prenom_Client,Date_de_naissance,Telephone_Client,Date_du_prm_achat), " +
            "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getDateNaissance() + "', '" + this->getTelephone() + "', '" + this->getDatePrmAchat() + "');SELECT @@IDENTITY;";
    }
    String^ CLmapClient::UPDATE(void) {
        return "UPDATE Client " +
            "SET Nom_Client = '" + this->getNom() + "', Prenom_Client = '" + this->getPrenom() + "',Date_de_naissance = '" + this->getDateNaissance() + "',Telephone_Client = '" + this->getTelephone() + "',Date_du_prm_achat = '" + this->getDatePrmAchat() + "' " +
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
    void CLmapClient::setDateNaissance(DateTime Date_de_naissance) {
        if (Date_de_naissance != DateTime::MinValue)
        {
            this->Date_de_naissance = Date_de_naissance;
        }
    }
    void CLmapClient::setTelephone(String^ Telephone_Client) {
        if (Telephone_Client != "")
        {
            this->Telephone_Client = Telephone_Client;
        }
    }
    void CLmapClient::setDatePrmAchat(DateTime Date_du_prm_achat) {
        if (Date_du_prm_achat != DateTime::MinValue)
        {
            this->Date_du_prm_achat = Date_du_prm_achat;
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
    DateTime CLmapClient::getDateNaissance(void) {
        return this->Date_de_naissance;
    }
    DateTime CLmapClient::getDatePrmAchat(void) {
        return this->Date_du_prm_achat;
    }


}
	


