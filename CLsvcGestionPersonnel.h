#pragma once
#include "CL_CAD.h"
#include "CLmapPersonnel.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{

	ref class CLsvcGestionPersonnel
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CLmapPersonnel^ Personnel;
		DataSet^ ds;

	public:
		CLsvcGestionPersonnel();
		DataSet^ ListePersonnel(String^);
		void ajouter( String^, String^,String^,String^, int);
		void modifier(int,String^, String^, String^, String^, int);
		void supprimer(int);

	};
}

