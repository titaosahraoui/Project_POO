#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants {
	ref class CLmapProduit
	{
	private:
		int ID_Produit;
		String^ Nom_Produit;
		String^ reference_Produit;
		int Quantite_Produit;
		int Prix_Produit;
		float Prix_hors_tax;
		float taux_TVA;
		String^ Image_Produit;
	public:
		CLmapProduit(void);
		String^ SelectProduit(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setNom(String^);
		void setPrix(int);
		void setQuantite(int);
		void setImage(String^);
		int getId(void);
		String^ getNom(void);
		int getPrix(void);
		int getQuantite(void);
		String^ getImage(void);

	};

}

