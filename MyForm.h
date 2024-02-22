#pragma once
#include "Personnel.h"
#include "clients.h"
#include "Commandes.h"
#include "stock.h"


namespace POO {

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
	private: System::Windows::Forms::Button^ btnPersonnel;
	private: System::Windows::Forms::Button^ btnExit;


	private: System::Windows::Forms::Button^ btnStat;

	private: System::Windows::Forms::Button^ btnStock;

	private: System::Windows::Forms::Button^ btnCommandes;

	private: System::Windows::Forms::Button^ btnClients;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;









	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnStat = (gcnew System::Windows::Forms::Button());
			this->btnStock = (gcnew System::Windows::Forms::Button());
			this->btnCommandes = (gcnew System::Windows::Forms::Button());
			this->btnClients = (gcnew System::Windows::Forms::Button());
			this->btnPersonnel = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Azure;
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Controls->Add(this->btnStat);
			this->panel1->Controls->Add(this->btnStock);
			this->panel1->Controls->Add(this->btnCommandes);
			this->panel1->Controls->Add(this->btnClients);
			this->panel1->Controls->Add(this->btnPersonnel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 744);
			this->panel1->TabIndex = 6;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::Azure;
			this->btnExit->Location = System::Drawing::Point(0, 385);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(200, 77);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnStat
			// 
			this->btnStat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnStat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStat->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStat->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStat->ForeColor = System::Drawing::Color::Azure;
			this->btnStat->Location = System::Drawing::Point(0, 308);
			this->btnStat->Name = L"btnStat";
			this->btnStat->Size = System::Drawing::Size(200, 77);
			this->btnStat->TabIndex = 4;
			this->btnStat->Text = L"Statistiques";
			this->btnStat->UseVisualStyleBackColor = false;
			this->btnStat->Click += gcnew System::EventHandler(this, &MyForm::btnStat_Click);
			// 
			// btnStock
			// 
			this->btnStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnStock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStock->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStock->ForeColor = System::Drawing::Color::Azure;
			this->btnStock->Location = System::Drawing::Point(0, 231);
			this->btnStock->Name = L"btnStock";
			this->btnStock->Size = System::Drawing::Size(200, 77);
			this->btnStock->TabIndex = 3;
			this->btnStock->Text = L"Stock";
			this->btnStock->UseVisualStyleBackColor = false;
			this->btnStock->Click += gcnew System::EventHandler(this, &MyForm::btnStock_Click);
			// 
			// btnCommandes
			// 
			this->btnCommandes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnCommandes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCommandes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCommandes->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommandes->ForeColor = System::Drawing::Color::Azure;
			this->btnCommandes->Location = System::Drawing::Point(0, 154);
			this->btnCommandes->Name = L"btnCommandes";
			this->btnCommandes->Size = System::Drawing::Size(200, 77);
			this->btnCommandes->TabIndex = 2;
			this->btnCommandes->Text = L"Commandes";
			this->btnCommandes->UseVisualStyleBackColor = false;
			this->btnCommandes->Click += gcnew System::EventHandler(this, &MyForm::btnCommandes_Click);
			// 
			// btnClients
			// 
			this->btnClients->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnClients->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClients->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnClients->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClients->ForeColor = System::Drawing::Color::Azure;
			this->btnClients->Location = System::Drawing::Point(0, 77);
			this->btnClients->Name = L"btnClients";
			this->btnClients->Size = System::Drawing::Size(200, 77);
			this->btnClients->TabIndex = 1;
			this->btnClients->Text = L"Clients";
			this->btnClients->UseVisualStyleBackColor = false;
			this->btnClients->Click += gcnew System::EventHandler(this, &MyForm::btnClients_Click);
			// 
			// btnPersonnel
			// 
			this->btnPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnPersonnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPersonnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPersonnel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersonnel->ForeColor = System::Drawing::Color::Azure;
			this->btnPersonnel->Location = System::Drawing::Point(0, 0);
			this->btnPersonnel->Name = L"btnPersonnel";
			this->btnPersonnel->Size = System::Drawing::Size(200, 77);
			this->btnPersonnel->TabIndex = 0;
			this->btnPersonnel->Text = L"Personnel";
			this->btnPersonnel->UseVisualStyleBackColor = false;
			this->btnPersonnel->Click += gcnew System::EventHandler(this, &MyForm::btnPersonnel_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(206, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1268, 719);
			this->panel2->TabIndex = 6;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(793, 596);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 26);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Copyrights 2023 A2 G2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::AliceBlue;
			this->label1->Location = System::Drawing::Point(419, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(430, 35);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Application de gestion d\'entreprise";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(470, 227);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(339, 245);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1478, 744);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1500, 800);
			this->MinimumSize = System::Drawing::Size(600, 600);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ShowForm(Form^ formToShow) {
		// Clear existing controls from the panel
		panel2->Controls->Clear();

		// Add the new form to the panel
		formToShow->TopLevel = false;
		formToShow->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		formToShow->Dock = DockStyle::Fill;
		panel2->Controls->Add(formToShow);
		formToShow->Show();
	}

	private: System::Void btnPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowForm(gcnew POO::Personnel());
	}
	private: System::Void btnClients_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowForm(gcnew POO::clients());
	}
	private: System::Void btnCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowForm(gcnew POO::Commandes());

	}
	private: System::Void btnStock_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowForm(gcnew POO::stock());
	}
	private: System::Void btnStat_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}
