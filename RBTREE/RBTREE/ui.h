#pragma once
#include"Header1.h"
//#include<iostream>
using namespace std;

RBTree tree;
int aa[100], ii = 0;
int ar[100], ij = 0;
COLOR a[100];
namespace RBTREE {

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
	private: System::Windows::Forms::Label^  label6;
	protected:
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  printtree;
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
	private: System::Windows::Forms::Label^  label3;
	public:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->printtree = (gcnew System::Windows::Forms::Button());
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(704, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 18);
			this->label6->TabIndex = 26;
			this->label6->Text = L"POSTORDER:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(823, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(443, 20);
			this->textBox3->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(704, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 18);
			this->label5->TabIndex = 24;
			this->label5->Text = L"PREORDER:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(823, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(443, 20);
			this->textBox2->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(704, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 18);
			this->label4->TabIndex = 22;
			this->label4->Text = L"INORDER:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(823, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(443, 20);
			this->textBox1->TabIndex = 21;
			// 
			// printtree
			// 
			this->printtree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->printtree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->printtree->ForeColor = System::Drawing::Color::Red;
			this->printtree->Location = System::Drawing::Point(552, 64);
			this->printtree->Name = L"printtree";
			this->printtree->Size = System::Drawing::Size(108, 31);
			this->printtree->TabIndex = 19;
			this->printtree->Text = L"TRAVERSE";
			this->printtree->UseVisualStyleBackColor = false;
			this->printtree->Click += gcnew System::EventHandler(this, &ui::printtree_Click);
			// 
			// insert
			// 
			this->insert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->insert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert->ForeColor = System::Drawing::Color::Red;
			this->insert->Location = System::Drawing::Point(282, 64);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(108, 31);
			this->insert->TabIndex = 18;
			this->insert->Text = L"INSERT";
			this->insert->UseVisualStyleBackColor = false;
			this->insert->Click += gcnew System::EventHandler(this, &ui::insert_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(247, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 18);
			this->label2->TabIndex = 16;
			this->label2->Text = L"ENTER THE DATA :";
			// 
			// data
			// 
			this->data->Location = System::Drawing::Point(428, 18);
			this->data->Name = L"data";
			this->data->Size = System::Drawing::Size(262, 20);
			this->data->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(362, 145);
			this->label1->TabIndex = 14;
			this->label1->Text = L"SIMULATION OF \r\n\r\n          RED\r\n                       BLACK\r\n                  "
				L"                      TREE";
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
			this->T23->Location = System::Drawing::Point(669, 487);
			this->T23->Name = L"T23";
			this->T23->Size = System::Drawing::Size(41, 38);
			this->T23->TabIndex = 149;
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
			this->T25->Location = System::Drawing::Point(811, 487);
			this->T25->Name = L"T25";
			this->T25->Size = System::Drawing::Size(41, 38);
			this->T25->TabIndex = 148;
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
			this->T26->Location = System::Drawing::Point(871, 487);
			this->T26->Name = L"T26";
			this->T26->Size = System::Drawing::Size(41, 38);
			this->T26->TabIndex = 147;
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
			this->T27->Location = System::Drawing::Point(941, 487);
			this->T27->Name = L"T27";
			this->T27->Size = System::Drawing::Size(41, 38);
			this->T27->TabIndex = 146;
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
			this->T28->Location = System::Drawing::Point(989, 487);
			this->T28->Name = L"T28";
			this->T28->Size = System::Drawing::Size(41, 38);
			this->T28->TabIndex = 145;
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
			this->T29->Location = System::Drawing::Point(1065, 487);
			this->T29->Name = L"T29";
			this->T29->Size = System::Drawing::Size(41, 38);
			this->T29->TabIndex = 144;
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
			this->T30->Location = System::Drawing::Point(1113, 487);
			this->T30->Name = L"T30";
			this->T30->Size = System::Drawing::Size(41, 38);
			this->T30->TabIndex = 143;
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
			this->T31->Location = System::Drawing::Point(1178, 487);
			this->T31->Name = L"T31";
			this->T31->Size = System::Drawing::Size(41, 38);
			this->T31->TabIndex = 142;
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
			this->T8->Location = System::Drawing::Point(211, 418);
			this->T8->Name = L"T8";
			this->T8->Size = System::Drawing::Size(41, 38);
			this->T8->TabIndex = 141;
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
			this->T9->Location = System::Drawing::Point(351, 418);
			this->T9->Name = L"T9";
			this->T9->Size = System::Drawing::Size(41, 38);
			this->T9->TabIndex = 140;
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
			this->T10->Location = System::Drawing::Point(499, 418);
			this->T10->Name = L"T10";
			this->T10->Size = System::Drawing::Size(41, 38);
			this->T10->TabIndex = 139;
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
			this->T11->Location = System::Drawing::Point(636, 418);
			this->T11->Name = L"T11";
			this->T11->Size = System::Drawing::Size(41, 38);
			this->T11->TabIndex = 138;
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
			this->T12->Location = System::Drawing::Point(772, 418);
			this->T12->Name = L"T12";
			this->T12->Size = System::Drawing::Size(41, 38);
			this->T12->TabIndex = 137;
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
			this->T13->Location = System::Drawing::Point(909, 418);
			this->T13->Name = L"T13";
			this->T13->Size = System::Drawing::Size(41, 38);
			this->T13->TabIndex = 136;
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
			this->T14->Location = System::Drawing::Point(1029, 418);
			this->T14->Name = L"T14";
			this->T14->Size = System::Drawing::Size(41, 38);
			this->T14->TabIndex = 135;
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
			this->T15->Location = System::Drawing::Point(1152, 418);
			this->T15->Name = L"T15";
			this->T15->Size = System::Drawing::Size(41, 38);
			this->T15->TabIndex = 134;
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
			this->T16->Location = System::Drawing::Point(164, 487);
			this->T16->Name = L"T16";
			this->T16->Size = System::Drawing::Size(41, 38);
			this->T16->TabIndex = 133;
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
			this->T17->Location = System::Drawing::Point(258, 487);
			this->T17->Name = L"T17";
			this->T17->Size = System::Drawing::Size(41, 38);
			this->T17->TabIndex = 132;
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
			this->T18->Location = System::Drawing::Point(306, 487);
			this->T18->Name = L"T18";
			this->T18->Size = System::Drawing::Size(41, 38);
			this->T18->TabIndex = 131;
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
			this->T19->Location = System::Drawing::Point(399, 487);
			this->T19->Name = L"T19";
			this->T19->Size = System::Drawing::Size(41, 38);
			this->T19->TabIndex = 130;
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
			this->T20->Location = System::Drawing::Point(456, 487);
			this->T20->Name = L"T20";
			this->T20->Size = System::Drawing::Size(41, 38);
			this->T20->TabIndex = 129;
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
			this->T21->Location = System::Drawing::Point(540, 487);
			this->T21->Name = L"T21";
			this->T21->Size = System::Drawing::Size(41, 38);
			this->T21->TabIndex = 128;
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
			this->T22->Location = System::Drawing::Point(588, 487);
			this->T22->Name = L"T22";
			this->T22->Size = System::Drawing::Size(41, 38);
			this->T22->TabIndex = 127;
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
			this->T24->Location = System::Drawing::Point(727, 487);
			this->T24->Name = L"T24";
			this->T24->Size = System::Drawing::Size(41, 38);
			this->T24->TabIndex = 126;
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
			this->T4->Location = System::Drawing::Point(285, 337);
			this->T4->Name = L"T4";
			this->T4->Size = System::Drawing::Size(41, 38);
			this->T4->TabIndex = 125;
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
			this->T5->Location = System::Drawing::Point(570, 337);
			this->T5->Name = L"T5";
			this->T5->Size = System::Drawing::Size(41, 38);
			this->T5->TabIndex = 124;
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
			this->T6->Location = System::Drawing::Point(838, 337);
			this->T6->Name = L"T6";
			this->T6->Size = System::Drawing::Size(41, 38);
			this->T6->TabIndex = 123;
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
			this->T7->Location = System::Drawing::Point(1092, 337);
			this->T7->Name = L"T7";
			this->T7->Size = System::Drawing::Size(41, 38);
			this->T7->TabIndex = 122;
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
			this->T2->Location = System::Drawing::Point(435, 258);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(41, 38);
			this->T2->TabIndex = 121;
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
			this->T3->Location = System::Drawing::Point(976, 258);
			this->T3->Name = L"T3";
			this->T3->Size = System::Drawing::Size(41, 38);
			this->T3->TabIndex = 120;
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
			this->T1->Location = System::Drawing::Point(649, 173);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(41, 38);
			this->T1->TabIndex = 119;
			this->T1->Text = L"";
			this->T1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(21, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 19);
			this->label3->TabIndex = 154;
			this->label3->Text = L"LEVEL 1:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(21, 356);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 19);
			this->label7->TabIndex = 153;
			this->label7->Text = L"LEVEL 2 :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(21, 506);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 19);
			this->label8->TabIndex = 152;
			this->label8->Text = L"LEVEL  4:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(21, 437);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 19);
			this->label9->TabIndex = 151;
			this->label9->Text = L"LEVEL 3 :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(21, 192);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 19);
			this->label10->TabIndex = 150;
			this->label10->Text = L"LEVEL 0 :";
			// 
			// ui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1294, 591);
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
			this->Text = L"RBTREE";
			this->Load += gcnew System::EventHandler(this, &ui::ui_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
}
private: System::Void ui_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void insert_Click(System::Object^  sender, System::EventArgs^  e) {
			 int aad = System::Convert::ToInt32(data->Text);
			 tree.insert(aad);
			 ii = 0;
			 COLOR as=RED,bc=BLACK;
			 tree.printLevelOrder(a, aa, &ii);
			 //textBox2->Text = System::Convert::ToString(a[0]) + "," + System::Convert::ToString(a[1]) + ",";
			 data->Clear();
			 T1->Visible = false;
			 T2->Visible = false;
			 T3->Visible = false;
			 T4->Visible = false;
			 T5->Visible = false;
			 T6->Visible = false;
			 T7->Visible = false;
			 T8->Visible = false;
			 T9->Visible = false;
			 T10->Visible = false;
			 T11->Visible = false;
			 T12->Visible = false;
			 T13->Visible = false;
			 T14->Visible = false;
			 T15->Visible = false;
			 T16->Visible = false;
			 T17->Visible = false;
			 T18->Visible = false;
			 T19->Visible = false;
			 T20->Visible = false;
			 T21->Visible = false;
			 T22->Visible = false;
			 T23->Visible = false;
			 T24->Visible = false;
			 T25->Visible = false;
			 T26->Visible = false;
			 T27->Visible = false;
			 T28->Visible = false;
			 T29->Visible = false;
			 T30->Visible = false;
			 T31->Visible = false;
			 if (ii > 0 && aa[0]!=0)
			 { 
				 T1->Visible = true;
				 if (a[0] == RED)
				 {
					 this->T1->ForeColor = Color::Red;
				 }
				 else
				 {
					 this->T1->ForeColor = Color::Black;
				 }
				 T1->Text = System::Convert::ToString(aa[0]);
			 }
			 if (ii > 1 && aa[1] != 0)
			 {
				 T2->Visible = true;
				 if (a[1] == 1)
					 this->T2->ForeColor = Color::Red;
				 else
					 this->T2->ForeColor = Color::Black;
				 T2->Text = System::Convert::ToString(aa[1]);
			 }
			 if (ii > 2 && aa[2] != 0)
			 {
				 T3->Visible = true;
				 if (a[2] == 1)
					 this->T3->ForeColor = Color::Red;
				 else
					 this->T3->ForeColor = Color::Black;
				 T3->Text = System::Convert::ToString(aa[2]);
			 }
			 if (ii > 3 && aa[3] != 0)
			 {
				 T4->Visible = true;
				 if (a[3] == 1)
					 this->T4->ForeColor = Color::Red;
				 else
					 this->T4->ForeColor = Color::Black;
				 T4->Text = System::Convert::ToString(aa[3]);
			 }
			 if (ii > 4 && aa[4] != 0)
			 {
				 T5->Visible = true;
				 if (a[4] == 'R')
					 this->T5->ForeColor = Color::Red;
				 else
					 this->T5->ForeColor = Color::Black;
				 T5->Text = System::Convert::ToString(aa[4]);

			 }
			 if (ii > 5 && aa[5] != 0)
			 {
				 T6->Visible = true;
				 if (a[5] == 'R')
					 this->T6->ForeColor = Color::Red;
				 else
					 this->T6->ForeColor = Color::Black;
				 T6->Text = System::Convert::ToString(aa[5]);
			 }
			 if (ii > 6 && aa[6] != 0)
			 {
				 T7->Visible = true;
				 if (a[6] == 'R')
					 this->T7->ForeColor = Color::Red;
				 else
					 this->T7->ForeColor = Color::Black;
				 T7->Text = System::Convert::ToString(aa[6]);
			 }
			 if (ii > 7 && aa[7] != 0)
			 {
				 T8->Visible = true;
				 if (a[7] == 'R')
					 this->T8->ForeColor = Color::Red;
				 else
					 this->T8->ForeColor = Color::Black;
				 T8->Text = System::Convert::ToString(aa[7]);
			 }
			 if (ii > 8 && aa[8] != 0)
			 {
				 T9->Visible = true;
				 if (a[8] == 'R')
					 this->T9->ForeColor = Color::Red;
				 else
					 this->T9->ForeColor = Color::Black;
				 T9->Text = System::Convert::ToString(aa[8]);

			 }
			 if (ii > 9 && aa[9] != 0)
			 {
				 T10->Visible = true;
				 if (a[9] == 'R')
					 this->T10->ForeColor = Color::Red;
				 else
					 this->T10->ForeColor = Color::Black;
				 T10->Text = System::Convert::ToString(aa[9]);
			 }
			 if (ii > 10 && aa[10] != 0)
			 {
				 T11->Visible = true;
				 if (a[10] == 'R')
					 this->T11->ForeColor = Color::Red;
				 else
					 this->T11->ForeColor = Color::Black;
				 T11->Text = System::Convert::ToString(aa[10]);
			 }
			 if (ii > 11 && aa[11] != 0)
			 {
				 T12->Visible = true;
				 if (a[11] == 'R')
					 this->T12->ForeColor = Color::Red;
				 else
					 this->T12->ForeColor = Color::Black;
				 T12->Text = System::Convert::ToString(aa[11]);
			 }
			 if (ii > 12 && aa[12] != 0)
			 {
				 T13->Visible = true;
				 if (a[12] == 'R')
					 this->T13->ForeColor = Color::Red;
				 else
					 this->T13->ForeColor = Color::Black;
				 T13->Text = System::Convert::ToString(aa[12]);
			 }
			 if (ii > 13 && aa[13] != 0)
			 {
				 T14->Visible = true;
				 if (a[13] == 'R')
					 this->T14->ForeColor = Color::Red;
				 else
					 this->T14->ForeColor = Color::Black;
				 T14->Text = System::Convert::ToString(aa[13]);
			 }
			 if (ii > 14 && aa[14] != 0)
			 {
				 T15->Visible = true;
				 if (a[14] == 'R')
					 this->T15->ForeColor = Color::Red;
				 else
					 this->T15->ForeColor = Color::Black;
				 T15->Text = System::Convert::ToString(aa[14]);
			 }
			 if (ii > 15 && aa[15] != 0)
			 {
				 T16->Visible = true;
				 if (a[15] == 'R')
					 this->T16->ForeColor = Color::Red;
				 else
					 this->T16->ForeColor = Color::Black;
				 T16->Text = System::Convert::ToString(aa[15]);
			 }
			 if (ii > 16 && aa[16] != 0)
			 {
				 T17->Visible = true;
				 if (a[16] == 'R')
					 this->T17->ForeColor = Color::Red;
				 else
					 this->T17->ForeColor = Color::Black;
				 T17->Text = System::Convert::ToString(aa[16]);
			 }
			 if (ii > 17 && aa[17] != 0)
			 {
				 T18->Visible = true;
				 if (a[17] == 'R')
					 this->T18->ForeColor = Color::Red;
				 else
					 this->T18->ForeColor = Color::Black;
				 T18->Text = System::Convert::ToString(aa[17]);
			 }
			 if (ii > 18 && aa[18] != 0)
			 {
				 T19->Visible = true;
				 if (a[18] == 'R')
					 this->T19->ForeColor = Color::Red;
				 else
					 this->T19->ForeColor = Color::Black;
				 T19->Text = System::Convert::ToString(aa[18]);
			 }

			 if (ii > 19 && aa[19] != 0)
			 {
				 T20->Visible = true;
				 if (a[19] == 'R')
					 this->T20->ForeColor = Color::Red;
				 else
					 this->T20->ForeColor = Color::Black;
				 T20->Text = System::Convert::ToString(aa[19]);
			 }
			 if (ii > 20 && aa[20] != 0)
			 {
				 T21->Visible = true;
				 if (a[20] == 'R')
					 this->T21->ForeColor = Color::Red;
				 else
					 this->T21->ForeColor = Color::Black;
				 T21->Text = System::Convert::ToString(aa[20]);
			 }
			 if (ii > 21 && aa[21] != 0)
			 {
				 T22->Visible = true;
				 if (a[21] == 'R')
					 this->T22->ForeColor = Color::Red;
				 else
					 this->T22->ForeColor = Color::Black;
				 T22->Text = System::Convert::ToString(aa[21]);

			 }
			 if (ii > 22 && aa[22] != 0)
			 {
				 T23->Visible = true;
				 if (a[22] == 'R')
					 this->T23->ForeColor = Color::Red;
				 else
					 this->T23->ForeColor = Color::Black;
				 T23->Text = System::Convert::ToString(aa[22]);
			 }
			 if (ii > 23 && aa[23] != 0)
			 {
				 T24->Visible = true;
				 if (a[23] == 'R')
					 this->T24->ForeColor = Color::Red;
				 else
					 this->T24->ForeColor = Color::Black;
				 T24->Text = System::Convert::ToString(aa[23]);
			 }
			 if (ii > 24 && aa[24] != 0)
			 {
				 T25->Visible = true;
				 if (a[24] == 'R')
					 this->T25->ForeColor = Color::Red;
				 else
					 this->T25->ForeColor = Color::Black;
				 T25->Text = System::Convert::ToString(aa[24]);

			 }
			 if (ii > 25 && aa[25] != 0)
			 {
				 T26->Visible = true;
				 if (a[25] == 'R')
					 this->T26->ForeColor = Color::Red;
				 else
					 this->T26->ForeColor = Color::Black;

				 T26->Text = System::Convert::ToString(aa[25]);
			 }
			 if (ii > 26 && aa[26] != 0)
			 {
				 T27->Visible = true;
				 if (a[26] == 'R')
					 this->T27->ForeColor = Color::Red;
				 else
					 this->T27->ForeColor = Color::Black;
				 T27->Text = System::Convert::ToString(aa[26]);
			 }
			 if (ii > 27 && aa[27] != 0)
			 {
				 T28->Visible = true;
				 if (a[27] == 'R')
					 this->T28->ForeColor = Color::Red;
				 else
					 this->T28->ForeColor = Color::Black;
				 T28->Text = System::Convert::ToString(aa[27]);
			 }
			 if (ii > 28 && aa[28] != 0)
			 {
				 T29->Visible = true;
				 if (a[28] == 'R')
					 this->T29->ForeColor = Color::Red;
				 else
					 this->T29->ForeColor = Color::Black;
				 T29->Text = System::Convert::ToString(aa[28]);

			 }
			 if (ii > 29 && aa[29] != 0)
			 {
				 T30->Visible = true;
				 if (a[29] == 'R')
					 this->T30->ForeColor = Color::Red;
				 else
					 this->T30->ForeColor = Color::Black;
				 T30->Text = System::Convert::ToString(aa[29]);
			 }
			 if (ii > 30 && aa[30] != 0)
			 {
				 T31->Visible = true;
				 if (a[30] == 'R')
					 this->T31->ForeColor = Color::Red;
				 else
					 this->T31->ForeColor = Color::Black;
				 T31->Text = System::Convert::ToString(aa[30]);
			 }
}
private: System::Void printtree_Click(System::Object^  sender, System::EventArgs^  e) {
			 ij = 0;
			 tree.inorder(ar, &ij);
			 textBox1->Clear();
			 textBox2->Clear();
			 textBox3->Clear();
			 for (int i = 0; i < ij; i++)
			 {
				 textBox1->Text = textBox1->Text + System::Convert::ToString(ar[i]) + ",";
			 }
			 ij = 0;
			 tree.preorder(ar, &ij);
			 for (int i = 0; i < ij; i++)
			 {
				 textBox2->Text = textBox2->Text + System::Convert::ToString(ar[i]) + ",";
			 }
			 ij = 0;
			 tree.postorder(ar, &ij);
			 for (int i = 0; i < ij; i++)
			 {
				 textBox3->Text = textBox3->Text + System::Convert::ToString(ar[i]) + ",";
			 }
}
};
}
