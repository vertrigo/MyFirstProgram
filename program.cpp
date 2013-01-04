// program.cpp : main project file.

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <gcroot.h>
#include "program.h"
#include "table.h"
#include "Form1.h"
#include <windows.h>

using namespace prog;
using namespace program;


list::~list()
{
    node *temp = Head;
    while (temp != NULL)
    {
       temp=Head->Next;
       delete Head;
       Head=temp;
    }
}

void list::Add(info *in)
{
	node *temp = new node;
	temp->fields = *in;
	temp->Next = NULL;
	if (Head != NULL)
	{
        Tail->Next = temp;
		Tail = temp;
	}else Head=Tail=temp;

}

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
