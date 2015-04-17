//
//  main.cpp
//  ProjetDeGraphe
//
//  Created by Apple on 15/04/2015.
//  Copyright (c) 2015 Overflow. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout<<"ca marche"<<endl;
    ifstream fileIn ("../Toulouse.csv"); // read
    ofstream fileOut ("../Toulouse1.csv"); // write
    
    string line;
    
    if (fileIn.is_open())
    {
        while (getline(fileIn,line))
        { // read a line from the file
            cout<<line << endl;
        }
        
        fileOut << line << '\n'; // write a line in the file
        fileIn.close();
        fileOut.close();
    } else {
     
        cout << "Erreur traitement fichier ! ";
    }
    return 0;
    
}
