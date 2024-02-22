#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
	ref class CLmapPersonnel
	{
	private:
		int ID_Personnel;
		String^ Nom_Personnel;
		String^ Prenom_Personnel;
		String^ Date_embauche;
		String^ Date_de_naissance;
		int ID_Superviseur;
	

	public:
		CLmapPersonnel(void);
		String^ Selectpersonnel(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setID(int);
		void setIDSuperviseur(int);
		void setNom(String^);
		void setPrenom(String^);
		void setDateEmbauche(String^);
		void setDateNaissance(String^);


		int getId(void);
		int geIDSuperviseur(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getDateEmbauche(void);
		String^ getDateNaissance(void);

	};

}

