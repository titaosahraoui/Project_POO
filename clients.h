#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de clients
	/// </summary>
	public ref class clients : public System::Windows::Forms::Form
	{
	public:
		clients(void)
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
		~clients()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridviewClients;
	private: System::Windows::Forms::DataGridView^ dataGridviewAdress;
	private: System::Windows::Forms::TextBox^ Nom_CLient;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button6;



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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridviewClients = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridviewAdress = (gcnew System::Windows::Forms::DataGridView());
			this->Nom_CLient = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewClients))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewAdress))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::AliceBlue;
			this->button4->Location = System::Drawing::Point(12, 290);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 51);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Afficher client";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::AliceBlue;
			this->button3->Location = System::Drawing::Point(12, 209);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 51);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Modifier client";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::AliceBlue;
			this->button2->Location = System::Drawing::Point(12, 131);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 51);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Supprimer client";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::AliceBlue;
			this->button1->Location = System::Drawing::Point(12, 54);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 51);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Ajouter client";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &clients::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Azure;
			this->label1->Location = System::Drawing::Point(2, 9);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(89, 0, 89, 0);
			this->label1->Size = System::Drawing::Size(389, 32);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Gestion des clients";
			// 
			// dataGridviewClients
			// 
			this->dataGridviewClients->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridviewClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewClients->Location = System::Drawing::Point(205, 237);
			this->dataGridviewClients->Name = L"dataGridviewClients";
			this->dataGridviewClients->RowHeadersWidth = 51;
			this->dataGridviewClients->RowTemplate->Height = 24;
			this->dataGridviewClients->Size = System::Drawing::Size(334, 208);
			this->dataGridviewClients->TabIndex = 16;
			this->dataGridviewClients->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &clients::dataGridviewClients_CellContentClick);
			// 
			// dataGridviewAdress
			// 
			this->dataGridviewAdress->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridviewAdress->Location = System::Drawing::Point(555, 237);
			this->dataGridviewAdress->Name = L"dataGridviewAdress";
			this->dataGridviewAdress->RowHeadersWidth = 51;
			this->dataGridviewAdress->RowTemplate->Height = 24;
			this->dataGridviewAdress->Size = System::Drawing::Size(322, 208);
			this->dataGridviewAdress->TabIndex = 17;
			// 
			// Nom_CLient
			// 
			this->Nom_CLient->Location = System::Drawing::Point(220, 83);
			this->Nom_CLient->Name = L"Nom_CLient";
			this->Nom_CLient->Size = System::Drawing::Size(100, 22);
			this->Nom_CLient->TabIndex = 18;
			this->Nom_CLient->TextChanged += gcnew System::EventHandler(this, &clients::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(226, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Nom_Client";
			this->label2->Click += gcnew System::EventHandler(this, &clients::label2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkBlue;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(12, 358);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 47);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Ajouter Adress";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &clients::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(220, 131);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(220, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(412, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(412, 145);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(412, 192);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(412, 35);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 26;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(581, 83);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 27;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(747, 83);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 28;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(217, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 16);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Date de naissance";
			this->label3->Click += gcnew System::EventHandler(this, &clients::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(220, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Telephone";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(419, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 16);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Date de Prm Achat";
			this->label5->Click += gcnew System::EventHandler(this, &clients::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(412, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 32;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(415, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Prenom_Client";
			this->label7->Click += gcnew System::EventHandler(this, &clients::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(412, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 16);
			this->label8->TabIndex = 34;
			this->label8->Text = L"ID_Client";
			this->label8->Click += gcnew System::EventHandler(this, &clients::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(581, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 16);
			this->label9->TabIndex = 35;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(581, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(119, 16);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Adress Facturation";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(744, 60);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(107, 16);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Adress Livraison";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(609, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 56);
			this->button6->TabIndex = 38;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &clients::button6_Click);
			// 
			// clients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1131, 479);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Nom_CLient);
			this->Controls->Add(this->dataGridviewAdress);
			this->Controls->Add(this->dataGridviewClients);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Chartreuse;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"clients";
			this->Text = L"clients";
			this->Load += gcnew System::EventHandler(this, &clients::clients_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewClients))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridviewAdress))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clients_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridviewClients_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
