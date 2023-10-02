#pragma once
#include "resource.h"
#include <cmath>
#define pi 3.14159265358979
#define deg 0.01745329251994

namespace Truck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ ForceLabel;

	private: System::Windows::Forms::Label^ Speed_Label;
	private: System::Windows::Forms::Label^ Force_Label;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox13;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ForceLabel = (gcnew System::Windows::Forms::Label());
			this->Speed_Label = (gcnew System::Windows::Forms::Label());
			this->Force_Label = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(9, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 350);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(269, 383);
			this->trackBar2->Maximum = 5;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackBar2->Size = System::Drawing::Size(45, 153);
			this->trackBar2->TabIndex = 2;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar2_Scroll);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(398, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 80);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(99, 453);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Angle of slope";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 539);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Referece speed";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(461, 308);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"2";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(461, 334);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"0,1";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(461, 360);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"0,85";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(395, 363);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"D Constant";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(395, 337);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"I Constant";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(395, 311);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"P Constant";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(426, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"PID Controller";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(395, 107);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Current speed";
			// 
			// ForceLabel
			// 
			this->ForceLabel->AutoSize = true;
			this->ForceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForceLabel->Location = System::Drawing::Point(395, 9);
			this->ForceLabel->Name = L"ForceLabel";
			this->ForceLabel->Size = System::Drawing::Size(113, 20);
			this->ForceLabel->TabIndex = 16;
			this->ForceLabel->Text = L"Force at wheel";
			// 
			// Speed_Label
			// 
			this->Speed_Label->AutoSize = true;
			this->Speed_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Speed_Label->Location = System::Drawing::Point(395, 153);
			this->Speed_Label->Name = L"Speed_Label";
			this->Speed_Label->Size = System::Drawing::Size(66, 26);
			this->Speed_Label->TabIndex = 17;
			this->Speed_Label->Text = L"0 m/s";
			// 
			// Force_Label
			// 
			this->Force_Label->AutoSize = true;
			this->Force_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Force_Label->Location = System::Drawing::Point(394, 51);
			this->Force_Label->Name = L"Force_Label";
			this->Force_Label->Size = System::Drawing::Size(46, 26);
			this->Force_Label->TabIndex = 18;
			this->Force_Label->Text = L"0 N";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(306, 516);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(306, 390);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"25";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(15, 424);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"-0.1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(239, 429);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"0.1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(131, 427);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(19, 401);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(14, 20);
			this->label16->TabIndex = 24;
			this->label16->Text = L"|";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(131, 404);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 20);
			this->label17->TabIndex = 25;
			this->label17->Text = L"|";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(243, 404);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 20);
			this->label18->TabIndex = 26;
			this->label18->Text = L"|";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 383);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(251, 45);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Value = 10;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar1_Scroll);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(620, 30);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(69, 13);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Vehicle mass";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(593, 59);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(96, 13);
			this->label20->TabIndex = 31;
			this->label20->Text = L"Engine torque gain";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(636, 85);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(53, 13);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Gear ratio";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(695, 82);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 29;
			this->textBox4->Text = L"4";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(695, 56);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 28;
			this->textBox5->Text = L"2000";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(695, 30);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 27;
			this->textBox6->Text = L"20000";
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(583, 114);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(106, 13);
			this->label22->TabIndex = 38;
			this->label22->Text = L"Engine time constant";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(649, 138);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(40, 13);
			this->label23->TabIndex = 37;
			this->label23->Text = L"Gravity";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(634, 164);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 13);
			this->label24->TabIndex = 36;
			this->label24->Text = L"Air density";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(695, 161);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 35;
			this->textBox7->Text = L"1,2";
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(695, 135);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 34;
			this->textBox8->Text = L"9,82";
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(695, 109);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 33;
			this->textBox9->Text = L"0,8";
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(607, 190);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(82, 13);
			this->label25->TabIndex = 44;
			this->label25->Text = L"Drag coefficient";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(634, 216);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(55, 13);
			this->label26->TabIndex = 43;
			this->label26->Text = L"Front area";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(620, 242);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(69, 13);
			this->label27->TabIndex = 42;
			this->label27->Text = L"Wheel radius";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(695, 239);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 41;
			this->textBox10->Text = L"0,5";
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(695, 213);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 40;
			this->textBox11->Text = L"4";
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(695, 187);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 39;
			this->textBox12->Text = L"0,5";
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(547, 268);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(142, 13);
			this->label28->TabIndex = 46;
			this->label28->Text = L"Rolling resistance coefficient";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(695, 265);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 45;
			this->textBox13->Text = L"0,015";
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox_DigitCheck);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(567, 308);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(302, 158);
			this->pictureBox2->TabIndex = 47;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(872, 548);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(310, 125);
			this->pictureBox3->TabIndex = 48;
			this->pictureBox3->TabStop = false;
			// 
			// MainForm
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Force_Label);
			this->Controls->Add(this->Speed_Label);
			this->Controls->Add(this->ForceLabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->trackBar1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"MainForm";
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox_DigitCheck(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		String^ text = sender->ToString();
		text = text->Replace("System.Windows.Forms.TextBox, Text: ", "");
		if (((text->Length == 0) || (text->Contains(","))) && (e->KeyChar == ','))
		{
			e->Handled = true;
			return;
		}
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == 8)))
		{
			e->Handled = true;
		}

	}

	public: template <typename T>
		int sgn(T val)
	{
		return (T(0) < val) - (val < T(0));
	}

	public: double integral(double x, double int_old, double time_const)
	{
		return int_old + time_const * x;
	}

	public: double derivative(double x, double x_prev, double time_const)
	{
		return (x - x_prev) / time_const;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0) ||
			(textBox4->Text->Length == 0) || (textBox5->Text->Length == 0) || (textBox6->Text->Length == 0) ||
			(textBox7->Text->Length == 0) || (textBox8->Text->Length == 0) || (textBox9->Text->Length == 0) ||
			(textBox10->Text->Length == 0) || (textBox11->Text->Length == 0) || (textBox12->Text->Length == 0) || (textBox13->Text->Length == 0))
			return;

		if (button1->Text == "Start")
		{
			button1->Text = "Stop";
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox4->Enabled = false;
			textBox5->Enabled = false;
			textBox6->Enabled = false;
			textBox7->Enabled = false;
			textBox8->Enabled = false;
			textBox9->Enabled = false;
			textBox10->Enabled = false;
			textBox11->Enabled = false;
			textBox12->Enabled = false;
			textBox13->Enabled = false;
			p_const = Double::Parse(textBox1->Text);
			i_const = Double::Parse(textBox2->Text);
			d_const = Double::Parse(textBox3->Text);
			m = Double::Parse(textBox6->Text);
			k = Double::Parse(textBox5->Text);
			i = Double::Parse(textBox4->Text);
			t = Double::Parse(textBox9->Text);
			g = Double::Parse(textBox8->Text);
			ro = Double::Parse(textBox7->Text);
			Cd = Double::Parse(textBox12->Text);
			Af = Double::Parse(textBox11->Text);
			rw = Double::Parse(textBox10->Text);
			f = Double::Parse(textBox13->Text);
			start();
		}
		else
		{
			button1->Text = "Start";
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox4->Enabled = true;
			textBox5->Enabled = true;
			textBox6->Enabled = true;
			textBox7->Enabled = true;
			textBox8->Enabled = true;
			textBox9->Enabled = true;
			textBox10->Enabled = true;
			textBox11->Enabled = true;
			textBox12->Enabled = true;
			textBox13->Enabled = true;
			timer1->Enabled = false;
			Speed_Label->Text = "0 m/s";
			Force_Label->Text = "0 N";
		}
	}

	public: System::Void drawCar(double rad)
	{
		Graphics^ g = pictureBox1->CreateGraphics();
		g->RotateTransform(rad / deg);
		g->Clear(Color::White);

		SolidBrush^ brush = gcnew SolidBrush(Color::SandyBrown);
		Point point1 = Point(-100, 450);
		Point point2 = Point(-100, 175);
		Point point3 = Point(450, 175);
		Point point4 = Point(450, 450);
		array<Point>^ ground = { point1, point2, point3, point4 };
		g->FillPolygon(brush, ground);

		brush = gcnew SolidBrush(Color::Cyan);
		point1 = Point(-100, -100);
		point2 = Point(-100, 175);
		point3 = Point(450, 175);
		point4 = Point(450, -100);
		array<Point>^ sky = { point1, point2, point3, point4 };
		g->FillPolygon(brush, sky);

		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
		Image^ image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
		g->DrawImage(image, 25, 54, image->Size.Width, image->Size.Height);
	}

	public: double calcX1(double u, double x1_old, double time_const)
	{
		double temp = (u * k * i / rw - x1_old) / t;
		return integral(temp, x1_old, time_const);
	}

	public: double calcX2(double x1, double alpha, double x2_old, double time_const)
	{
		double temp = (x1 - m * g * (sin(slope) + sgn(cur_speed) * cos(slope) * f) - x2_old * x2_old * Cd * Af * ro / 2) / m;
		return integral(temp, x2_old, time_const);
	}

	public: double PIDregulator(double x, double x_old, double time_const)
	{
		return p_const * (x + i_const * integral(x, x_old, time_const) + d_const * derivative(x, x_old, time_const));
	}

	public: System::Void start()
	{
		time_const = 0.01;
		eps_old = 0;
		x1_old = 0;
		x2_old = ref_speed;
		cur_speed = ref_speed;
		timer1->Interval = time_const * 1000;
		timer1->Enabled = true;
	}


	public: double slope = 0;
	public: double ref_speed = 0;
	public: double cur_speed = 0;
	public: double cur_force = 0;
	public: double p_const = 0;
	public: double i_const = 0;
	public: double d_const = 0;
	public: double m = 20000;
	public: double k = 2000;
	public: double i = 4;
	public: double t = 0.8;
	public: double g = 9.82;
	public: double ro = 1.2;
	public: double Cd = 0.5;
	public: double Af = 4;
	public: double rw = 0.5;
	public: double f = 0.015;
	public: double eps_old = 0;
	public: double x1_old = 0;
	public: double x2_old = 0;
	public: double time_const = 0;


	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		drawCar(0);
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		ref_speed = trackBar2->Value * 5;
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		double sl = (trackBar1->Value - 10) * 0.01;
		slope = sl;
		drawCar(sl);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		double eps = ref_speed - cur_speed;
		double u = PIDregulator(eps, eps_old, time_const);
		cur_force = calcX1(u, x1_old, time_const);
		cur_speed = calcX2(cur_force, slope, x2_old, time_const);
		x1_old = cur_force;
		x2_old = cur_speed;
		eps_old = eps;
		String^ s = cur_speed.ToString("f5") + " m/s";
		Speed_Label->Text = s;
		s = cur_force.ToString("f5") + " N";
		Force_Label->Text = s;
	}
	private: System::Void MainForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		drawCar(0);
	}
	};
}
