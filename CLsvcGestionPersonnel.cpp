#include "pch.h"
#include "CLsvcGestionPersonnel.h"

namespace NS_SVC
{
    CLsvcGestionPersonnel::CLsvcGestionPersonnel(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->Personnel = gcnew NS_Composants::CLmapPersonnel();
    }

    DataSet^ CLsvcGestionPersonnel::ListePersonnel(String^ dataTableName) {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->Personnel->Selectpersonnel(), dataTableName);
        return this->ds;
    }

    void CLsvcGestionPersonnel::ajouter(String^ nom, String^ prenom,String^ Date_embauche,String^ Date_de_naissance, int IDS) {
        this->Personnel->setNom(nom);
        this->Personnel->setPrenom(prenom);
        this->Personnel->setIDSuperviseur(IDS);
        this->cad->actionRowsID(this->Personnel->INSERT());
    }

    void CLsvcGestionPersonnel::modifier(int ID ,String^ nom, String^ prenom, String^ Date_embauche, String^ Date_de_naissance, int IDS) {
        this->Personnel->setNom(nom);
        this->Personnel->setPrenom(prenom);
       
        this->Personnel->setIDSuperviseur(IDS);
  
        this->cad->actionRowsID(this->Personnel->UPDATE());
    }

    void CLsvcGestionPersonnel::supprimer(int ID) {
        this->Personnel->setID(ID);
        this->cad->actionRowsID(this->Personnel->DELETE());
    }
}