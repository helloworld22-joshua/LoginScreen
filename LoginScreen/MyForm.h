#pragma once
#include "program.h"

namespace LoginScreen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel_terms->Hide();	//Hides terms
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	//Title
	private: System::Windows::Forms::Label^ label_title_sign_in;

	//Labels
	private: System::Windows::Forms::Label^ label_username;
	private: System::Windows::Forms::Label^ label_password;

	//User Input
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::TextBox^ textBox_password;

	//Lines
	private: System::Windows::Forms::Panel^ line1;
	private: System::Windows::Forms::Panel^ line2;

	//Terms
	private: System::Windows::Forms::CheckBox^ checkBox_agree;
	private: System::Windows::Forms::Label^ label_terms;

	//Terms Page
	private: System::Windows::Forms::Panel^ panel_terms;
	private: System::Windows::Forms::Label^ label_title_terms;
	private: System::Windows::Forms::TextBox^ textBox_terms;
	private: System::Windows::Forms::Button^ button_ok;

	//Buttons
	private: System::Windows::Forms::Button^ button_sign_in;
	private: System::Windows::Forms::Button^ button_register;

	//Miscs
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label_error;
	private: System::Windows::Forms::Button^ button_show;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_title_sign_in = (gcnew System::Windows::Forms::Label());
			this->label_username = (gcnew System::Windows::Forms::Label());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->line1 = (gcnew System::Windows::Forms::Panel());
			this->line2 = (gcnew System::Windows::Forms::Panel());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->checkBox_agree = (gcnew System::Windows::Forms::CheckBox());
			this->label_terms = (gcnew System::Windows::Forms::Label());
			this->button_sign_in = (gcnew System::Windows::Forms::Button());
			this->button_register = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label_error = (gcnew System::Windows::Forms::Label());
			this->button_show = (gcnew System::Windows::Forms::Button());
			this->panel_terms = (gcnew System::Windows::Forms::Panel());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->textBox_terms = (gcnew System::Windows::Forms::TextBox());
			this->label_title_terms = (gcnew System::Windows::Forms::Label());
			this->panel_terms->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_title_sign_in
			// 
			this->label_title_sign_in->AutoSize = true;
			this->label_title_sign_in->BackColor = System::Drawing::Color::Black;
			this->label_title_sign_in->Font = (gcnew System::Drawing::Font(L"Segoe UI", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_title_sign_in->ForeColor = System::Drawing::Color::White;
			this->label_title_sign_in->Location = System::Drawing::Point(39, 122);
			this->label_title_sign_in->Name = L"label_title_sign_in";
			this->label_title_sign_in->Size = System::Drawing::Size(140, 52);
			this->label_title_sign_in->TabIndex = 0;
			this->label_title_sign_in->Text = L"Sign in";
			// 
			// label_username
			// 
			this->label_username->AutoSize = true;
			this->label_username->BackColor = System::Drawing::Color::Black;
			this->label_username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label_username->ForeColor = System::Drawing::Color::White;
			this->label_username->Location = System::Drawing::Point(44, 201);
			this->label_username->Name = L"label_username";
			this->label_username->Size = System::Drawing::Size(84, 21);
			this->label_username->TabIndex = 1;
			this->label_username->Text = L"Username:";
			// 
			// textBox_username
			// 
			this->textBox_username->BackColor = System::Drawing::Color::Black;
			this->textBox_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.25F));
			this->textBox_username->ForeColor = System::Drawing::Color::White;
			this->textBox_username->Location = System::Drawing::Point(48, 225);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(265, 24);
			this->textBox_username->TabIndex = 3;
			this->textBox_username->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox_username_KeyDown);
			// 
			// line1
			// 
			this->line1->BackColor = System::Drawing::Color::White;
			this->line1->Location = System::Drawing::Point(48, 259);
			this->line1->Name = L"line1";
			this->line1->Size = System::Drawing::Size(265, 2);
			this->line1->TabIndex = 4;
			// 
			// line2
			// 
			this->line2->BackColor = System::Drawing::Color::White;
			this->line2->Location = System::Drawing::Point(48, 349);
			this->line2->Name = L"line2";
			this->line2->Size = System::Drawing::Size(265, 2);
			this->line2->TabIndex = 7;
			// 
			// textBox_password
			// 
			this->textBox_password->BackColor = System::Drawing::Color::Black;
			this->textBox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.25F));
			this->textBox_password->ForeColor = System::Drawing::Color::White;
			this->textBox_password->Location = System::Drawing::Point(48, 315);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(265, 24);
			this->textBox_password->TabIndex = 6;
			this->textBox_password->UseSystemPasswordChar = true;
			this->textBox_password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox_password_KeyDown);
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->BackColor = System::Drawing::Color::Black;
			this->label_password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label_password->ForeColor = System::Drawing::Color::White;
			this->label_password->Location = System::Drawing::Point(44, 291);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(79, 21);
			this->label_password->TabIndex = 5;
			this->label_password->Text = L"Password:";
			// 
			// checkBox_agree
			// 
			this->checkBox_agree->AutoSize = true;
			this->checkBox_agree->BackColor = System::Drawing::Color::Black;
			this->checkBox_agree->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->checkBox_agree->ForeColor = System::Drawing::Color::White;
			this->checkBox_agree->Location = System::Drawing::Point(48, 374);
			this->checkBox_agree->Name = L"checkBox_agree";
			this->checkBox_agree->Size = System::Drawing::Size(111, 23);
			this->checkBox_agree->TabIndex = 8;
			this->checkBox_agree->Text = L"I agree to the";
			this->checkBox_agree->UseVisualStyleBackColor = false;
			this->checkBox_agree->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_agree_CheckedChanged);
			// 
			// label_terms
			// 
			this->label_terms->AutoSize = true;
			this->label_terms->BackColor = System::Drawing::Color::Black;
			this->label_terms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_terms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Underline));
			this->label_terms->ForeColor = System::Drawing::Color::Aqua;
			this->label_terms->Location = System::Drawing::Point(152, 376);
			this->label_terms->Name = L"label_terms";
			this->label_terms->Size = System::Drawing::Size(138, 19);
			this->label_terms->TabIndex = 9;
			this->label_terms->Text = L"terms and conditions";
			this->label_terms->Click += gcnew System::EventHandler(this, &MyForm::label_terms_Click);
			// 
			// button_sign_in
			// 
			this->button_sign_in->BackColor = System::Drawing::Color::Aqua;
			this->button_sign_in->Enabled = false;
			this->button_sign_in->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sign_in->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button_sign_in->ForeColor = System::Drawing::Color::Black;
			this->button_sign_in->Location = System::Drawing::Point(48, 427);
			this->button_sign_in->Name = L"button_sign_in";
			this->button_sign_in->Size = System::Drawing::Size(80, 34);
			this->button_sign_in->TabIndex = 10;
			this->button_sign_in->Text = L"Sign in";
			this->button_sign_in->UseVisualStyleBackColor = false;
			this->button_sign_in->Click += gcnew System::EventHandler(this, &MyForm::button_sign_in_Click);
			// 
			// button_register
			// 
			this->button_register->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_register->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button_register->ForeColor = System::Drawing::Color::White;
			this->button_register->Location = System::Drawing::Point(134, 427);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(80, 34);
			this->button_register->TabIndex = 11;
			this->button_register->Text = L"Register";
			this->button_register->UseVisualStyleBackColor = true;
			this->button_register->Click += gcnew System::EventHandler(this, &MyForm::button_register_Click);
			// 
			// button_exit
			// 
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->button_exit->Location = System::Drawing::Point(858, 547);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(53, 28);
			this->button_exit->TabIndex = 12;
			this->button_exit->Text = L"EXIT";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// label_error
			// 
			this->label_error->AutoSize = true;
			this->label_error->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label_error->ForeColor = System::Drawing::Color::Red;
			this->label_error->Location = System::Drawing::Point(48, 468);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(0, 19);
			this->label_error->TabIndex = 13;
			// 
			// button_show
			// 
			this->button_show->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_show->Location = System::Drawing::Point(319, 327);
			this->button_show->Name = L"button_show";
			this->button_show->Size = System::Drawing::Size(17, 24);
			this->button_show->TabIndex = 14;
			this->button_show->Text = L"O";
			this->button_show->UseVisualStyleBackColor = true;
			this->button_show->Click += gcnew System::EventHandler(this, &MyForm::button_show_Click);
			// 
			// panel_terms
			// 
			this->panel_terms->BackColor = System::Drawing::Color::Transparent;
			this->panel_terms->Controls->Add(this->button_ok);
			this->panel_terms->Controls->Add(this->textBox_terms);
			this->panel_terms->Controls->Add(this->label_title_terms);
			this->panel_terms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_terms->Location = System::Drawing::Point(0, 0);
			this->panel_terms->Name = L"panel_terms";
			this->panel_terms->Size = System::Drawing::Size(923, 587);
			this->panel_terms->TabIndex = 15;
			this->panel_terms->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->panel_terms->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->panel_terms->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// button_ok
			// 
			this->button_ok->BackColor = System::Drawing::Color::Aqua;
			this->button_ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_ok->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button_ok->ForeColor = System::Drawing::Color::Black;
			this->button_ok->Location = System::Drawing::Point(48, 526);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(80, 34);
			this->button_ok->TabIndex = 11;
			this->button_ok->Text = L"OK";
			this->button_ok->UseVisualStyleBackColor = false;
			this->button_ok->Click += gcnew System::EventHandler(this, &MyForm::button_ok_Click);
			// 
			// textBox_terms
			// 
			this->textBox_terms->BackColor = System::Drawing::Color::Black;
			this->textBox_terms->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_terms->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_terms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox_terms->ForeColor = System::Drawing::Color::White;
			this->textBox_terms->Location = System::Drawing::Point(48, 150);
			this->textBox_terms->Multiline = true;
			this->textBox_terms->Name = L"textBox_terms";
			this->textBox_terms->ReadOnly = true;
			this->textBox_terms->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_terms->Size = System::Drawing::Size(495, 354);
			this->textBox_terms->TabIndex = 1;
			this->textBox_terms->Text = resources->GetString(L"textBox_terms.Text");
			// 
			// label_title_terms
			// 
			this->label_title_terms->AutoSize = true;
			this->label_title_terms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 29.25F));
			this->label_title_terms->Location = System::Drawing::Point(42, 70);
			this->label_title_terms->Name = L"label_title_terms";
			this->label_title_terms->Size = System::Drawing::Size(390, 52);
			this->label_title_terms->TabIndex = 0;
			this->label_title_terms->Text = L"Terms and conditions";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(923, 587);
			this->Controls->Add(this->panel_terms);
			this->Controls->Add(this->button_show);
			this->Controls->Add(this->label_error);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_register);
			this->Controls->Add(this->button_sign_in);
			this->Controls->Add(this->label_terms);
			this->Controls->Add(this->checkBox_agree);
			this->Controls->Add(this->line2);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->line1);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label_username);
			this->Controls->Add(this->label_title_sign_in);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel_terms->ResumeLayout(false);
			this->panel_terms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//Sign in button
