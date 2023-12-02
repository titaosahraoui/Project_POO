#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {

	ref class CLmapClient
	{
	private:
		int ID_Client;
		String^ Nom_Client;
		String^ Prenom_Client;
		String^ Adress_Client;
		String^ Telephone_Client;
		String^ Pays_Client;

	public:
		CLmapClient(void);
		String^ SelectClient(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setID(int);
		void setNom(String^);
		void setPrenom(String^);
		void setAdress(String^);
		void setTelephone(String^);
		void setPays(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getAdress(void);
		String^ getTelephone(void);
		String^ getPays(void);
	};

}

