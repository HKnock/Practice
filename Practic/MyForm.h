#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <vector>
#include "Vector.h"
#include <fstream>
#include <iostream>
#include <cstdio>
#include <ctime>
#include <thread>
#include <algorithm>
using namespace std;

namespace Practic {

	vector<char> v1, v2;
	char* ch1 = new char[50];
	char* ch2 = new char[50];
	char* ch3 = new char[50];
	char* ch4 = new char[50];
	char* ch7 = new char[100];
	ofstream fout;
	ifstream fin;

	void insVector(vector<char>& v, vector<char>& v1) {
		char* ch5 = new char[50];
		char* ch6 = new char[50];
		fin.open("pssi.txt");
		for (int i = 0, j = 0, count = 0; i < 100; i++) {
			if (i % 2 != 0) { 
				fin.get(ch5[j]); 
				v.push_back(ch5[j]);
				ch7[i] = ch5[j];
				j++;
			}
			if (i % 2 == 0) {
				fin.get(ch6[count]);
				v1.push_back(ch6[count]);
				ch7[i] = ch6[count];
				count++;
			}
		}
		for (int i = 0; i < 50; i++) {
			ch1[i] = ch5[i];
			ch2[i] = ch6[i];
			if (i == 49) { 
				ch1[i + 1] = '\0'; 
				ch2[i + 1] = '\0';
			}
			for (int i = 0; i < 100; i++) {
				if (i == 99) {
					ch7[i + 1] = '\0';
				}
		}
		}
		delete[] ch5;
		delete[] ch6;
		fin.close();
	}

	void sortV1(vector<char>& v) {
		sort(v.begin(), v.end());
		for (int i = 0; i < 50; i++) {
			ch3[i] = v[i];
			if (i == 49) ch3[i + 1] = '\0';
		}
	}

	void sortV2(vector<char>& v) {
		sort(v.rbegin(), v.rend());
		for (int i = 0; i < 50; i++) {
			ch4[i] = v[i];
			if (i == 49) ch4[i + 1] = '\0';
		}
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 236);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Орлов Дмитрий";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 250);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата и время запуска: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Заполнить вектор";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(13, 197);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Отсортировать";
			this->button2->UseVisualStyleBackColor = true; 
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// Выполнил Орлов Дмитрий
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Распределённые вектора:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Отсортированные вектора:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Изначальный вектор:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"label10";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(580, 278);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "";
		label4->Text = "";
		label5->Text = "";
		label6->Text = "";
		label10->Text = "";
		struct tm* date;
		char Current_date[100];
		char* ch;
		const time_t timer = time(NULL);
		date = localtime(&timer);
		strftime(Current_date, 100, "%d.%m.%Y %H:%M:%S", date);
		System::String^ strCLR = gcnew System::String(Current_date);
		label2->Text = strCLR;
		////////////////////////////
		srand(time(0));
		fout.open("pssi.txt");
		SetFileAttributes(L"pssi.txt", 128);
		for (int i = 0; i < 100; i++) {
			fout << char(rand() % 26 + 0x61);
		}
		fout.close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		fout.open("pssi.txt");
		SetFileAttributes(L"pssi.txt", 128);
		for (int i = 0; i < 100; i++) {
			fout << char(rand() % 26 + 0x61);
		}
		fout.close();
		insVector(v1, v2);
		System::String^ strl = gcnew System::String(ch1);
		System::String^ strll = gcnew System::String(ch2);
		System::String^ strlllll = gcnew System::String(ch7);
		label3->Text = strl;
		label4->Text = strll;
		label10->Text = strlllll;
		button2->Enabled = true;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	thread th1(sortV1, v1);
	thread th2(sortV2, v2);
	th1.join();
	th2.join();
	System::String^ strlll = gcnew System::String(ch3);
	System::String^ strllll = gcnew System::String(ch4);
	label5->Text = strlll;
	label6->Text = strllll;
}
};
}