private: System::Void button_sign_in_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox_username->Text == "joshua", textBox_password->Text == "123") {
		label_error->Text = "";
		program^ aboutForm = gcnew program;
		aboutForm->Show();
	} else {
		label_error->Text = "Username or password is incorrect!";
	}
}

//Register button
private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
	label_error->Text = "This feature is currently unavailable!";
}

//Show password button
private: System::Void button_show_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox_password->UseSystemPasswordChar) {
		textBox_password->UseSystemPasswordChar = false;
	} else {
		textBox_password->UseSystemPasswordChar = true;
	}
}

//Terms and conditions check box
private: System::Void checkBox_agree_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_agree->Checked) {
		button_sign_in->Enabled = true;
	}
	else {
		button_sign_in->Enabled = false;
	}
}

//Show terms and conditions
private: System::Void label_terms_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_terms->Show();
}

//Hide terms and conditions
private: System::Void button_ok_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_terms->Hide();
}

//Exit button
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

	bool dragging;
	Point offset;

//Mouse pressed
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}

//Mouse not pressed
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}

//Drag application
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging) {
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}

//Username enter
private: System::Void textBox_username_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		textBox_password->Focus();
	}
}

//Password enter
private: System::Void textBox_password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		button_sign_in->PerformClick();
	}
}

};
}
