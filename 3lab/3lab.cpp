
#include <iostream>
#include <fstream>  
#include <string.h>    
#include <cstring>

using namespace std;

void createFile(char *name, ofstream& fout);
void readeFile(char* name, ifstream& fin);

int main()
{
    setlocale(LC_ALL, "Russian");
    ofstream fout;
    ifstream fin;
    char fileNameF[10], fileNameH[10], answer,userSymbol;
    cout << "Введите название файла f";
    cin >> fileNameF;
    cout << "Введите название файла g";
    cin >> fileNameH;
    cout << "Вы желаете создать файл? y/n";
    cin >> answer;
    if (answer == 'y') {
        createFile(fileNameF, fout);
    }
    else {
        readeFile(fileNameF, fin);
    }
}

void createFile(char* name, ofstream& fout) {
    fout.open(name);
    char read[40];
    cin.getline(read, 40);
    while (!read[0] == '*') {
        fout << read;
        fout << "\n";
        cin.getline(read, 40);
    }
    fout.close();
}


void readeFile(char* name, ifstream& fin) {
    fin.open(name);
    char st[40];
    if (fin.eof())
    {
        fin.clear();
        fin.seekg(0);
    }
    fin.seekg(0);
    while (!fin.eof() {
        fin.getline(st, 40);
        cout << st << endl;
    }
    fin.close();
}

