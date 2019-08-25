#pragma once
#include "programming.h"
#include "Bill.h"
namespace CP_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MovieTheatreManagmentSystem
	/// </summary>
	public ref class MovieTheatreManagmentSystem : public System::Windows::Forms::Form
	{
	public:
		MovieTheatreManagmentSystem(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MovieTheatreManagmentSystem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  movie;
	private: System::Windows::Forms::ComboBox^  cinema;





	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioYes;
	private: System::Windows::Forms::RadioButton^  radioNo;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  fname;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  e_address;

	private: System::Windows::Forms::TextBox^  credit;


	private: System::Windows::Forms::Button^  Deal;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  amount;




	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->movie = (gcnew System::Windows::Forms::ComboBox());
			this->cinema = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioYes = (gcnew System::Windows::Forms::RadioButton());
			this->radioNo = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->e_address = (gcnew System::Windows::Forms::TextBox());
			this->credit = (gcnew System::Windows::Forms::TextBox());
			this->Deal = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->amount = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(46, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Movies : ";
			this->label1->UseWaitCursor = true;
			this->label1->Click += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 18));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(568, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L" Personal Info : ";
			this->label2->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(46, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Date and Time: ";
			this->label3->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(46, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cinemas : ";
			this->label4->UseWaitCursor = true;
			// 
			// movie
			// 
			this->movie->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 11.25F));
			this->movie->FormattingEnabled = true;
			this->movie->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Kingsman 2", L"Kong skull", L"Actor in Law", L"The Fate of Furious" });
			this->movie->Location = System::Drawing::Point(252, 127);
			this->movie->Name = L"movie";
			this->movie->Size = System::Drawing::Size(246, 26);
			this->movie->TabIndex = 4;
			this->movie->SelectedIndexChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::comboBox1_SelectedIndexChanged);
			// 
			// cinema
			// 
			this->cinema->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 11.25F));
			this->cinema->FormattingEnabled = true;
			this->cinema->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Cinema A", L"Cinema B", L"Cinema C" });
			this->cinema->Location = System::Drawing::Point(252, 169);
			this->cinema->Name = L"cinema";
			this->cinema->Size = System::Drawing::Size(246, 26);
			this->cinema->TabIndex = 7;
			this->cinema->SelectedIndexChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::comboBox4_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(46, 255);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 24);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Snacks :  ";
			this->label7->UseWaitCursor = true;
			// 
			// radioYes
			// 
			this->radioYes->AutoSize = true;
			this->radioYes->BackColor = System::Drawing::Color::Transparent;
			this->radioYes->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 10.25F));
			this->radioYes->ForeColor = System::Drawing::Color::White;
			this->radioYes->Location = System::Drawing::Point(252, 262);
			this->radioYes->Name = L"radioYes";
			this->radioYes->Size = System::Drawing::Size(47, 20);
			this->radioYes->TabIndex = 12;
			this->radioYes->TabStop = true;
			this->radioYes->Text = L"Yes";
			this->radioYes->UseVisualStyleBackColor = false;
			this->radioYes->UseWaitCursor = true;
			this->radioYes->CheckedChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::radioButton1_CheckedChanged);
			// 
			// radioNo
			// 
			this->radioNo->AutoSize = true;
			this->radioNo->BackColor = System::Drawing::Color::Transparent;
			this->radioNo->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 10.25F));
			this->radioNo->ForeColor = System::Drawing::Color::White;
			this->radioNo->Location = System::Drawing::Point(326, 262);
			this->radioNo->Name = L"radioNo";
			this->radioNo->Size = System::Drawing::Size(44, 20);
			this->radioNo->TabIndex = 13;
			this->radioNo->TabStop = true;
			this->radioNo->Text = L"No";
			this->radioNo->UseVisualStyleBackColor = false;
			this->radioNo->UseWaitCursor = true;
			this->radioNo->CheckedChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::radioButton2_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 13));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(546, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 21);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Full Name : ";
			this->label8->UseWaitCursor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 13));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(546, 171);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 21);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Email : ";
			this->label9->UseWaitCursor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 13));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(546, 241);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 21);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Credit Card # : ";
			this->label10->UseWaitCursor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 18));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(195, 45);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 28);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Movies Info : ";
			this->label11->UseWaitCursor = true;
			// 
			// fname
			// 
			this->fname->Location = System::Drawing::Point(550, 127);
			this->fname->Multiline = true;
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(224, 26);
			this->fname->TabIndex = 18;
			this->fname->UseWaitCursor = true;
			this->fname->TextChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::textBox1_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->dateTimePicker1->Location = System::Drawing::Point(252, 211);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(246, 21);
			this->dateTimePicker1->TabIndex = 19;
			this->dateTimePicker1->UseWaitCursor = true;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::dateTimePicker1_ValueChanged);
			// 
			// e_address
			// 
			this->e_address->Location = System::Drawing::Point(550, 206);
			this->e_address->Multiline = true;
			this->e_address->Name = L"e_address";
			this->e_address->Size = System::Drawing::Size(224, 26);
			this->e_address->TabIndex = 20;
			this->e_address->UseWaitCursor = true;
			this->e_address->TextChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::textBox2_TextChanged);
			// 
			// credit
			// 
			this->credit->Location = System::Drawing::Point(550, 276);
			this->credit->Multiline = true;
			this->credit->Name = L"credit";
			this->credit->Size = System::Drawing::Size(224, 26);
			this->credit->TabIndex = 21;
			this->credit->UseWaitCursor = true;
			this->credit->TextChanged += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::textBox3_TextChanged);
			// 
			// Deal
			// 
			this->Deal->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Deal->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deal->ForeColor = System::Drawing::Color::Transparent;
			this->Deal->Location = System::Drawing::Point(305, 321);
			this->Deal->Name = L"Deal";
			this->Deal->Size = System::Drawing::Size(112, 38);
			this->Deal->TabIndex = 22;
			this->Deal->Text = L"Done!";
			this->Deal->UseVisualStyleBackColor = false;
			this->Deal->Click += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::Deal_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(46, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 24);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Price :  ";
			this->label5->UseWaitCursor = true;
			// 
			// amount
			// 
			this->amount->AutoSize = true;
			this->amount->BackColor = System::Drawing::Color::Transparent;
			this->amount->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->amount->Location = System::Drawing::Point(151, 335);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(73, 24);
			this->amount->TabIndex = 24;
			this->amount->Text = L"Rs.0.00";
			this->amount->UseWaitCursor = true;
			// 
			// MovieTheatreManagmentSystem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(820, 399);
			this->Controls->Add(this->amount);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Deal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->credit);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->radioNo);
			this->Controls->Add(this->radioYes);
			this->Controls->Add(this->e_address);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->cinema);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->movie);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label4);
			this->Name = L"MovieTheatreManagmentSystem";
			this->Text = L"MovieTheatreManagmentSystem";
			this->Load += gcnew System::EventHandler(this, &MovieTheatreManagmentSystem::MovieTheatreManagmentSystem_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {



	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MovieTheatreManagmentSystem_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Deal_Click(System::Object^  sender, System::EventArgs^  e) {


		String^ m = movie->Text;

		String^ c = cinema->Text;

		int^ y = System::Convert::ToInt32(radioYes->Checked);
		int^ n = System::Convert::ToInt32(radioNo->Checked);

		String^ name = fname->Text;
		String^ add = e_address->Text;

		String^ card = credit->Text;

		Cinema C_object;
		snacks S_object;

		float cinema_Price,a,total;


		if (m == nullptr || c == nullptr || (y == 0 && n == 0) || name == nullptr || add == nullptr || card == nullptr) {

			MessageBox::Show("Fields are Empty, \n\n Click Ok and Fill the remaining fields!!");

		}
		else {
			if (m != "" &&  c != "") {

				if (c == "Cinema A") {
					cinema_Price = C_object.getCprice('A');

				}
				else if (c == "Cinema B") {
					cinema_Price = C_object.getCprice('B');
				}
				else if (c == "Cinema C") {
					cinema_Price = C_object.getCprice('C');
				}
			}

			if (y == 1) {
				a = S_object.getSPrice();
				total = cinema_Price + a;
			}

			String^ am = System::Convert::ToString(a);

			amount->Text = am;
			//MessageBox::Show("Total Amount : " +total);
		//	this->Hide();
		//	Bill^ log = gcnew Bill();
		//	log->Show();
		}
	}
	};
}