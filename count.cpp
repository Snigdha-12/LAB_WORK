#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    fstream file;
    string filename;
    int word=0;
    char ch[20],c[20];
    filename="data.txt";
    file.open(filename.c_str());

    cout<<"Enter a word to count:";
    gets(c);

    while(file>>ch)
    {
       if(strcmp(ch,c)==0)
       word++;
    }

    cout<<"\nWords="<<word<<"\n";
    file.close(); //closing file

 return 0;
}
