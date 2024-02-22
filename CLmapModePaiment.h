#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;


namespace NS_Composants {
	ref class CLmapModePaiment
	{
	private:
		int IDModedePaiment;
		String^ MoyenDePaiment;
		DateTime DateDePaiment;
		int ID_Client;
		int ID_Commande;
	public:
		CLmapModePaiment(void);
		String^ SelectByIDCommande(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setIDModePaiment(int);
		void setMoyenPaiment(String^);
		void setDatePaiment(DateTime);
		void setIDClient(int);
		void setIDCommande(int);

		int getIDModedePaiment(void);
		String^ getMoyenDePaiment(void);
		DateTime getDatePaiment(void);
		int getIDClient(void);
		int getIDCommande(void);

		

	};
}


