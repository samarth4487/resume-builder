// Author: SAMARTH PABOOWAL
// Date Of Creation: 8th January 2015
// A software to generate RESUME in a printable form.


// Including necessary header files
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<conio.h>
#include<process.h>
#include<cstring>
#include<ctime>
#include<dos.h>
using namespace std;

// Starting of main program
int main()
{
    // Declaring variables
    char temp[300], file_name[100], *ext = ".html";
    char name[100], ch;
    int num, len, line, y;

    // Asking the user to enter the name of the output file
    cout<<"Enter the name of your file: ";
    gets(temp);

    strcpy(file_name, temp);
    strcat(file_name, ext);

    ofstream fout(file_name);

    if(!fout)
    {
        cout<<"Error in creation of file. Try again later!"<<endl;
        exit(1);
    }

    fout<<"<HTML>";
    fout<<"<HEAD>";
    fout<<" <H1><CENTER><B><U>CURRICULAM VITAE</U></B></CENTER></H1>";
    fout<<"</HEAD>";
    fout<<"<BODY>";

    cout<<"Enter your name: ";
    gets(temp);
    strcpy(name, temp);
    fout<<"<BR><H2>"<<name<<"<BR>";

    cout<<"Enter your address: ";
    gets(temp);
    len = strlen(temp);

    // Splitting the address into lines
    // As third white space is encountered line is changed
    // so as to maintain the format of the resume

    num = 0;
    for(int i = 0; i < len; i++)
    {
        ch = temp[i];
        if(ch == ' ')
        {
            num++;
            if(num == 3)
            {
                fout<<"<BR>";
                num = 0;
            }
            fout<<ch;
        }
        fout<<ch;
    }

    cout<<"Enter your contact number: ";
    gets(temp);
    fout<<"<BR>Contact: "<<temp<<"<BR>";

    cout<<"Enter your e-mail id: ";
    gets(temp);
    fout<<"E-mail: "<<temp<<"<HR><BR><BR>";

    cout<<"Enter your objective: ";
    fout<<"Objective: ";
    gets(temp);
    len = strlen(temp);

    // Splitting the objective into lines
    // As fifteen white spaces are encountered line is changed
    // so as to maintain the format of the resume

    num = 0;
    for(int i = 0; i < len; i++)
    {
        ch = temp[i];
        if(ch == ' ')
        {
            num++;
            if(num == 15)
            {
                fout<<"<BR>";
                num = 0;
            }
            fout<<ch;
        }
        fout<<ch;
    }

    cout<<"Enter your academic details: "<<endl;
    fout<<"<BR><BR>Academic Details:<BR>";
    line = 1;
    do
    {
        fout<<"<BR>&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;"<<line<<") ";
        gets(temp);
        num = 0;
        len = strlen(temp);

        // Splitting the academic details into lines
        // As twelve white spaces are encountered line is changed
        // so as to maintain the format of the resume

        for(int i = 0; i < len; i++)
        {
            ch = temp[i];
            if(ch == ' ')
            {
                num++;
                if(num == 12)
                {
                    fout<<"<BR>";
                    num = 0;
                }
                fout<<ch;
            }
            fout<<ch;
        }
        cout<<"To move to next section press '*' else continue entering academic details: ";
        cin>>ch;
        line++;
    }
    while(ch != '*');

    cout<<"Enter your technical skills: "<<endl;
    fout<<"<BR><BR>Technical Skills:<BR>";
    line = 1;
    gets(temp);
    do
    {
        fout<<"<BR>&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;"<<line<<") ";
        gets(temp);
        num = 0;
        len = strlen(temp);

        // Splitting the technical skills into lines
        // As twelve white spaces are encountered line is changed
        // so as to maintain the format of the resume

        for(int i = 0; i < len; i++)
        {
            ch = temp[i];
            if(ch == ' ')
            {
                num++;
                if(num == 12)
                {
                    fout<<"<BR>";
                    num = 0;
                }
                fout<<ch;
            }
            fout<<ch;
        }
        cout<<"To move to next section press '*' else continue entering technical skills: ";
        cin>>ch;
        line++;
    }
    while(ch != '*');

    cout<<"Enter your experience: "<<endl;
    fout<<"<BR><BR>Experience:<BR>";
    line = 1;
    gets(temp);
    do
    {
        fout<<"<BR>&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;"<<line<<") ";
        gets(temp);
        num = 0;
        len = strlen(temp);

        // Splitting the experience into lines
        // As twelve white spaces are encountered line is changed
        // so as to maintain the format of the resume

        for(int i = 0; i < len; i++)
        {
            ch = temp[i];
            if(ch == ' ')
            {
                num++;
                if(num == 12)
                {
                    fout<<"<BR>";
                    num = 0;
                }
                fout<<ch;
            }
            fout<<ch;
        }
        cout<<"To move to next section press '*' else continue entering your experience: ";
        cin>>ch;
        line++;
    }
    while(ch != '*');

    cout<<"Enter your project details "<<endl;
    fout<<"<BR><BR>Projects:<BR>";
    line = 1;
    gets(temp);
    do
    {
        fout<<"<BR>&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;"<<line<<") ";
        gets(temp);
        num = 0;
        len = strlen(temp);

        // Splitting the project details into lines
        // As twelve white spaces are encountered line is changed
        // so as to maintain the format of the resume

        for(int i = 0; i < len; i++)
        {
            ch = temp[i];
            if(ch == ' ')
            {
                num++;
                if(num == 12)
                {
                    fout<<"<BR>";
                    num = 0;
                }
                fout<<ch;
            }
            fout<<ch;
        }
        cout<<"To move to next section press '*' else continue entering project details: ";
        cin>>ch;
        line++;
    }
    while(ch != '*');

    cout<<"Enter your hobbies: "<<endl;
    fout<<"<BR><BR>Hobbies:<BR>";
    line = 1;
    gets(temp);
    do
    {
        fout<<"<BR>&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;"<<line<<") ";
        gets(temp);
        num = 0;
        len = strlen(temp);

        // Splitting the hobbies into lines
        // As twelve white spaces are encountered line is changed
        // so as to maintain the format of the resume

        for(int i = 0; i < len; i++)
        {
            ch = temp[i];
            if(ch == ' ')
            {
                num++;
                if(num == 1)
                {
                    fout<<"<BR>";
                    num = 0;
                }
                fout<<ch;
            }
            fout<<ch;
        }
        cout<<"To move to next section press '*' else continue entering your hobbies: ";
        cin>>ch;
        line++;
    }
    while(ch != '*');

    cout<<"Enter your personal details: "<<endl;
    fout<<"<BR><BR>Personal Details<BR>";
    gets(temp);

    cout<<"Father's name: ";
    gets(temp);
    fout<<"&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;Father's Name: "<<temp<<"<BR>";

    cout<<"D.O.B: ";
    gets(temp);
    fout<<"&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;Date Of Birth: "<<temp<<"<BR>";

    cout<<"Marital status: ";
    gets(temp);
    fout<<"&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;Marital Status: "<<temp<<"<BR>";

    cout<<"Sex: ";
    gets(temp);
    fout<<"&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;Sex: "<<temp<<"<BR>";

    cout<<"Enter languages known seperated by comma: ";
    gets(temp);
    fout<<"&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;Languages Known: "<<temp<<"<BR>";

    fout<<"<HR>";

    fout<<"Date: ";
    fout<<"<BR>Place: ";
    fout<<"</H2>";

    fout<<"<H2 align = 'right'>("<<name<<")</H2>";
    fout<<"</BODY>";
    fout<<"</HTML>";

    cout<<"Generating ---- 0%"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"Generating ---- 50%"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"----------"<<endl;
    cout<<"Generating ---- 100%"<<endl;
    cout<<"CV Generated!";

    return 0;
}
