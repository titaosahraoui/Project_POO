#include "pch.h"

#include "CLmapPersonnel.h"



namespace NS_Composants{


    CLmapPersonnel::CLmapPersonnel(void){
        this->ID_Personnel = -1;
        this->Nom_Personnel = "RIEN";
        this->Prenom_Personnel = "RIEN";
        this->Age_Personnel = 0;
    }
    String^ CLmapPersonnel::Selectpersonnel(void) {
        return "SELECT ID_Personnel, Nom_Personnel, Prenom_Personnel,Age_Personnel " +
            "FROM Personnel;";
    }
    String^ CLmapPersonnel::INSERT(void){
        return "INSERT INTO Personnel " +
            "(Nom_Personnel, Prenom_Personnel,Age_Personnel) " +
            "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
    }
    String^ CLmapPersonnel::UPDATE(void){
        return "UPDATE Personnel " +
            "SET Nom_Personnel = '" + this->getNom() + "', Prenom_Personnel = '" + this->getPrenom() + "' " +
            "WHERE(ID_Personnel = " + this->getId() + ");";
    }
    String^ CLmapPersonnel::DELETE(void) {
        return "DELETE FROM Personnel " +
            "WHERE(ID_Personnel = " + this->getId() + ");";
    }
    void CLmapPersonnel::setID(int ID_Personnel) {
        if (ID_Personnel > 0)
        {
            this->ID_Personnel = ID_Personnel;
        }
    }

    void CLmapPersonnel::setPrenom(String^ Prenom_Personnel) {
        if (Prenom_Personnel != "")
        {
            this->Prenom_Personnel = Prenom_Personnel;
        }
    }
    void CLmapPersonnel::setNom(String^ Nom_Personnel) {
        if (Nom_Personnel != "")
        {
            this->Nom_Personnel = Nom_Personnel;
        }
    }
    void CLmapPersonnel::setAge(int Age_Personnel) {
        if (Age_Personnel > 0) {
            this->Age_Personnel = Age_Personnel;
        }
    }
    int CLmapPersonnel::getId(void){
        return this->ID_Personnel;
    }
    String^ CLmapPersonnel::getNom(void){
        return this->Nom_Personnel;
    }
    String^ CLmapPersonnel::getPrenom(void){
        return this->Prenom_Personnel;
    }
    int CLmapPersonnel::getAge(void) {
        return this->Age_Personnel;
    }

}