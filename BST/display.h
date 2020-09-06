#pragma once
int dis[100];
int dd = 0;
void displ()
{
	for (int i = 0; i < dd; i++)
	{
		
	}
}
void dude()
{
	displ();
	
}

namespace BST {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for display
	/// </summary>
	public ref class display : public System::Windows::Forms::Form
	{
	public:
		display(void)
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
		~display()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::RichTextBox^  T1;
	protected:
	public: System::Windows::Forms::RichTextBox^  T3;
	public: System::Windows::Forms::RichTextBox^  T2;
	public: System::Windows::Forms::RichTextBox^  T6;
	public: System::Windows::Forms::RichTextBox^  T7;
	public: System::Windows::Forms::RichTextBox^  T4;
	public: System::Windows::Forms::RichTextBox^  T5;
	public: System::Windows::Forms::RichTextBox^  T24;
	public: System::Windows::Forms::RichTextBox^  T22;
	public: System::Windows::Forms::RichTextBox^  T21;
	public: System::Windows::Forms::RichTextBox^  T20;
	public: System::Windows::Forms::RichTextBox^  T19;
	public: System::Windows::Forms::RichTextBox^  T18;
	public: System::Windows::Forms::RichTextBox^  T17;
	public: System::Windows::Forms::RichTextBox^  T16;
	public: System::Windows::Forms::RichTextBox^  T15;
	public: System::Windows::Forms::RichTextBox^  T14;
	public: System::Windows::Forms::RichTextBox^  T13;
	public: System::Windows::Forms::RichTextBox^  T12;
	public: System::Windows::Forms::RichTextBox^  T11;
	public: System::Windows::Forms::RichTextBox^  T10;
	public: System::Windows::Forms::RichTextBox^  T9;
	public: System::Windows::Forms::RichTextBox^  T8;
	public: System::Windows::Forms::RichTextBox^  T23;
	public: System::Windows::Forms::RichTextBox^  T25;
	public: System::Windows::Forms::RichTextBox^  T26;
	public: System::Windows::Forms::RichTextBox^  T27;
	public: System::Windows::Forms::RichTextBox^  T28;
	public: System::Windows::Forms::RichTextBox^  T29;
	public: System::Windows::Forms::RichTextBox^  T30;
	public: System::Windows::Forms::RichTextBox^  T31;


	protected:

	protected:
































































	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;

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
			this->T1 = (gcnew System::Windows::Forms::RichTextBox());
			this->T3 = (gcnew System::Windows::Forms::RichTextBox());
			this->T2 = (gcnew System::Windows::Forms::RichTextBox());
			this->T6 = (gcnew System::Windows::Forms::RichTextBox());
			this->T7 = (gcnew System::Windows::Forms::RichTextBox());
			this->T4 = (gcnew System::Windows::Forms::RichTextBox());
			this->T5 = (gcnew System::Windows::Forms::RichTextBox());
			this->T24 = (gcnew System::Windows::Forms::RichTextBox());
			this->T22 = (gcnew System::Windows::Forms::RichTextBox());
			this->T21 = (gcnew System::Windows::Forms::RichTextBox());
			this->T20 = (gcnew System::Windows::Forms::RichTextBox());
			this->T19 = (gcnew System::Windows::Forms::RichTextBox());
			this->T18 = (gcnew System::Windows::Forms::RichTextBox());
			this->T17 = (gcnew System::Windows::Forms::RichTextBox());
			this->T16 = (gcnew System::Windows::Forms::RichTextBox());
			this->T15 = (gcnew System::Windows::Forms::RichTextBox());
			this->T14 = (gcnew System::Windows::Forms::RichTextBox());
			this->T13 = (gcnew System::Windows::Forms::RichTextBox());
			this->T12 = (gcnew System::Windows::Forms::RichTextBox());
			this->T11 = (gcnew System::Windows::Forms::RichTextBox());
			this->T10 = (gcnew System::Windows::Forms::RichTextBox());
			this->T9 = (gcnew System::Windows::Forms::RichTextBox());
			this->T8 = (gcnew System::Windows::Forms::RichTextBox());
			this->T23 = (gcnew System::Windows::Forms::RichTextBox());
			this->T25 = (gcnew System::Windows::Forms::RichTextBox());
			this->T26 = (gcnew System::Windows::Forms::RichTextBox());
			this->T27 = (gcnew System::Windows::Forms::RichTextBox());
			this->T28 = (gcnew System::Windows::Forms::RichTextBox());
			this->T29 = (gcnew System::Windows::Forms::RichTextBox());
			this->T30 = (gcnew System::Windows::Forms::RichTextBox());
			this->T31 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// T1
			// 
			this->T1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T1->Location = System::Drawing::Point(551, 3);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(42, 40);
			this->T1->TabIndex = 0;
			this->T1->Text = L"";
			this->T1->Visible = false;
			// 
			// T3
			// 
			this->T3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T3->Location = System::Drawing::Point(890, 66);
			this->T3->Name = L"T3";
			this->T3->Size = System::Drawing::Size(42, 40);
			this->T3->TabIndex = 20;
			this->T3->Text = L"";
			this->T3->Visible = false;
			// 
			// T2
			// 
			this->T2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T2->Location = System::Drawing::Point(349, 66);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(42, 40);
			this->T2->TabIndex = 21;
			this->T2->Text = L"";
			this->T2->Visible = false;
			// 
			// T6
			// 
			this->T6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T6->Location = System::Drawing::Point(752, 145);
			this->T6->Name = L"T6";
			this->T6->Size = System::Drawing::Size(42, 40);
			this->T6->TabIndex = 23;
			this->T6->Text = L"";
			this->T6->Visible = false;
			this->T6->TextChanged += gcnew System::EventHandler(this, &display::richTextBox3_TextChanged);
			// 
			// T7
			// 
			this->T7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T7->Location = System::Drawing::Point(1006, 145);
			this->T7->Name = L"T7";
			this->T7->Size = System::Drawing::Size(42, 40);
			this->T7->TabIndex = 22;
			this->T7->Text = L"";
			this->T7->Visible = false;
			// 
			// T4
			// 
			this->T4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T4->Location = System::Drawing::Point(199, 145);
			this->T4->Name = L"T4";
			this->T4->Size = System::Drawing::Size(42, 40);
			this->T4->TabIndex = 25;
			this->T4->Text = L"";
			this->T4->Visible = false;
			// 
			// T5
			// 
			this->T5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T5->Location = System::Drawing::Point(484, 145);
			this->T5->Name = L"T5";
			this->T5->Size = System::Drawing::Size(42, 40);
			this->T5->TabIndex = 24;
			this->T5->Text = L"";
			this->T5->Visible = false;
			// 
			// T24
			// 
			this->T24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T24->Location = System::Drawing::Point(641, 295);
			this->T24->Name = L"T24";
			this->T24->Size = System::Drawing::Size(42, 40);
			this->T24->TabIndex = 26;
			this->T24->Text = L"";
			this->T24->Visible = false;
			// 
			// T22
			// 
			this->T22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T22->Location = System::Drawing::Point(502, 295);
			this->T22->Name = L"T22";
			this->T22->Size = System::Drawing::Size(42, 40);
			this->T22->TabIndex = 27;
			this->T22->Text = L"";
			this->T22->Visible = false;
			// 
			// T21
			// 
			this->T21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T21->Location = System::Drawing::Point(454, 295);
			this->T21->Name = L"T21";
			this->T21->Size = System::Drawing::Size(42, 40);
			this->T21->TabIndex = 28;
			this->T21->Text = L"";
			this->T21->Visible = false;
			// 
			// T20
			// 
			this->T20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T20->Location = System::Drawing::Point(370, 295);
			this->T20->Name = L"T20";
			this->T20->Size = System::Drawing::Size(42, 40);
			this->T20->TabIndex = 29;
			this->T20->Text = L"";
			this->T20->Visible = false;
			// 
			// T19
			// 
			this->T19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T19->Location = System::Drawing::Point(313, 295);
			this->T19->Name = L"T19";
			this->T19->Size = System::Drawing::Size(42, 40);
			this->T19->TabIndex = 30;
			this->T19->Text = L"";
			this->T19->Visible = false;
			// 
			// T18
			// 
			this->T18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T18->Location = System::Drawing::Point(220, 295);
			this->T18->Name = L"T18";
			this->T18->Size = System::Drawing::Size(42, 40);
			this->T18->TabIndex = 31;
			this->T18->Text = L"";
			this->T18->Visible = false;
			// 
			// T17
			// 
			this->T17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T17->Location = System::Drawing::Point(172, 295);
			this->T17->Name = L"T17";
			this->T17->Size = System::Drawing::Size(42, 40);
			this->T17->TabIndex = 32;
			this->T17->Text = L"";
			this->T17->Visible = false;
			// 
			// T16
			// 
			this->T16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T16->Location = System::Drawing::Point(78, 295);
			this->T16->Name = L"T16";
			this->T16->Size = System::Drawing::Size(42, 40);
			this->T16->TabIndex = 33;
			this->T16->Text = L"";
			this->T16->Visible = false;
			// 
			// T15
			// 
			this->T15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T15->Location = System::Drawing::Point(1066, 226);
			this->T15->Name = L"T15";
			this->T15->Size = System::Drawing::Size(42, 40);
			this->T15->TabIndex = 34;
			this->T15->Text = L"";
			this->T15->Visible = false;
			// 
			// T14
			// 
			this->T14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T14->Location = System::Drawing::Point(943, 226);
			this->T14->Name = L"T14";
			this->T14->Size = System::Drawing::Size(42, 40);
			this->T14->TabIndex = 35;
			this->T14->Text = L"";
			this->T14->Visible = false;
			// 
			// T13
			// 
			this->T13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T13->Location = System::Drawing::Point(823, 226);
			this->T13->Name = L"T13";
			this->T13->Size = System::Drawing::Size(42, 40);
			this->T13->TabIndex = 36;
			this->T13->Text = L"";
			this->T13->Visible = false;
			// 
			// T12
			// 
			this->T12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T12->Location = System::Drawing::Point(686, 226);
			this->T12->Name = L"T12";
			this->T12->Size = System::Drawing::Size(42, 40);
			this->T12->TabIndex = 37;
			this->T12->Text = L"";
			this->T12->Visible = false;
			// 
			// T11
			// 
			this->T11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T11->Location = System::Drawing::Point(550, 226);
			this->T11->Name = L"T11";
			this->T11->Size = System::Drawing::Size(42, 40);
			this->T11->TabIndex = 38;
			this->T11->Text = L"";
			this->T11->Visible = false;
			// 
			// T10
			// 
			this->T10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T10->Location = System::Drawing::Point(413, 226);
			this->T10->Name = L"T10";
			this->T10->Size = System::Drawing::Size(42, 40);
			this->T10->TabIndex = 39;
			this->T10->Text = L"";
			this->T10->Visible = false;
			// 
			// T9
			// 
			this->T9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T9->Location = System::Drawing::Point(265, 226);
			this->T9->Name = L"T9";
			this->T9->Size = System::Drawing::Size(42, 40);
			this->T9->TabIndex = 40;
			this->T9->Text = L"";
			this->T9->Visible = false;
			// 
			// T8
			// 
			this->T8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T8->Location = System::Drawing::Point(125, 226);
			this->T8->Name = L"T8";
			this->T8->Size = System::Drawing::Size(42, 40);
			this->T8->TabIndex = 41;
			this->T8->Text = L"";
			this->T8->Visible = false;
			// 
			// T23
			// 
			this->T23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T23->Location = System::Drawing::Point(583, 295);
			this->T23->Name = L"T23";
			this->T23->Size = System::Drawing::Size(42, 40);
			this->T23->TabIndex = 49;
			this->T23->Text = L"";
			this->T23->Visible = false;
			// 
			// T25
			// 
			this->T25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T25->Location = System::Drawing::Point(725, 295);
			this->T25->Name = L"T25";
			this->T25->Size = System::Drawing::Size(42, 40);
			this->T25->TabIndex = 48;
			this->T25->Text = L"";
			this->T25->Visible = false;
			// 
			// T26
			// 
			this->T26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T26->Location = System::Drawing::Point(785, 295);
			this->T26->Name = L"T26";
			this->T26->Size = System::Drawing::Size(42, 40);
			this->T26->TabIndex = 47;
			this->T26->Text = L"";
			this->T26->Visible = false;
			// 
			// T27
			// 
			this->T27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T27->Location = System::Drawing::Point(855, 295);
			this->T27->Name = L"T27";
			this->T27->Size = System::Drawing::Size(42, 40);
			this->T27->TabIndex = 46;
			this->T27->Text = L"";
			this->T27->Visible = false;
			// 
			// T28
			// 
			this->T28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T28->Location = System::Drawing::Point(903, 295);
			this->T28->Name = L"T28";
			this->T28->Size = System::Drawing::Size(42, 40);
			this->T28->TabIndex = 45;
			this->T28->Text = L"";
			this->T28->Visible = false;
			// 
			// T29
			// 
			this->T29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T29->Location = System::Drawing::Point(979, 295);
			this->T29->Name = L"T29";
			this->T29->Size = System::Drawing::Size(42, 40);
			this->T29->TabIndex = 44;
			this->T29->Text = L"";
			this->T29->Visible = false;
			// 
			// T30
			// 
			this->T30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T30->Location = System::Drawing::Point(1027, 295);
			this->T30->Name = L"T30";
			this->T30->Size = System::Drawing::Size(42, 40);
			this->T30->TabIndex = 43;
			this->T30->Text = L"";
			this->T30->Visible = false;
			// 
			// T31
			// 
			this->T31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T31->Location = System::Drawing::Point(1092, 295);
			this->T31->Name = L"T31";
			this->T31->Size = System::Drawing::Size(42, 40);
			this->T31->TabIndex = 42;
			this->T31->Text = L"";
			this->T31->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(-2, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 19);
			this->label1->TabIndex = 50;
			this->label1->Text = L"LEVEL 0 :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(-2, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 19);
			this->label2->TabIndex = 51;
			this->label2->Text = L"LEVEL 3 :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(-2, 316);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 19);
			this->label3->TabIndex = 52;
			this->label3->Text = L"LEVEL  4:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(-2, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 19);
			this->label4->TabIndex = 53;
			this->label4->Text = L"LEVEL 2 :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(-2, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 19);
			this->label5->TabIndex = 54;
			this->label5->Text = L"LEVEL 1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-6, 374);
			this->label6->MinimumSize = System::Drawing::Size(1140, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1140, 50);
			this->label6->TabIndex = 55;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Engravers MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(484, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 26);
			this->button1->TabIndex = 56;
			this->button1->Text = L"DISPLAY TREE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &display::button1_Click);
			// 
			// display
			// 
			this->AccessibleName = L"displayy";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1142, 423);
			this->Controls->Add(this->button1);
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
			this->Name = L"display";
			this->Text = L"display";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 T1->Text = System::Convert::ToString(dis[dd]);
				 dd = dd + 1;

	}
	private: System::Void richTextBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 T1->Text = System::Convert::ToString(dis[dd]);
			 dd = dd + 1;
}
};
}
