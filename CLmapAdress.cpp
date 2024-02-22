#include "pch.h"
#include "CLmapAdress.h"


namespace NS_Composants {
    CLmapAdress::CLmapAdress() {
        this->ID_Client = -1;
        this->ID_Personnel = -1;
        this->Ville = "RIEN";
        this->Code_Postal = 0;
    }
    String^ CLmapAdress::SelectbyIDClient() {
        return "SELECT ID_Client, Nom_Client, Prenom_Client,Adress_Client,Telephone_Client, Pays_Client" +
            "FROM Client;" + "WHERE(ID_Client = " + this->getIDClient() + ");";
    }
    String^ CLmapAdress::SelectbyIDPersonnel() {
        return "SELECT ID_Personnel, Nom_Client, Prenom_Client,Adress_Client,Telephone_Client, Pays_Client" +
            "FROM Client;"  +"WHERE(ID_Personnel = " + this->getIDPersonnel() + ");";
    }
    String^ CLmapAdress::INSERT(void) {
        return "INSERT INTO Adress " +
            "(VIlle, COde_Postal,ID_Personnel,ID_Client), " +
            "VALUES('" + this->getVille() + "', '" + this->getCodePostal() + "');SELECT @@IDENTITY;";
    }
    String^ CLmapAdress::UPDATEaddClient(void) {
        return "UPDATE Adress " +
            "SET Ville = '" + this->getVille() + "', Code_Postal = '" + this->getCodePostal() + "',ID_Client = '" + this->getIDClient() + "'" +
            "WHERE(ID_Client = " + this->getIDClient() + ");";
    }
    String^ CLmapAdress::UPDATEaddPersonnel(void) {
        return "UPDATE Adress " +
            "SET Ville = '" + this->getVille() + "', Code_Postal = '" + this->getCodePostal() + "',ID_Personnel = '" + this->getIDPersonnel() + "'" +
            "WHERE(ID_Personnel = " + this->getIDPersonnel() + ");";
    }
    String^ CLmapAdress::DELETEaddClient(void) {
        return "DELETE FROM Adress " +
            "WHERE(ID_Client = " + this->getIDClient() + ");";
    }
    String^ CLmapAdress::DELETEaddPersonnel(void) {
        return "DELETE FROM Adress " +
            "WHERE(ID_Personnel = " + this->getIDPersonnel() + ");";
    }
    void CLmapAdress::setIDClient(int ID_Client) {
        if (ID_Client > 0)
        {
            this->ID_Client = ID_Client;
        }
    }
    void CLmapAdress::setIDPersonnel(int ID_Personnel) {
        if (ID_Personnel > 0)
        {
            this->ID_Personnel = ID_Personnel;
        }
    }
    void CLmapAdress::setIDAdress(int ID_Adress) {
        if (ID_Adress > 0)
        {
            this->ID_Adress = ID_Adress;
        }
    }

    void CLmapAdress::setVille(String^ Ville) {
        if (Ville != "")
        {
            this->Ville = Ville;
        }
    }
    void CLmapAdress::setCodePostal(int Code_Postal) {
        if (Code_Postal > 0)
        {
            this->Code_Postal = Code_Postal;
        }
    }

    int CLmapAdress::getIDPersonnel(void) {
        return this->ID_Personnel;
    }
    int CLmapAdress::getIDClient(void) {
        return this->ID_Client;
    }
    String^ CLmapAdress::getVille(void) {
        return this->Ville;
    }
    int CLmapAdress::getCodePostal(void) {
        return this->Code_Postal;
    }
    int CLmapAdress::getIDAdress(void) {
        return this->ID_Adress;
    }

}