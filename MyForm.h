#pragma once

namespace POO {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel1->Size = System::Drawing::Size(229, 612);
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ bntPersonnel;

	private: System::Windows::Forms::Button^ btnCategorie;

	private: System::Windows::Forms::Button^ btnProduit;
	private: System::Windows::Forms::Button^ btnCommande;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnCommande = (gcnew System::Windows::Forms::Button());
			this->bntPersonnel = (gcnew System::Windows::Forms::Button());
			this->btnCategorie = (gcnew System::Windows::Forms::Button());
			this->btnProduit = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->btnCommande);
			this->panel1->Controls->Add(this->bntPersonnel);
			this->panel1->Controls->Add(this->btnCategorie);
			this->panel1->Controls->Add(this->btnProduit);
			this->panel1->Controls->Add(this->btnClient);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 528);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(189, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(36, 32);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btnCommande
			// 
			this->btnCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->btnCommande->FlatAppearance->BorderSize = 0;
			this->btnCommande->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->btnCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCommande->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommande->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCommande->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCommande.Image")));
			this->btnCommande->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCommande->Location = System::Drawing::Point(12, 328);
			this->btnCommande->Name = L"btnCommande";
			this->btnCommande->Size = System::Drawing::Size(219, 65);
			this->btnCommande->TabIndex = 8;
			this->btnCommande->Text = L"       Commande";
			this->btnCommande->UseVisualStyleBackColor = false;
			// 
			// bntPersonnel
			// 
			this->bntPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->bntPersonnel->FlatAppearance->BorderSize = 0;
			this->bntPersonnel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->bntPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bntPersonnel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bntPersonnel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->bntPersonnel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bntPersonnel.Image")));
			this->bntPersonnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bntPersonnel->Location = System::Drawing::Point(12, 429);
			this->bntPersonnel->Name = L"bntPersonnel";
			this->bntPersonnel->Size = System::Drawing::Size(219, 65);
			this->bntPersonnel->TabIndex = 7;
			this->bntPersonnel->Text = L"       Personnel";
			this->bntPersonnel->UseVisualStyleBackColor = false;
			// 
			// btnCategorie
			// 
			this->btnCategorie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->btnCategorie->FlatAppearance->BorderSize = 0;
			this->btnCategorie->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->btnCategorie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCategorie->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCategorie->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCategorie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCategorie.Image")));
			this->btnCategorie->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCategorie->Location = System::Drawing::Point(12, 223);
			this->btnCategorie->Name = L"btnCategorie";
			this->btnCategorie->Size = System::Drawing::Size(219, 65);
			this->btnCategorie->TabIndex = 6;
			this->btnCategorie->Text = L"       Categorie";
			this->btnCategorie->UseVisualStyleBackColor = false;
			// 
			// btnProduit
			// 
			this->btnProduit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->btnProduit->FlatAppearance->BorderSize = 0;
			this->btnProduit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->btnProduit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProduit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProduit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnProduit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnProduit.Image")));
			this->btnProduit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProduit->Location = System::Drawing::Point(12, 130);
			this->btnProduit->Name = L"btnProduit";
			this->btnProduit->Size = System::Drawing::Size(216, 65);
			this->btnProduit->TabIndex = 5;
			this->btnProduit->Text = L"    Produit";
			this->btnProduit->UseVisualStyleBackColor = false;
			// 
			// btnClient
			// 
			this->btnClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->btnClient->FlatAppearance->BorderSize = 0;
			this->btnClient->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->btnClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClient->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClient.Image")));
			this->btnClient->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClient->Location = System::Drawing::Point(12, 44);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(219, 65);
			this->btnClient->TabIndex = 4;
			this->btnClient->Text = L"  Client";
			this->btnClient->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(231, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(910, 15);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1105, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 32);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(1065, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 32);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1141, 528);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel1->Width == 229) {
			panel1->Size = System::Drawing::Size(82, 612);
		}
		else {
			panel1->Size = System::Drawing::Size(229, 612);
		}
		
	}
};
}
