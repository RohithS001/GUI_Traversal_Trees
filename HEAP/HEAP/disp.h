//#include"ui.h"
#pragma once
namespace HEAP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for disp
	/// </summary>
	public ref class disp : public System::Windows::Forms::Form
	{
	public:
		disp(void)
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
		~disp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  a;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::RichTextBox^  T23;
	private:
	public: System::Windows::Forms::RichTextBox^  T25;
	public: System::Windows::Forms::RichTextBox^  T26;
	public: System::Windows::Forms::RichTextBox^  T27;
	public: System::Windows::Forms::RichTextBox^  T28;
	public: System::Windows::Forms::RichTextBox^  T29;
	public: System::Windows::Forms::RichTextBox^  T30;
	public: System::Windows::Forms::RichTextBox^  T31;
	public: System::Windows::Forms::RichTextBox^  T8;
	public: System::Windows::Forms::RichTextBox^  T9;
	public: System::Windows::Forms::RichTextBox^  T10;
	public: System::Windows::Forms::RichTextBox^  T11;
	public: System::Windows::Forms::RichTextBox^  T12;
	public: System::Windows::Forms::RichTextBox^  T13;
	public: System::Windows::Forms::RichTextBox^  T14;
	public: System::Windows::Forms::RichTextBox^  T15;
	public: System::Windows::Forms::RichTextBox^  T16;
	public: System::Windows::Forms::RichTextBox^  T17;
	public: System::Windows::Forms::RichTextBox^  T18;
	public: System::Windows::Forms::RichTextBox^  T19;
	public: System::Windows::Forms::RichTextBox^  T20;
	public: System::Windows::Forms::RichTextBox^  T21;
	public: System::Windows::Forms::RichTextBox^  T22;
	public: System::Windows::Forms::RichTextBox^  T24;
	public: System::Windows::Forms::RichTextBox^  T4;
	public: System::Windows::Forms::RichTextBox^  T5;
	public: System::Windows::Forms::RichTextBox^  T6;
	public: System::Windows::Forms::RichTextBox^  T7;
	public: System::Windows::Forms::RichTextBox^  T2;
	public: System::Windows::Forms::RichTextBox^  T3;
	public: System::Windows::Forms::RichTextBox^  T1;

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
			this->a = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->T23 = (gcnew System::Windows::Forms::RichTextBox());
			this->T25 = (gcnew System::Windows::Forms::RichTextBox());
			this->T26 = (gcnew System::Windows::Forms::RichTextBox());
			this->T27 = (gcnew System::Windows::Forms::RichTextBox());
			this->T28 = (gcnew System::Windows::Forms::RichTextBox());
			this->T29 = (gcnew System::Windows::Forms::RichTextBox());
			this->T30 = (gcnew System::Windows::Forms::RichTextBox());
			this->T31 = (gcnew System::Windows::Forms::RichTextBox());
			this->T8 = (gcnew System::Windows::Forms::RichTextBox());
			this->T9 = (gcnew System::Windows::Forms::RichTextBox());
			this->T10 = (gcnew System::Windows::Forms::RichTextBox());
			this->T11 = (gcnew System::Windows::Forms::RichTextBox());
			this->T12 = (gcnew System::Windows::Forms::RichTextBox());
			this->T13 = (gcnew System::Windows::Forms::RichTextBox());
			this->T14 = (gcnew System::Windows::Forms::RichTextBox());
			this->T15 = (gcnew System::Windows::Forms::RichTextBox());
			this->T16 = (gcnew System::Windows::Forms::RichTextBox());
			this->T17 = (gcnew System::Windows::Forms::RichTextBox());
			this->T18 = (gcnew System::Windows::Forms::RichTextBox());
			this->T19 = (gcnew System::Windows::Forms::RichTextBox());
			this->T20 = (gcnew System::Windows::Forms::RichTextBox());
			this->T21 = (gcnew System::Windows::Forms::RichTextBox());
			this->T22 = (gcnew System::Windows::Forms::RichTextBox());
			this->T24 = (gcnew System::Windows::Forms::RichTextBox());
			this->T4 = (gcnew System::Windows::Forms::RichTextBox());
			this->T5 = (gcnew System::Windows::Forms::RichTextBox());
			this->T6 = (gcnew System::Windows::Forms::RichTextBox());
			this->T7 = (gcnew System::Windows::Forms::RichTextBox());
			this->T2 = (gcnew System::Windows::Forms::RichTextBox());
			this->T3 = (gcnew System::Windows::Forms::RichTextBox());
			this->T1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// a
			// 
			this->a->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->a->Font = (gcnew System::Drawing::Font(L"Engravers MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(488, 413);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(182, 26);
			this->a->TabIndex = 94;
			this->a->Text = L"CLOSE";
			this->a->UseVisualStyleBackColor = false;
			this->a->Click += gcnew System::EventHandler(this, &disp::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-2, 402);
			this->label6->MinimumSize = System::Drawing::Size(1140, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1140, 50);
			this->label6->TabIndex = 93;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(2, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 19);
			this->label5->TabIndex = 92;
			this->label5->Text = L"LEVEL 1:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(2, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 19);
			this->label4->TabIndex = 91;
			this->label4->Text = L"LEVEL 2 :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(2, 344);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 19);
			this->label3->TabIndex = 90;
			this->label3->Text = L"LEVEL  4:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(2, 275);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 19);
			this->label2->TabIndex = 89;
			this->label2->Text = L"LEVEL 3 :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(2, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 19);
			this->label1->TabIndex = 88;
			this->label1->Text = L"LEVEL 0 :";
			// 
			// T23
			// 
			this->T23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T23->Location = System::Drawing::Point(587, 323);
			this->T23->Name = L"T23";
			this->T23->Size = System::Drawing::Size(33, 28);
			this->T23->TabIndex = 87;
			this->T23->Text = L"";
			this->T23->Visible = false;
			// 
			// T25
			// 
			this->T25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T25->Location = System::Drawing::Point(729, 323);
			this->T25->Name = L"T25";
			this->T25->Size = System::Drawing::Size(33, 28);
			this->T25->TabIndex = 86;
			this->T25->Text = L"";
			this->T25->Visible = false;
			// 
			// T26
			// 
			this->T26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T26->Location = System::Drawing::Point(789, 323);
			this->T26->Name = L"T26";
			this->T26->Size = System::Drawing::Size(33, 28);
			this->T26->TabIndex = 85;
			this->T26->Text = L"";
			this->T26->Visible = false;
			// 
			// T27
			// 
			this->T27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T27->Location = System::Drawing::Point(859, 323);
			this->T27->Name = L"T27";
			this->T27->Size = System::Drawing::Size(33, 28);
			this->T27->TabIndex = 84;
			this->T27->Text = L"";
			this->T27->Visible = false;
			// 
			// T28
			// 
			this->T28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T28->Location = System::Drawing::Point(907, 323);
			this->T28->Name = L"T28";
			this->T28->Size = System::Drawing::Size(33, 28);
			this->T28->TabIndex = 83;
			this->T28->Text = L"";
			this->T28->Visible = false;
			// 
			// T29
			// 
			this->T29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T29->Location = System::Drawing::Point(983, 323);
			this->T29->Name = L"T29";
			this->T29->Size = System::Drawing::Size(33, 28);
			this->T29->TabIndex = 82;
			this->T29->Text = L"";
			this->T29->Visible = false;
			// 
			// T30
			// 
			this->T30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T30->Location = System::Drawing::Point(1031, 323);
			this->T30->Name = L"T30";
			this->T30->Size = System::Drawing::Size(33, 28);
			this->T30->TabIndex = 81;
			this->T30->Text = L"";
			this->T30->Visible = false;
			// 
			// T31
			// 
			this->T31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T31->Location = System::Drawing::Point(1096, 323);
			this->T31->Name = L"T31";
			this->T31->Size = System::Drawing::Size(33, 28);
			this->T31->TabIndex = 80;
			this->T31->Text = L"";
			this->T31->Visible = false;
			// 
			// T8
			// 
			this->T8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T8->Location = System::Drawing::Point(129, 254);
			this->T8->Name = L"T8";
			this->T8->Size = System::Drawing::Size(33, 28);
			this->T8->TabIndex = 79;
			this->T8->Text = L"";
			this->T8->Visible = false;
			// 
			// T9
			// 
			this->T9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T9->Location = System::Drawing::Point(269, 254);
			this->T9->Name = L"T9";
			this->T9->Size = System::Drawing::Size(33, 28);
			this->T9->TabIndex = 78;
			this->T9->Text = L"";
			this->T9->Visible = false;
			// 
			// T10
			// 
			this->T10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T10->Location = System::Drawing::Point(417, 254);
			this->T10->Name = L"T10";
			this->T10->Size = System::Drawing::Size(33, 28);
			this->T10->TabIndex = 77;
			this->T10->Text = L"";
			this->T10->Visible = false;
			// 
			// T11
			// 
			this->T11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T11->Location = System::Drawing::Point(554, 254);
			this->T11->Name = L"T11";
			this->T11->Size = System::Drawing::Size(33, 28);
			this->T11->TabIndex = 76;
			this->T11->Text = L"";
			this->T11->Visible = false;
			// 
			// T12
			// 
			this->T12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T12->Location = System::Drawing::Point(690, 254);
			this->T12->Name = L"T12";
			this->T12->Size = System::Drawing::Size(33, 28);
			this->T12->TabIndex = 75;
			this->T12->Text = L"";
			this->T12->Visible = false;
			// 
			// T13
			// 
			this->T13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T13->Location = System::Drawing::Point(827, 254);
			this->T13->Name = L"T13";
			this->T13->Size = System::Drawing::Size(33, 28);
			this->T13->TabIndex = 74;
			this->T13->Text = L"";
			this->T13->Visible = false;
			// 
			// T14
			// 
			this->T14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T14->Location = System::Drawing::Point(947, 254);
			this->T14->Name = L"T14";
			this->T14->Size = System::Drawing::Size(33, 28);
			this->T14->TabIndex = 73;
			this->T14->Text = L"";
			this->T14->Visible = false;
			// 
			// T15
			// 
			this->T15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T15->Location = System::Drawing::Point(1070, 254);
			this->T15->Name = L"T15";
			this->T15->Size = System::Drawing::Size(33, 28);
			this->T15->TabIndex = 72;
			this->T15->Text = L"";
			this->T15->Visible = false;
			// 
			// T16
			// 
			this->T16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T16->Location = System::Drawing::Point(82, 323);
			this->T16->Name = L"T16";
			this->T16->Size = System::Drawing::Size(33, 28);
			this->T16->TabIndex = 71;
			this->T16->Text = L"";
			this->T16->Visible = false;
			// 
			// T17
			// 
			this->T17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T17->Location = System::Drawing::Point(176, 323);
			this->T17->Name = L"T17";
			this->T17->Size = System::Drawing::Size(33, 28);
			this->T17->TabIndex = 70;
			this->T17->Text = L"";
			this->T17->Visible = false;
			// 
			// T18
			// 
			this->T18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T18->Location = System::Drawing::Point(224, 323);
			this->T18->Name = L"T18";
			this->T18->Size = System::Drawing::Size(33, 28);
			this->T18->TabIndex = 69;
			this->T18->Text = L"";
			this->T18->Visible = false;
			// 
			// T19
			// 
			this->T19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T19->Location = System::Drawing::Point(317, 323);
			this->T19->Name = L"T19";
			this->T19->Size = System::Drawing::Size(33, 28);
			this->T19->TabIndex = 68;
			this->T19->Text = L"";
			this->T19->Visible = false;
			// 
			// T20
			// 
			this->T20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T20->Location = System::Drawing::Point(374, 323);
			this->T20->Name = L"T20";
			this->T20->Size = System::Drawing::Size(33, 28);
			this->T20->TabIndex = 67;
			this->T20->Text = L"";
			this->T20->Visible = false;
			// 
			// T21
			// 
			this->T21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T21->Location = System::Drawing::Point(458, 323);
			this->T21->Name = L"T21";
			this->T21->Size = System::Drawing::Size(33, 28);
			this->T21->TabIndex = 66;
			this->T21->Text = L"";
			this->T21->Visible = false;
			// 
			// T22
			// 
			this->T22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T22->Location = System::Drawing::Point(506, 323);
			this->T22->Name = L"T22";
			this->T22->Size = System::Drawing::Size(33, 28);
			this->T22->TabIndex = 65;
			this->T22->Text = L"";
			this->T22->Visible = false;
			// 
			// T24
			// 
			this->T24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T24->Location = System::Drawing::Point(645, 323);
			this->T24->Name = L"T24";
			this->T24->Size = System::Drawing::Size(33, 28);
			this->T24->TabIndex = 64;
			this->T24->Text = L"";
			this->T24->Visible = false;
			// 
			// T4
			// 
			this->T4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T4->Location = System::Drawing::Point(203, 173);
			this->T4->Name = L"T4";
			this->T4->Size = System::Drawing::Size(33, 28);
			this->T4->TabIndex = 63;
			this->T4->Text = L"";
			this->T4->Visible = false;
			// 
			// T5
			// 
			this->T5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T5->Location = System::Drawing::Point(488, 173);
			this->T5->Name = L"T5";
			this->T5->Size = System::Drawing::Size(33, 28);
			this->T5->TabIndex = 62;
			this->T5->Text = L"";
			this->T5->Visible = false;
			// 
			// T6
			// 
			this->T6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T6->Location = System::Drawing::Point(756, 173);
			this->T6->Name = L"T6";
			this->T6->Size = System::Drawing::Size(33, 28);
			this->T6->TabIndex = 61;
			this->T6->Text = L"";
			this->T6->Visible = false;
			// 
			// T7
			// 
			this->T7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T7->Location = System::Drawing::Point(1010, 173);
			this->T7->Name = L"T7";
			this->T7->Size = System::Drawing::Size(33, 28);
			this->T7->TabIndex = 60;
			this->T7->Text = L"";
			this->T7->Visible = false;
			// 
			// T2
			// 
			this->T2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T2->Location = System::Drawing::Point(353, 94);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(33, 28);
			this->T2->TabIndex = 59;
			this->T2->Text = L"";
			this->T2->Visible = false;
			// 
			// T3
			// 
			this->T3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T3->Location = System::Drawing::Point(894, 94);
			this->T3->Name = L"T3";
			this->T3->Size = System::Drawing::Size(33, 28);
			this->T3->TabIndex = 58;
			this->T3->Text = L"";
			this->T3->Visible = false;
			// 
			// T1
			// 
			this->T1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T1->Location = System::Drawing::Point(555, 31);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(33, 28);
			this->T1->TabIndex = 57;
			this->T1->Text = L"";
			this->T1->Visible = false;
			// 
			// disp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 453);
			this->Controls->Add(this->a);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->T23);
			this->Controls->Add(this->T25);
			this->Controls->Add(this->T26);
			this->Controls->Add(this->T27);
			this->Controls->Add(this->T28);
			this->Controls->Add(this->T29);
			this->Controls->Add(this->T30);
			this->Controls->Add(this->T31);
			this->Controls->Add(this->T8);
			this->Controls->Add(this->T9);
			this->Controls->Add(this->T10);
			this->Controls->Add(this->T11);
			this->Controls->Add(this->T12);
			this->Controls->Add(this->T13);
			this->Controls->Add(this->T14);
			this->Controls->Add(this->T15);
			this->Controls->Add(this->T16);
			this->Controls->Add(this->T17);
			this->Controls->Add(this->T18);
			this->Controls->Add(this->T19);
			this->Controls->Add(this->T20);
			this->Controls->Add(this->T21);
			this->Controls->Add(this->T22);
			this->Controls->Add(this->T24);
			this->Controls->Add(this->T4);
			this->Controls->Add(this->T5);
			this->Controls->Add(this->T6);
			this->Controls->Add(this->T7);
			this->Controls->Add(this->T2);
			this->Controls->Add(this->T3);
			this->Controls->Add(this->T1);
			this->Name = L"disp";
			this->Text = L"disp";
			this->Load += gcnew System::EventHandler(this, &disp::disp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void disp_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				// this->T1 = System::Convert::ToBase64String( a[0]);
				 //System::Windows::Forms::RichTextBox^  T27 = System::Convert::ToString(a[0]);
	}
};
}
