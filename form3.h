#pragma once

namespace FruitWorld101 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		form3(Image ^qrimage)
		{
			InitializeComponent();
			//
			PictureBox^ qrBox = gcnew PictureBox();
			qrBox->Size = Drawing::Size(170, 367.6);
			qrBox->SizeMode = PictureBoxSizeMode::StretchImage;
			qrBox->Image = qrimage;
			qrBox->Location = Point(184,100);

			this->Controls->Add(qrBox);
				
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(493, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Fruit World of H-S";
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"D:\\Project Folder\\ChatGPT Image 15_52_18 12 thg 5, 2025.png";
			this->pictureBox3->Location = System::Drawing::Point(384, 357);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(142, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(538, 502);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"form3";
			this->Text = L"QR Code";
			this->Load += gcnew System::EventHandler(this, &form3::form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
