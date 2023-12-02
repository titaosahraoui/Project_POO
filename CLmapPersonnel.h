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
		int Age_Personnel;
	public:
		CLmapPersonnel(void);
		String^ Selectpersonnel(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setID(int);
		void setNom(String^);
		void setPrenom(String^);
		void setAge(int);
		int getAge(void);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);

	};

}

