#pragma once
namespace program {
    using namespace prog;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(127, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(190, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(190, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(127, 128);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(191, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(128, 154);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(190, 20);
			this->textBox6->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Имя:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Фамилия:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Группа:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(65, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Год:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Рейтинг:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(65, 157);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Телефон:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 27);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Подтвердить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(127, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 27);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(347, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Всего:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(393, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"0";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(394, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 25);
			this->button3->TabIndex = 16;
			this->button3->Text = L">>";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 292);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Данные";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
static int count = 0;
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
		}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" &&
textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "")
{
				info *getData = new info;

				getData->name = textBox1->Text;
				getData->fam = textBox2->Text;
				getData->group = textBox3->Text;
				try
				{
					getData->year = System::Convert::ToInt32(textBox4->Text);
					getData->rating = System::Convert::ToInt32(textBox5->Text);
				}
				catch(...)
				{
					delete getData;
					MessageBox::Show("Ввод некорректен!","Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				getData->phone = textBox6->Text;

				work->Add(getData);
				delete getData;

				count++;
				label8->Text = System::Convert::ToString(count);
				textBox1->Text = "";
				textBox2->Text = "";
				textBox3->Text = "";
				textBox4->Text = "";
				textBox5->Text = "";
				textBox6->Text = "";

			}else{
				MessageBox::Show("Введены не все поля!","Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			// initialize new form
			if (count != 0)
			{
				table^ InfoTable = gcnew table();
				InfoTable->Show();
			}

		}
};
}