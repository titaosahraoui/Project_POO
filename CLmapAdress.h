#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;


namespace NS_Composants {
	ref class CLmapAdress
	{
	private:
		int ID_Adress;
		String^ Ville;
		int Code_Postal;
		int ID_Personnel;
		int ID_Client;
		int ID_Client_1;

	public:
		CLmapAdress(void);
		String^ SelectbyIDClient(void);
		String^ SelectbyIDPersonnel(void);
		String^ INSERT(void);
		String^ UPDATEaddClient(void);
		String^ UPDATEaddPersonnel(void);
		String^ DELETEaddClient(void);
		String^ DELETEaddPersonnel(void);

		void setIDAdress(int);
		void setVille(String^);
		void setCodePostal(int);
		void setIDClient(int);
		void setIDPersonnel(int);
		int getIDAdress(void);
		String^ getVille(void);
		int getCodePostal(void);
		int getIDClient(void);

		int getIDPersonnel(void);
	};

}


