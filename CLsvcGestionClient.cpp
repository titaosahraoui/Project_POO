#include "pch.h"
#include "CLsvcGestionClient.h"

namespace NS_SVC
{
    CLsvcGestionClient::CLsvcGestionClient(void)
    {
        this->cad = gcnew NS_Composants::CL_CAD();
        this->Client = gcnew NS_Composants::CLmapClient();
    }

    DataSet^ CLsvcGestionClient::listeClients(String^ dataTableName) {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->Client->SelectClient(), dataTableName);
        return this->ds;
    }

    void CLsvcGestionClient::ajouter(int ID, String^ nom, String^ prenom, String^ tel, DateTime dateNaissance, DateTime datePrmAchat) {
        this->Client->setNom(nom);
        this->Client->setPrenom(prenom);
        this->Client->setDateNaissance(dateNaissance);
        this->Client->setDatePrmAchat(datePrmAchat);
        this->Client->setTelephone(tel);
        this->cad->actionRowsID(this->Client->INSERT());
    }

    void CLsvcGestionClient::modifier(int ID, String^ nom, String^ prenom,String^ tel, DateTime dateNaissance, DateTime datePrmAchat) {
        this->Client->setID(ID);
        this->Client->setNom(nom);
        this->Client->setPrenom(prenom);
        this->Client->setDateNaissance(dateNaissance);
        this->Client->setDatePrmAchat(datePrmAchat);
        this->Client->setTelephone(tel);
        this->cad->actionRowsID(this->Client->UPDATE());
    }

    void CLsvcGestionClient::supprimer(int ID) {
        this->Client->setID(ID);
        this->cad->actionRowsID(this->Client->DELETE());
    }
}