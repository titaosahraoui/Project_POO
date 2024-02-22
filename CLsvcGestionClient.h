#pragma once


#include "CL_CAD.h"
#include "CLmapPersonnel.h"
#include "CLmapCLient.h"
#include "CLmapProduit.h"
#include "CLmapCommande.h"



using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;



namespace NS_SVC
{
    ref class CLsvcGestionClient{

    private:
        NS_Composants::CL_CAD^ cad;
        NS_Composants::CLmapClient^ Client;
        DataSet^ ds;

    public:

        CLsvcGestionClient(void);
        DataSet^ listeClients(String^);
        void ajouter(int,String^,String^,String^,DateTime,DateTime);
        void modifier(int, String^, String^, String^, DateTime, DateTime);
        void supprimer(int);

    };

}


