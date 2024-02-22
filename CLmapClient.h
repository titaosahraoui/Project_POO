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
		DateTime Date_de_naissance;
		DateTime Date_du_prm_achat;
		String^ Telephone_Client;

	public:
		CLmapClient(void);
		String^ SelectClient(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setID(int);
		void setNom(String^);
		void setPrenom(String^);
		void setDateNaissance(DateTime);
		void setDatePrmAchat(DateTime);
		void setTelephone(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		DateTime getDateNaissance(void);
		String^ getTelephone(void);
		DateTime getDatePrmAchat(void);
	};

}

