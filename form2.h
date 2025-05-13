#pragma once
#include"form3.h"
namespace FruitWorld101 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace System::Threading;

	/// <summary>
	/// Summary for form1
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{

	public:
		form2(String^ customerName)
		{
			InitializeComponent();
			label2->Text = "Xin chào quý khách " + customerName;
			StartServer();  // Start server when form is initialized
			components = gcnew System::ComponentModel::Container();
			bangGia = gcnew System::Collections::Generic::Dictionary<System::String^, double>();
			bangGia->Add("Apricot", 120000);
			bangGia->Add("Banana 1", 25000);
			bangGia->Add("Banana 3", 25000);
			bangGia->Add("Banana Lady Finger 1", 28000);
			bangGia->Add("Banana Red 1", 30000);
			bangGia->Add("Beans 1", 15000);
			bangGia->Add("Carrot 1", 18000);
			bangGia->Add("Cauliflower 1", 20000);
			bangGia->Add("Corn 1", 15000);
			bangGia->Add("Cucumber 1", 17000);
			bangGia->Add("Cucumber 3", 17000);
			bangGia->Add("Cucumber 9", 17000);
			bangGia->Add("Cucumber 10", 17000);
			bangGia->Add("Eggplant 1", 22000);
			bangGia->Add("Eggplant long 1", 24000);
			bangGia->Add("Ginger Root 1", 60000);
			bangGia->Add("Grape Blue 1", 100000);
			bangGia->Add("Grape Pink 1", 110000);
			bangGia->Add("Grape White 1", 95000);
			bangGia->Add("Grape White 2", 95000);
			bangGia->Add("Grape White 3", 95000);
			bangGia->Add("Grape White 4", 95000);
			bangGia->Add("Guava 1", 25000);
			bangGia->Add("Kiwi 1", 70000);
			bangGia->Add("Kumquats 1", 35000);
			bangGia->Add("Lemon 1", 30000);
			bangGia->Add("Limes 1", 25000);
			bangGia->Add("Lychee 1", 55000);
			bangGia->Add("Mango Red 1", 60000);
			bangGia->Add("Orange 1", 30000);
			bangGia->Add("Mango 1", 35000);
			bangGia->Add("Onion Red 1", 20000);
			bangGia->Add("Onion Red Peeled 1", 22000);
			bangGia->Add("Onion White 1", 18000);
			bangGia->Add("Pepper Green 1", 70000);
			bangGia->Add("Pepper Orange 1", 75000);
			bangGia->Add("Pepper Red 1", 80000);
			bangGia->Add("Pepper Yellow 1", 85000);
			bangGia->Add("Potato Red 1", 22000);
			bangGia->Add("Potato Red Washed 1", 25000);
			bangGia->Add("Potato Sweet 1", 28000);
			bangGia->Add("Potato White 1", 20000);
			bangGia->Add("Tomato 1", 18000);
			bangGia->Add("Tomato 2", 19000);
			bangGia->Add("Tomato 3", 20000);
			bangGia->Add("Tomato 4", 21000);

			//
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ clearCartButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::FlowLayoutPanel^ imagePanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Collections::Generic::Dictionary<System::String^, double>^ bangGia;
	private: System::Windows::Forms::Label^ labelWeight;
	private: System::Windows::Forms::TextBox^ textBoxweight;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->imagePanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->clearCartButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelWeight = (gcnew System::Windows::Forms::Label());
			this->textBoxweight = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(493, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Fruit World of H-S";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Xin chao quy khach";
			this->label2->Click += gcnew System::EventHandler(this, &form2::label2_Click);
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->label3->Location = System::Drawing::Point(8, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(293, 159);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Your Cart:";
			this->label3->Click += gcnew System::EventHandler(this, &form2::label3_Click);
			// 
			// imagePanel
			// 
			this->imagePanel->AutoScroll = true;
			this->imagePanel->Location = System::Drawing::Point(233, 120);
			this->imagePanel->Name = L"imagePanel";
			this->imagePanel->Size = System::Drawing::Size(58, 143);
			this->imagePanel->TabIndex = 0;
			// 
			// clearCartButton
			// 
			this->clearCartButton->Location = System::Drawing::Point(415, 79);
			this->clearCartButton->Name = L"clearCartButton";
			this->clearCartButton->Size = System::Drawing::Size(100, 30);
			this->clearCartButton->TabIndex = 5;
			this->clearCartButton->Text = L"Clear Cart";
			this->clearCartButton->UseVisualStyleBackColor = true;
			this->clearCartButton->Click += gcnew System::EventHandler(this, &form2::clearCartButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(441, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"SUBMIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form2::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"D:\\Project Folder\\ChatGPT Image 15_52_18 12 thg 5, 2025.png";
			this->pictureBox2->Location = System::Drawing::Point(451, 134);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 64);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// labelWeight
			// 
			this->labelWeight->Location = System::Drawing::Point(350, 130);
			this->labelWeight->Name = L"labelWeight";
			this->labelWeight->Size = System::Drawing::Size(100, 20);
			this->labelWeight->TabIndex = 8;
			this->labelWeight->Text = L"Nhập số kg:";
			// 
			// textBoxweight
			// 
			this->textBoxweight->Location = System::Drawing::Point(350, 130);
			this->textBoxweight->Name = L"textBoxweight";
			this->textBoxweight->Size = System::Drawing::Size(60, 20);
			this->textBoxweight->TabIndex = 7;
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(527, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->imagePanel);
			this->Controls->Add(this->clearCartButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxweight);
			this->Controls->Add(this->labelWeight);
			this->Name = L"form2";
			this->Text = L"form2";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void clearCartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label3->Text = "Your Cart:";
		this->imagePanel->Controls->Clear();
	}

	private:
		// TCP Listener and Thread for listening to incoming connections
		TcpListener^ server;
		Thread^ listenThread;

		// UI Elements
		Label^ labelReceivedData;

		// Method to start the server and listen for clients
	   // StartServer method with correct delegate initialization
		void StartServer()
		{
			int port = 9999; // Port number to listen on
			server = gcnew TcpListener(IPAddress::Any, port); // Listen on any available network interface
			server->Start(); // Start the listener
			Console::WriteLine("Server started on port: " + port);

			// Start listening in a background thread
			listenThread = gcnew Thread(gcnew ThreadStart(this, &form2::StartListening)); // Start a thread with no parameters
			listenThread->IsBackground = true;
			listenThread->Start(); // Start listening
		}

		// Method to start listening without parameters
		void StartListening()
		{
			ListenForClients(server);  // Call ListenForClients with the server object
		}

		// Method to listen for incoming client connections
		void ListenForClients(TcpListener^ server)
		{
			while (true)
			{
				TcpClient^ client = server->AcceptTcpClient(); // Accept a client connection
				NetworkStream^ stream = client->GetStream();
				array<Byte>^ bytes = gcnew array<Byte>(256);

				while (true)
				{
					int bytesRead = stream->Read(bytes, 0, bytes->Length); // Read data from the stream
					if (bytesRead == 0)
						break; // If no data is read, break out of the loop

					String^ dataReceived = Encoding::UTF8->GetString(bytes, 0, bytesRead); // Convert bytes to string
					this->Invoke(gcnew Action<String^>(this, &form2::UpdateLabel), dataReceived); // Update label with the received data
				}

				client->Close(); // Close the client connection
			}
		}

		String^ FindImageForLabel(String^ labelName)
		{
			String^ folderPath = "D:\\Download\\archive\\fruits-360_100x100\\fruits-360\\Test\\" + labelName;

			if (System::IO::Directory::Exists(folderPath))
			{
				array<String^>^ files = System::IO::Directory::GetFiles(folderPath, "*.jpg");
				if (files->Length > 0)
				{
					return files[0]; 
				}
			}

			return "";
		}

		void AddImageForLabel(String^ labelName)
		{
			String^ imagePath = FindImageForLabel(labelName);
			if (!System::IO::File::Exists(imagePath))
			{
				Console::WriteLine("Không tìm thấy ảnh cho: " + labelName);
				return;
			}

			PictureBox^ picture = gcnew PictureBox();
			picture->Size = Drawing::Size(25, 25);
			picture->SizeMode = PictureBoxSizeMode::StretchImage;
			picture->Image = Image::FromFile(imagePath);
			picture->BorderStyle = BorderStyle::FixedSingle;
			this->imagePanel->Controls->Add(picture);
		}

		void UpdateLabel(String^ data)
		{
			if (this->label3->Text->StartsWith("Your Cart:"))
			{
				this->label3->Text += "\n- " + data;
			}
			else
			{
				this->label3->Text = "Your Cart:\n- " + data;
			}

			// Thêm ảnh tương ứng
			AddImageForLabel(data);
			// Tính giá
			if (bangGia->ContainsKey(data))
			{
				double pricePerKg = bangGia[data];
				double weightKg = 0;

				try
				{
					// Truy xuất textbox theo tên
					TextBox^ weightBox = safe_cast<TextBox^>(this->Controls["textBoxweight"]);
					if (weightBox != nullptr && !String::IsNullOrEmpty(weightBox->Text))
					{
						// Chuyển đổi text thành số
						weightKg = Double::Parse(weightBox->Text);
					}
				}
				catch (FormatException^)
				{
					MessageBox::Show("Giá trị khối lượng không hợp lệ. Vui lòng nhập số.");
					return;
				}

				double totalPrice = pricePerKg * weightKg;

				// Hiển thị giá ở cuối label3
				this->label3->Text += "\n   Giá: " + totalPrice.ToString("N0") + " VND";
			}
			else
			{
				this->label3->Text += "\n   Không có giá trong bảng.";
			}
		}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ qrImagePath = "D:\\Download\\75097d22da666f383677.jpg";

	if (System::IO::File::Exists(qrImagePath)) {
		Image^ qrImage = Image::FromFile(qrImagePath);

		FruitWorld101::form3^ qrForm = gcnew FruitWorld101::form3(qrImage);
		qrForm->Show();
		this->Hide();
	}
	else {
		MessageBox::Show("QR image not found!");
	}
}
};
}
