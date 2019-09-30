include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
int nooflines()
{
               ifstream fin("STORY.TXT");
               int number=-1;
               char line[50];
               while(!fin.eof())
               {
                              fin.getline(line,50,'.');
                              for(int i=0;i<50;i++)
                              {
                              if((line[i]!='a'&&line[i]!='A')&&(line[i-1]=='\r'))
                              number++;
                              }
               }
               cout<<"\nNumber of lines="<<" "<<number;
}
void main()
{
               clrscr();
               ofstream fout;
               char str[500];
               fout.open("STORY.TXT");
               cout<<"\nEnter a string\n";
               gets(str);
               fout<<str<<"\n";
               fout.close();
               nooflines();
               getch();
}
