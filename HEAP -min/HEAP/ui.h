#pragma once
#include"Header.h"
using namespace std;
int a[100],b[100], last = -1,last1=-1;
namespace HEAP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ui
	/// </summary>
	public ref class ui : public System::Windows::Forms::Form
	{
	public:
		ui(void)
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
		~ui()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  insert;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  data;
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
	private: System::Windows::Forms::Label^  label4;
	public:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

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
			this->insert = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::TextBox());
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// insert
			// 
			this->insert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert->ForeColor = System::Drawing::Color::LimeGreen;
			this->insert->Location = System::Drawing::Point(922, 68);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(108, 31);
			this->insert->TabIndex = 28;
			this->insert->Text = L"INSERT";
			this->insert->UseVisualStyleBackColor = false;
			this->insert->Click += gcnew System::EventHandler(this, &ui::insert_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(682, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 18);
			this->label2->TabIndex = 27;
			this->label2->Text = L"ENTER THE DATA :";
			// 
			// data
			// 
			this->data->Location = System::Drawing::Point(863, 18);
			this->data->Name = L"data";
			this->data->Size = System::Drawing::Size(262, 20);
			this->data->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(5, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 116);
			this->label1->TabIndex = 25;
			this->label1->Text = L"SIMULATION OF \r\n                             HEAP\r\n                              "
				L"     TREE\r\n                                         MIN  HEAP";
			// 
			// T23
			// 
			this->T23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T23->Location = System::Drawing::Point(682, 487);
			this->T23->Name = L"T23";
			this->T23->Size = System::Drawing::Size(33, 28);
			this->T23->TabIndex = 118;
			this->T23->Text = L"";
			this->T23->Visible = false;
			// 
			// T25
			// 
			this->T25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T25->Location = System::Drawing::Point(824, 487);
			this->T25->Name = L"T25";
			this->T25->Size = System::Drawing::Size(33, 28);
			this->T25->TabIndex = 117;
			this->T25->Text = L"";
			this->T25->Visible = false;
			// 
			// T26
			// 
			this->T26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T26->Location = System::Drawing::Point(884, 487);
			this->T26->Name = L"T26";
			this->T26->Size = System::Drawing::Size(33, 28);
			this->T26->TabIndex = 116;
			this->T26->Text = L"";
			this->T26->Visible = false;
			// 
			// T27
			// 
			this->T27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T27->Location = System::Drawing::Point(954, 487);
			this->T27->Name = L"T27";
			this->T27->Size = System::Drawing::Size(33, 28);
			this->T27->TabIndex = 115;
			this->T27->Text = L"";
			this->T27->Visible = false;
			// 
			// T28
			// 
			this->T28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T28->Location = System::Drawing::Point(1002, 487);
			this->T28->Name = L"T28";
			this->T28->Size = System::Drawing::Size(33, 28);
			this->T28->TabIndex = 114;
			this->T28->Text = L"";
			this->T28->Visible = false;
			// 
			// T29
			// 
			this->T29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T29->Location = System::Drawing::Point(1078, 487);
			this->T29->Name = L"T29";
			this->T29->Size = System::Drawing::Size(33, 28);
			this->T29->TabIndex = 113;
			this->T29->Text = L"";
			this->T29->Visible = false;
			// 
			// T30
			// 
			this->T30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T30->Location = System::Drawing::Point(1126, 487);
			this->T30->Name = L"T30";
			this->T30->Size = System::Drawing::Size(33, 28);
			this->T30->TabIndex = 112;
			this->T30->Text = L"";
			this->T30->Visible = false;
			// 
			// T31
			// 
			this->T31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T31->Location = System::Drawing::Point(1191, 487);
			this->T31->Name = L"T31";
			this->T31->Size = System::Drawing::Size(33, 28);
			this->T31->TabIndex = 111;
			this->T31->Text = L"";
			this->T31->Visible = false;
			// 
			// T8
			// 
			this->T8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T8->Location = System::Drawing::Point(224, 418);
			this->T8->Name = L"T8";
			this->T8->Size = System::Drawing::Size(33, 28);
			this->T8->TabIndex = 110;
			this->T8->Text = L"";
			this->T8->Visible = false;
			// 
			// T9
			// 
			this->T9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T9->Location = System::Drawing::Point(364, 418);
			this->T9->Name = L"T9";
			this->T9->Size = System::Drawing::Size(33, 28);
			this->T9->TabIndex = 109;
			this->T9->Text = L"";
			this->T9->Visible = false;
			// 
			// T10
			// 
			this->T10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T10->Location = System::Drawing::Point(512, 418);
			this->T10->Name = L"T10";
			this->T10->Size = System::Drawing::Size(33, 28);
			this->T10->TabIndex = 108;
			this->T10->Text = L"";
			this->T10->Visible = false;
			// 
			// T11
			// 
			this->T11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T11->Location = System::Drawing::Point(649, 418);
			this->T11->Name = L"T11";
			this->T11->Size = System::Drawing::Size(33, 28);
			this->T11->TabIndex = 107;
			this->T11->Text = L"";
			this->T11->Visible = false;
			// 
			// T12
			// 
			this->T12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T12->Location = System::Drawing::Point(785, 418);
			this->T12->Name = L"T12";
			this->T12->Size = System::Drawing::Size(33, 28);
			this->T12->TabIndex = 106;
			this->T12->Text = L"";
			this->T12->Visible = false;
			// 
			// T13
			// 
			this->T13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T13->Location = System::Drawing::Point(922, 418);
			this->T13->Name = L"T13";
			this->T13->Size = System::Drawing::Size(33, 28);
			this->T13->TabIndex = 105;
			this->T13->Text = L"";
			this->T13->Visible = false;
			// 
			// T14
			// 
			this->T14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T14->Location = System::Drawing::Point(1042, 418);
			this->T14->Name = L"T14";
			this->T14->Size = System::Drawing::Size(33, 28);
			this->T14->TabIndex = 104;
			this->T14->Text = L"";
			this->T14->Visible = false;
			// 
			// T15
			// 
			this->T15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T15->Location = System::Drawing::Point(1165, 418);
			this->T15->Name = L"T15";
			this->T15->Size = System::Drawing::Size(33, 28);
			this->T15->TabIndex = 103;
			this->T15->Text = L"";
			this->T15->Visible = false;
			// 
			// T16
			// 
			this->T16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T16->Location = System::Drawing::Point(177, 487);
			this->T16->Name = L"T16";
			this->T16->Size = System::Drawing::Size(33, 28);
			this->T16->TabIndex = 102;
			this->T16->Text = L"";
			this->T16->Visible = false;
			// 
			// T17
			// 
			this->T17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T17->Location = System::Drawing::Point(271, 487);
			this->T17->Name = L"T17";
			this->T17->Size = System::Drawing::Size(33, 28);
			this->T17->TabIndex = 101;
			this->T17->Text = L"";
			this->T17->Visible = false;
			// 
			// T18
			// 
			this->T18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T18->Location = System::Drawing::Point(319, 487);
			this->T18->Name = L"T18";
			this->T18->Size = System::Drawing::Size(33, 28);
			this->T18->TabIndex = 100;
			this->T18->Text = L"";
			this->T18->Visible = false;
			// 
			// T19
			// 
			this->T19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T19->Location = System::Drawing::Point(412, 487);
			this->T19->Name = L"T19";
			this->T19->Size = System::Drawing::Size(33, 28);
			this->T19->TabIndex = 99;
			this->T19->Text = L"";
			this->T19->Visible = false;
			// 
			// T20
			// 
			this->T20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T20->Location = System::Drawing::Point(469, 487);
			this->T20->Name = L"T20";
			this->T20->Size = System::Drawing::Size(33, 28);
			this->T20->TabIndex = 98;
			this->T20->Text = L"";
			this->T20->Visible = false;
			// 
			// T21
			// 
			this->T21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T21->Location = System::Drawing::Point(553, 487);
			this->T21->Name = L"T21";
			this->T21->Size = System::Drawing::Size(33, 28);
			this->T21->TabIndex = 97;
			this->T21->Text = L"";
			this->T21->Visible = false;
			// 
			// T22
			// 
			this->T22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T22->Location = System::Drawing::Point(601, 487);
			this->T22->Name = L"T22";
			this->T22->Size = System::Drawing::Size(33, 28);
			this->T22->TabIndex = 96;
			this->T22->Text = L"";
			this->T22->Visible = false;
			// 
			// T24
			// 
			this->T24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T24->Location = System::Drawing::Point(740, 487);
			this->T24->Name = L"T24";
			this->T24->Size = System::Drawing::Size(33, 28);
			this->T24->TabIndex = 95;
			this->T24->Text = L"";
			this->T24->Visible = false;
			// 
			// T4
			// 
			this->T4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4->Location = System::Drawing::Point(298, 337);
			this->T4->Name = L"T4";
			this->T4->Size = System::Drawing::Size(33, 28);
			this->T4->TabIndex = 94;
			this->T4->Text = L"";
			this->T4->Visible = false;
			// 
			// T5
			// 
			this->T5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T5->Location = System::Drawing::Point(583, 337);
			this->T5->Name = L"T5";
			this->T5->Size = System::Drawing::Size(33, 28);
			this->T5->TabIndex = 93;
			this->T5->Text = L"";
			this->T5->Visible = false;
			// 
			// T6
			// 
			this->T6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T6->Location = System::Drawing::Point(851, 337);
			this->T6->Name = L"T6";
			this->T6->Size = System::Drawing::Size(33, 28);
			this->T6->TabIndex = 92;
			this->T6->Text = L"";
			this->T6->Visible = false;
			// 
			// T7
			// 
			this->T7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T7->Location = System::Drawing::Point(1105, 337);
			this->T7->Name = L"T7";
			this->T7->Size = System::Drawing::Size(33, 28);
			this->T7->TabIndex = 91;
			this->T7->Text = L"";
			this->T7->Visible = false;
			// 
			// T2
			// 
			this->T2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2->Location = System::Drawing::Point(448, 258);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(33, 28);
			this->T2->TabIndex = 90;
			this->T2->Text = L"";
			this->T2->Visible = false;
			// 
			// T3
			// 
			this->T3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3->Location = System::Drawing::Point(989, 258);
			this->T3->Name = L"T3";
			this->T3->Size = System::Drawing::Size(33, 28);
			this->T3->TabIndex = 89;
			this->T3->Text = L"";
			this->T3->Visible = false;
			// 
			// T1
			// 
			this->T1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1->Location = System::Drawing::Point(650, 195);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(33, 28);
			this->T1->TabIndex = 88;
			this->T1->Text = L"";
			this->T1->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(12, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 19);
			this->label4->TabIndex = 123;
			this->label4->Text = L"LEVEL 1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(12, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 19);
			this->label6->TabIndex = 122;
			this->label6->Text = L"LEVEL 2 :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(12, 496);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 19);
			this->label7->TabIndex = 121;
			this->label7->Text = L"LEVEL  4:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(12, 427);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 19);
			this->label8->TabIndex = 120;
			this->label8->Text = L"LEVEL 3 :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(12, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 19);
			this->label9->TabIndex = 119;
			this->label9->Text = L"LEVEL 0 :";
			// 
			// ui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1304, 593);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
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
			this->Controls->Add(this->insert);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->data);
			this->Controls->Add(this->label1);
			this->Name = L"ui";
			this->Text = L"HEAP TREE";
			this->Load += gcnew System::EventHandler(this, &ui::ui_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ui_Load(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void insert_Click(System::Object^  sender, System::EventArgs^  e) {
				 int aa = System::Convert::ToInt32(data->Text);
				 insert3(aa, a, &last);
				 insert33(aa, b, &last1);
				 //textBox1->Text = System::Convert::ToString(last);
				 //textBox2->Text = System::Convert::ToString(a[0]);
				 data->Clear();
				 if (last > -1)
				 {
					 T1->Visible = true;
					 T1->Text = System::Convert::ToString(a[0]);
				 }
				 if (last > 0)
				 {
					 T2->Visible = true;
					 T2->Text = System::Convert::ToString(a[1]);
				 }
				 if (last > 1)
				 {
					 T3->Visible = true;
					 T3->Text = System::Convert::ToString(a[2]);
				 }
				 if (last > 2)
				 {
					 T4->Visible = true;
					 T4->Text = System::Convert::ToString(a[3]);
				 }
				 if (last > 3)
				 {
					 T5->Visible = true;
					 T5->Text = System::Convert::ToString(a[4]);

				 }
				 if (last > 4)
				 {
					 T6->Visible = true;
					 T6->Text = System::Convert::ToString(a[5]);
				 }
				 if (last > 5)
				 {
					 T7->Visible = true;
					 T7->Text = System::Convert::ToString(a[6]);
				 }
				 if (last > 6)
				 {
					 T8->Visible = true;
					 T8->Text = System::Convert::ToString(a[7]);
				 }
				 if (last > 7)
				 {
					 T9->Visible = true;
					 T9->Text = System::Convert::ToString(a[8]);

				 }
				 if (last > 8)
				 {
					 T10->Visible = true;
					 T10->Text = System::Convert::ToString(a[9]);
				 }
				 if (last > 9)
				 {
					 T11->Visible = true;
					 T11->Text = System::Convert::ToString(a[10]);
				 }
				 if (last > 10)
				 {
					 T12->Visible = true;
					 T12->Text = System::Convert::ToString(a[11]);
				 }
				 if (last > 11)
				 {
					 T13->Visible = true;
					 T13->Text = System::Convert::ToString(a[12]);
				 }
				 if (last > 12)
				 {
					 T14->Visible = true;
					 T14->Text = System::Convert::ToString(a[13]);
				 }
				 if (last > 13)
				 {
					 T15->Visible = true;
					 T15->Text = System::Convert::ToString(a[14]);
				 }
				 if (last > 14)
				 {
					 T16->Visible = true;
					 T16->Text = System::Convert::ToString(a[15]);
				 }
				 if (last > 15)
				 {
					 T17->Visible = true;
					 T17->Text = System::Convert::ToString(a[16]);
				 }
				 if (last > 16)
				 {
					 T18->Visible = true;
					 T18->Text = System::Convert::ToString(a[17]);
				 }
				 if (last > 17)
				 {
					 T19->Visible = true;
					 T19->Text = System::Convert::ToString(a[18]);
				 }

				 if (last > 18)
				 {
					 T20->Visible = true;
					 T20->Text = System::Convert::ToString(a[19]);
				 }
				 if (last > 19)
				 {
					 T21->Visible = true;
					 T21->Text = System::Convert::ToString(a[20]);
				 }
				 if (last > 20)
				 {
					 T22->Visible = true;
					 T22->Text = System::Convert::ToString(a[21]);

				 }
				 if (last > 21)
				 {
					 T23->Visible = true;
					 T23->Text = System::Convert::ToString(a[22]);
				 }
				 if (last > 22)
				 {
					 T24->Visible = true;
					 T24->Text = System::Convert::ToString(a[23]);
				 }
				 if (last > 23)
				 {
					 T25->Visible = true;
					 T25->Text = System::Convert::ToString(a[24]);

				 }
				 if (last > 24)
				 {
					 T26->Visible = true;
					 T26->Text = System::Convert::ToString(a[25]);
				 }
				 if (last > 25)
				 {
					 T27->Visible = true;
					 T27->Text = System::Convert::ToString(a[26]);
				 }
				 if (last > 26)
				 {
					 T28->Visible = true;
					 T28->Text = System::Convert::ToString(a[27]);
				 }
				 if (last > 27)
				 {
					 T29->Visible = true;
					 T29->Text = System::Convert::ToString(a[28]);

				 }
				 if (last > 28)
				 {
					 T30->Visible = true;
					 T30->Text = System::Convert::ToString(a[29]);
				 }
				 if (last > 29)
				 {
					 T31->Visible = true;
					 T31->Text = System::Convert::ToString(a[30]);
				 }
	}
private: System::Void printtree_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
