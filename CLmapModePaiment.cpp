#include "pch.h"
#include "CLmapModePaiment.h"

namespace NS_Composants {
    CLmapModePaiment::CLmapModePaiment() {
        this->IDModedePaiment = -1;
        this->MoyenDePaiment = "RIEN";
        this->DateDePaiment = DateTime::MinValue;
        this->ID_Client = -1;
        this->ID_Commande = -1;
    }
    String^ CLmapModePaiment::SelectByIDCommande() {
        return "SELECT ID_Client, ID_Commande, IDModedePaiment,MoyenDePaiment,DateDePaiment" +
            "FROM mode_de_paiment;" + "WHERE(ID_Commande = " + this->getIDCommande() + ");";
    }
    String^ CLmapModePaiment::INSERT(void) {
        return "INSERT INTO mode_de_paiment " +
            "(ID_Client, ID_Commande,IDModedePaiment,MoyenDePaiment,DateDePaiment), " +
            "VALUES('" + this->getIDClient() + "', '" + this->getIDCommande() + "', '" + this->getIDModedePaiment() + "', '" + this->getMoyenDePaiment() + "', '" + this->getDatePaiment() + "');SELECT @@IDENTITY;";
    }
    String^ CLmapModePaiment::UPDATE(void) {
        return "UPDATE mode_de_paiment " +
            "SET ID_Client = '" + this->getIDClient() + "', ID_Commande = '" + this->getIDCommande() + "',IDModedePaiment = '" + this->getIDModedePaiment() + "',IDModedePaiment = '" + this->getMoyenDePaiment() + "',DateDePaiment = '" + this->getDatePaiment() + "' " +
            "WHERE(ID_Commande = " + this->getIDCommande() + ");";
    }
    String^ CLmapModePaiment::DELETE(void) {
        return "DELETE FROM mode_de_paiment " +
            "WHERE(IDModedePaiment = " + this->getIDModedePaiment() + ");";
    }
    void CLmapModePaiment::setIDModePaiment(int IDModedePaiment) {
        if (IDModedePaiment > 0)
        {
            this->IDModedePaiment = IDModedePaiment;
        }
    }

    void CLmapModePaiment::setMoyenPaiment(String^ MoyenDePaiment) {
        if (MoyenDePaiment != "")
        {
            this->MoyenDePaiment = MoyenDePaiment;
        }
    }
    void CLmapModePaiment::setDatePaiment(DateTime DateDePaiment) {
        if (DateDePaiment != DateTime::MinValue)
        {
            this->DateDePaiment = DateDePaiment;
        }
    }
    void CLmapModePaiment::setIDClient(int ID_Client) {
        if (ID_Client > 0)
        {
            this->ID_Client = ID_Client;
        }
    }
    void CLmapModePaiment::setIDCommande(int ID_Commande) {
        if (ID_Commande > 0)
        {
            this->ID_Commande = ID_Commande;
        }
    }

    int CLmapModePaiment::getIDModedePaiment(void) {
        return this->IDModedePaiment;
    }
    String^ CLmapModePaiment::getMoyenDePaiment(void) {
        return this->MoyenDePaiment;
    }
    DateTime CLmapModePaiment::getDatePaiment(void) {
        return this->DateDePaiment;
    }
    int CLmapModePaiment::getIDClient(void) {
        return this->ID_Client;
    }
    int CLmapModePaiment::getIDCommande(void) {
        return this->ID_Commande;
    }



}
