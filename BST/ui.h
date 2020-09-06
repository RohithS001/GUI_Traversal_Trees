#pragma once
#include"Header1.h"
#include"display.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
a *root,*arr[100];
int ii = 0,j=0,d[100],tot;
int aa[100];
namespace BST {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  data;
	protected:

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  insert;
	private: System::Windows::Forms::Button^  printtree;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->data = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->insert = (gcnew System::Windows::Forms::Button());
			this->printtree = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-4, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 145);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SIMULATION OF \r\n\r\n          BINARY\r\n                       SEARCH\r\n              "
				L"                       TREE";
			// 
			// data
			// 
			this->data->Location = System::Drawing::Point(453, 12);
			this->data->Name = L"data";
			this->data->Size = System::Drawing::Size(262, 20);
			this->data->TabIndex = 1;
			this->data->TextChanged += gcnew System::EventHandler(this, &ui::data_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(272, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ENTER THE DATA :";
			this->label2->Click += gcnew System::EventHandler(this, &ui::label2_Click);
			// 
			// insert
			// 
			this->insert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert->ForeColor = System::Drawing::Color::Blue;
			this->insert->Location = System::Drawing::Point(323, 61);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(108, 31);
			this->insert->TabIndex = 4;
			this->insert->Text = L"INSERT";
			this->insert->UseVisualStyleBackColor = false;
			this->insert->Click += gcnew System::EventHandler(this, &ui::insert_Click);
			// 
			// printtree
			// 
			this->printtree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->printtree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->printtree->ForeColor = System::Drawing::Color::Blue;
			this->printtree->Location = System::Drawing::Point(566, 61);
			this->printtree->Name = L"printtree";
			this->printtree->Size = System::Drawing::Size(108, 31);
			this->printtree->TabIndex = 5;
			this->printtree->Text = L"TRAVERSE";
			this->printtree->UseVisualStyleBackColor = false;
			this->printtree->Click += gcnew System::EventHandler(this, &ui::printtree_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(849, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(443, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(730, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"INORDER:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(730, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"PREORDER:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(849, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(443, 20);
			this->textBox2->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(730, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"POSTORDER:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(849, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(443, 20);
			this->textBox3->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(46, 286);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->TabIndex = 190;
			this->label3->Text = L"LEVEL 1:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(46, 365);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 19);
			this->label7->TabIndex = 189;
			this->label7->Text = L"LEVEL 2 :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(46, 515);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 19);
			this->label8->TabIndex = 188;
			this->label8->Text = L"LEVEL  4:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(46, 446);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 19);
			this->label9->TabIndex = 187;
			this->label9->Text = L"LEVEL 3 :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(46, 201);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 19);
			this->label10->TabIndex = 186;
			this->label10->Text = L"LEVEL 0 :";
			// 
			// T23
			// 
			this->T23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T23->Location = System::Drawing::Point(694, 496);
			this->T23->Name = L"T23";
			this->T23->Size = System::Drawing::Size(41, 38);
			this->T23->TabIndex = 185;
			this->T23->Text = L"";
			this->T23->Visible = false;
			// 
			// T25
			// 
			this->T25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T25->Location = System::Drawing::Point(836, 496);
			this->T25->Name = L"T25";
			this->T25->Size = System::Drawing::Size(41, 38);
			this->T25->TabIndex = 184;
			this->T25->Text = L"";
			this->T25->Visible = false;
			// 
			// T26
			// 
			this->T26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T26->Location = System::Drawing::Point(896, 496);
			this->T26->Name = L"T26";
			this->T26->Size = System::Drawing::Size(41, 38);
			this->T26->TabIndex = 183;
			this->T26->Text = L"";
			this->T26->Visible = false;
			// 
			// T27
			// 
			this->T27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T27->Location = System::Drawing::Point(966, 496);
			this->T27->Name = L"T27";
			this->T27->Size = System::Drawing::Size(41, 38);
			this->T27->TabIndex = 182;
			this->T27->Text = L"";
			this->T27->Visible = false;
			// 
			// T28
			// 
			this->T28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T28->Location = System::Drawing::Point(1014, 496);
			this->T28->Name = L"T28";
			this->T28->Size = System::Drawing::Size(41, 38);
			this->T28->TabIndex = 181;
			this->T28->Text = L"";
			this->T28->Visible = false;
			// 
			// T29
			// 
			this->T29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T29->Location = System::Drawing::Point(1090, 496);
			this->T29->Name = L"T29";
			this->T29->Size = System::Drawing::Size(41, 38);
			this->T29->TabIndex = 180;
			this->T29->Text = L"";
			this->T29->Visible = false;
			// 
			// T30
			// 
			this->T30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T30->Location = System::Drawing::Point(1138, 496);
			this->T30->Name = L"T30";
			this->T30->Size = System::Drawing::Size(41, 38);
			this->T30->TabIndex = 179;
			this->T30->Text = L"";
			this->T30->Visible = false;
			// 
			// T31
			// 
			this->T31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T31->Location = System::Drawing::Point(1203, 496);
			this->T31->Name = L"T31";
			this->T31->Size = System::Drawing::Size(41, 38);
			this->T31->TabIndex = 178;
			this->T31->Text = L"";
			this->T31->Visible = false;
			// 
			// T8
			// 
			this->T8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T8->Location = System::Drawing::Point(236, 427);
			this->T8->Name = L"T8";
			this->T8->Size = System::Drawing::Size(41, 38);
			this->T8->TabIndex = 177;
			this->T8->Text = L"";
			this->T8->Visible = false;
			// 
			// T9
			// 
			this->T9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T9->Location = System::Drawing::Point(376, 427);
			this->T9->Name = L"T9";
			this->T9->Size = System::Drawing::Size(41, 38);
			this->T9->TabIndex = 176;
			this->T9->Text = L"";
			this->T9->Visible = false;
			// 
			// T10
			// 
			this->T10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T10->Location = System::Drawing::Point(524, 427);
			this->T10->Name = L"T10";
			this->T10->Size = System::Drawing::Size(41, 38);
			this->T10->TabIndex = 175;
			this->T10->Text = L"";
			this->T10->Visible = false;
			// 
			// T11
			// 
			this->T11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T11->Location = System::Drawing::Point(661, 427);
			this->T11->Name = L"T11";
			this->T11->Size = System::Drawing::Size(41, 38);
			this->T11->TabIndex = 174;
			this->T11->Text = L"";
			this->T11->Visible = false;
			// 
			// T12
			// 
			this->T12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T12->Location = System::Drawing::Point(797, 427);
			this->T12->Name = L"T12";
			this->T12->Size = System::Drawing::Size(41, 38);
			this->T12->TabIndex = 173;
			this->T12->Text = L"";
			this->T12->Visible = false;
			// 
			// T13
			// 
			this->T13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T13->Location = System::Drawing::Point(934, 427);
			this->T13->Name = L"T13";
			this->T13->Size = System::Drawing::Size(41, 38);
			this->T13->TabIndex = 172;
			this->T13->Text = L"";
			this->T13->Visible = false;
			// 
			// T14
			// 
			this->T14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T14->Location = System::Drawing::Point(1054, 427);
			this->T14->Name = L"T14";
			this->T14->Size = System::Drawing::Size(41, 38);
			this->T14->TabIndex = 171;
			this->T14->Text = L"";
			this->T14->Visible = false;
			// 
			// T15
			// 
			this->T15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T15->Location = System::Drawing::Point(1177, 427);
			this->T15->Name = L"T15";
			this->T15->Size = System::Drawing::Size(41, 38);
			this->T15->TabIndex = 170;
			this->T15->Text = L"";
			this->T15->Visible = false;
			// 
			// T16
			// 
			this->T16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T16->Location = System::Drawing::Point(189, 496);
			this->T16->Name = L"T16";
			this->T16->Size = System::Drawing::Size(41, 38);
			this->T16->TabIndex = 169;
			this->T16->Text = L"";
			this->T16->Visible = false;
			// 
			// T17
			// 
			this->T17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T17->Location = System::Drawing::Point(283, 496);
			this->T17->Name = L"T17";
			this->T17->Size = System::Drawing::Size(41, 38);
			this->T17->TabIndex = 168;
			this->T17->Text = L"";
			this->T17->Visible = false;
			// 
			// T18
			// 
			this->T18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T18->Location = System::Drawing::Point(331, 496);
			this->T18->Name = L"T18";
			this->T18->Size = System::Drawing::Size(41, 38);
			this->T18->TabIndex = 167;
			this->T18->Text = L"";
			this->T18->Visible = false;
			// 
			// T19
			// 
			this->T19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T19->Location = System::Drawing::Point(424, 496);
			this->T19->Name = L"T19";
			this->T19->Size = System::Drawing::Size(41, 38);
			this->T19->TabIndex = 166;
			this->T19->Text = L"";
			this->T19->Visible = false;
			// 
			// T20
			// 
			this->T20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T20->Location = System::Drawing::Point(481, 496);
			this->T20->Name = L"T20";
			this->T20->Size = System::Drawing::Size(41, 38);
			this->T20->TabIndex = 165;
			this->T20->Text = L"";
			this->T20->Visible = false;
			// 
			// T21
			// 
			this->T21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T21->Location = System::Drawing::Point(565, 496);
			this->T21->Name = L"T21";
			this->T21->Size = System::Drawing::Size(41, 38);
			this->T21->TabIndex = 164;
			this->T21->Text = L"";
			this->T21->Visible = false;
			// 
			// T22
			// 
			this->T22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T22->Location = System::Drawing::Point(613, 496);
			this->T22->Name = L"T22";
			this->T22->Size = System::Drawing::Size(41, 38);
			this->T22->TabIndex = 163;
			this->T22->Text = L"";
			this->T22->Visible = false;
			// 
			// T24
			// 
			this->T24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T24->Location = System::Drawing::Point(752, 496);
			this->T24->Name = L"T24";
			this->T24->Size = System::Drawing::Size(41, 38);
			this->T24->TabIndex = 162;
			this->T24->Text = L"";
			this->T24->Visible = false;
			// 
			// T4
			// 
			this->T4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T4->Location = System::Drawing::Point(310, 346);
			this->T4->Name = L"T4";
			this->T4->Size = System::Drawing::Size(41, 38);
			this->T4->TabIndex = 161;
			this->T4->Text = L"";
			this->T4->Visible = false;
			// 
			// T5
			// 
			this->T5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T5->Location = System::Drawing::Point(595, 346);
			this->T5->Name = L"T5";
			this->T5->Size = System::Drawing::Size(41, 38);
			this->T5->TabIndex = 160;
			this->T5->Text = L"";
			this->T5->Visible = false;
			// 
			// T6
			// 
			this->T6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T6->Location = System::Drawing::Point(863, 346);
			this->T6->Name = L"T6";
			this->T6->Size = System::Drawing::Size(41, 38);
			this->T6->TabIndex = 159;
			this->T6->Text = L"";
			this->T6->Visible = false;
			// 
			// T7
			// 
			this->T7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T7->Location = System::Drawing::Point(1117, 346);
			this->T7->Name = L"T7";
			this->T7->Size = System::Drawing::Size(41, 38);
			this->T7->TabIndex = 158;
			this->T7->Text = L"";
			this->T7->Visible = false;
			// 
			// T2
			// 
			this->T2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T2->Location = System::Drawing::Point(460, 267);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(41, 38);
			this->T2->TabIndex = 157;
			this->T2->Text = L"";
			this->T2->Visible = false;
			// 
			// T3
			// 
			this->T3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T3->Location = System::Drawing::Point(1001, 267);
			this->T3->Name = L"T3";
			this->T3->Size = System::Drawing::Size(41, 38);
			this->T3->TabIndex = 156;
			this->T3->Text = L"";
			this->T3->Visible = false;
			// 
			// T1
			// 
			this->T1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->T1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->T1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->T1->Location = System::Drawing::Point(674, 182);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(41, 38);
			this->T1->TabIndex = 155;
			this->T1->Text = L"";
			this->T1->Visible = false;
			// 
			// ui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(1304, 592);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
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
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->printtree);
			this->Controls->Add(this->insert);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->data);
			this->Controls->Add(this->label1);
			this->Name = L"ui";
			this->Text = L"Binary Search Tree";
			this->Load += gcnew System::EventHandler(this, &ui::ui_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void ui_Load(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void insert_Click(System::Object^  sender, System::EventArgs^  e) {
			 int aad = System::Convert::ToInt64(data->Text);
			 root = Insert(root, aad,&j);
			 int ij = 0;
			 levelOrder2(root,aa,&ij);
			 data->Clear();
			 if (ij > 0 && aa[0] != 0)
			 {
				 T1->Visible = true;
				 T1->Text = System::Convert::ToString(aa[0]);
			 }
			 if (ij > 1 && aa[1] != 0)
			 {
				 T2->Visible = true;
				 T2->Text = System::Convert::ToString(aa[1]);
			 }
			 if (ij > 2 && aa[2] != 0)
			 {
				 T3->Visible = true;
				 T3->Text = System::Convert::ToString(aa[2]);
			 }
			 if (ij > 3 && aa[3] != 0)
			 {
				 T4->Visible = true;
				 T4->Text = System::Convert::ToString(aa[3]);
			 }
			 if (ij > 4 && aa[4] != 0)
			 {
				 T5->Visible = true;
				 T5->Text = System::Convert::ToString(aa[4]);

			 }
			 if (ij > 5 && aa[5] != 0)
			 {
				 T6->Visible = true;
				 T6->Text = System::Convert::ToString(aa[5]);
			 }
			 if (ij > 6 && aa[6] != 0)
			 {
				 T7->Visible = true;
				 T7->Text = System::Convert::ToString(aa[6]);
			 }
			 if (ij > 7 && aa[7] != 0)
			 {
				 T8->Visible = true;
				 T8->Text = System::Convert::ToString(aa[7]);
			 }
			 if (ij > 8 && aa[8] != 0)
			 {
				 T9->Visible = true;
				 T9->Text = System::Convert::ToString(aa[8]);

			 }
			 if (ij > 9 && aa[9] != 0)
			 {
				 T10->Visible = true;
				 T10->Text = System::Convert::ToString(aa[9]);
			 }
			 if (ij > 10 && aa[10] != 0)
			 {
				 T11->Visible = true;
				 T11->Text = System::Convert::ToString(aa[10]);
			 }
			 if (ij > 11 && aa[11] != 0)
			 {
				 T12->Visible = true;
				 T12->Text = System::Convert::ToString(aa[11]);
			 }
			 if (ij > 12 && aa[12] != 0)
			 {
				 T13->Visible = true;
				 T13->Text = System::Convert::ToString(aa[12]);
			 }
			 if (ij > 13 && aa[13] != 0)
			 {
				 T14->Visible = true;
				 T14->Text = System::Convert::ToString(aa[13]);
			 }
			 if (ij > 14 && aa[14] != 0)
			 {
				 T15->Visible = true;
				 T15->Text = System::Convert::ToString(aa[14]);
			 }
			 if (ij > 15 && aa[15] != 0)
			 {
				 T16->Visible = true;
				 T16->Text = System::Convert::ToString(aa[15]);
			 }
			 if (ij > 16 && aa[16] != 0)
			 {
				 T17->Visible = true;
				 T17->Text = System::Convert::ToString(aa[16]);
			 }
			 if (ij > 17 && aa[17] != 0)
			 {
				 T18->Visible = true;
				 T18->Text = System::Convert::ToString(aa[17]);
			 }
			 if (ij > 18 && aa[18] != 0)
			 {
				 T19->Visible = true;
				 T19->Text = System::Convert::ToString(aa[18]);
			 }

			 if (ij > 19 && aa[19] != 0)
			 {
				 T20->Visible = true;
				 T20->Text = System::Convert::ToString(aa[19]);
			 }
			 if (ij > 20 && aa[20] != 0)
			 {
				 T21->Visible = true;
				 T21->Text = System::Convert::ToString(aa[20]);
			 }
			 if (ij > 21 && aa[21] != 0)
			 {
				 T22->Visible = true;
				 T22->Text = System::Convert::ToString(aa[21]);

			 }
			 if (ij > 22 && aa[22] != 0)
			 {
				 T23->Visible = true;
				 T23->Text = System::Convert::ToString(aa[22]);
			 }
			 if (ij > 23 && aa[23] != 0)
			 {
				 T24->Visible = true;
				 T24->Text = System::Convert::ToString(aa[23]);
			 }
			 if (ij > 24 && aa[24] != 0)
			 {
				 T25->Visible = true;
				 T25->Text = System::Convert::ToString(aa[24]);

			 }
			 if (ij > 25 && aa[25] != 0)
			 {
				 T26->Visible = true;
				 T26->Text = System::Convert::ToString(aa[25]);
			 }
			 if (ij > 26 && aa[26] != 0)
			 {
				 T27->Visible = true;
				 T27->Text = System::Convert::ToString(aa[26]);
			 }
			 if (ij > 27 && aa[27] != 0)
			 {
				 T28->Visible = true;
				 T28->Text = System::Convert::ToString(aa[27]);
			 }
			 if (ij > 28 && aa[28] != 0)
			 {
				 T29->Visible = true;
				 T29->Text = System::Convert::ToString(aa[28]);

			 }
			 if (ij > 29 && aa[29] != 0)
			 {
				 T30->Visible = true;
				 T30->Text = System::Convert::ToString(aa[29]);
			 }
			 if (ij > 30 && aa[30] != 0)
			 {
				 T31->Visible = true;
				 T31->Text = System::Convert::ToString(aa[30]);
			 }


}
private: System::Void printtree_Click(System::Object^  sender, System::EventArgs^  e) {

			 ii = 0;
			 store(root,arr,&ii);
			 textBox1->Clear();
			 textBox2->Clear();
			 textBox3->Clear();
			 for (int i = 0; i < ii; i++)
			 {
				 textBox1->Text = textBox1->Text + System::Convert::ToString(arr[i]->data) + ",";
			 }
			 ii = 0;
			 store1(root, arr, &ii);
			 for (int i = 0; i < ii; i++)
			 {
				 textBox2->Text = textBox2->Text + System::Convert::ToString(arr[i]->data) + ",";
			 }
			 ii = 0;
			 store2(root, arr, &ii);
			 for (int i = 0; i < ii; i++)
			 {
				 textBox3->Text = textBox3->Text + System::Convert::ToString(arr[i]->data) + ",";
			 }
}
private: System::Void data_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
