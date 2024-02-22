#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
    ref class CLmapCommande
    {
    private:
        int ID_Commande;
        DateTime Date_Commande;
        DateTime Date_Livraison;
        DateTime Date_reglement_solde;
        int ID_Client;  
        String^ Nom_Client;  

    public:
        CLmapCommande(void);
        String^ SelectbyIDClient(void);
        String^ INSERT(void);
        String^ UPDATE(void);
        String^ DELETE(void);

        void setIDCommande(int);
        void setDateLivraison(DateTime);
        void setDateRegSolde(DateTime);
        void setDateCommande(DateTime);
        void setID_Client(int);  
        void setNomClient(String^);

        int getIDCommande(void);
        DateTime getDateCommande(void);
        DateTime getDateLivraison(void);
        DateTime getDateRegSolde(void);
        int getID_Client(void);  
        String^ getNomClient(void);
    };
}

