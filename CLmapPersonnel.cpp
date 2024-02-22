#include "pch.h"
#include "CLmapPersonnel.h"

namespace NS_Composants {

    CLmapPersonnel::CLmapPersonnel(void) {
        this->ID_Personnel = -1;
        this->Nom_Personnel = "RIEN";
        this->Prenom_Personnel = "RIEN";
        this->Date_de_naissance = "RIEN";
        this->Date_embauche = "RIEN";
        this->ID_Superviseur = -1;

    }

    String^ CLmapPersonnel::Selectpersonnel(void) {
        return "SELECT * FROM Personnel;";
    }

    String^ CLmapPersonnel::INSERT(void) {
        return "INSERT INTO Personnel ( Nom_personnel, Prenom_personnel, Date_de_naissance, Date_d_ambauche, ID_Superieur)" +
                "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getDateNaissance() + "', '" + this->getDateEmbauche() + "', '" + this->geIDSuperviseur() + "');SELECT @@IDENTITY;";
    }

    String^ CLmapPersonnel::UPDATE(void) {
        return "UPDATE Personnel SET Nom_Personnel = '" + this->getNom() + "', Prenom_Personnel = '" + this->getPrenom() + "', Date_de_naissance = '" + this->getDateNaissance() + "', ID_Superviseur = " + this->geIDSuperviseur() + ", Date_d_embauche = '" + this->getDateEmbauche() + "' WHERE(ID_Personnel = " + this->getId() + ");";
    }

    String^ CLmapPersonnel::DELETE(void) {
        return "DELETE FROM Personnel WHERE(ID_Personnel = " + this->getId() + ");";
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
    void CLmapPersonnel::setDateEmbauche(String^ Date_embauche) {
        if (Date_embauche != "")
        {
            this->Date_embauche = Date_embauche;
        }
    }
    void CLmapPersonnel::setDateNaissance(String^ Date_de_naissance) {
        if (Date_de_naissance != "")
        {
            this->Date_de_naissance = Date_de_naissance;
        }
    }
    void CLmapPersonnel::setIDSuperviseur(int ID_Superviseur) {
        if (ID_Superviseur > 0) {
            this->ID_Superviseur = ID_Superviseur;
        }
    }
    int CLmapPersonnel::getId(void){
        return this->ID_Personnel;
    }
    int CLmapPersonnel::geIDSuperviseur(void) {
        return this->ID_Superviseur;
    }
    String^ CLmapPersonnel::getNom(void){
        return this->Nom_Personnel;
    }
    String^ CLmapPersonnel::getPrenom(void){
        return this->Prenom_Personnel;
    }
    String^ CLmapPersonnel::getDateEmbauche(void) {
        return this->Date_embauche;
    }
    String^ CLmapPersonnel::getDateNaissance(void) {
        return this->Date_de_naissance;
    }

}