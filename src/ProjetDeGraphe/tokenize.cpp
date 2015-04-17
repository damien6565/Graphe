//
//  tokenize.cpp
//  ProjetDeGraphe
//
//  Created by Apple on 15/04/2015.
//  Copyright (c) 2015 Overflow. All rights reserved.
//


/* Fichier qui permet de tokenizer une chaine de caracteres pour les fichies csv */

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

void tokenize(const string& str, vector<string>& tokens, const string& delim = ",") {
    
    // Skip delimiters at beginning.
    string::size_type lastPos = str.find_first_not_of(delim, 0);
    
    // Find first "non-delimiter".
    string::size_type pos = str.find_first_of(delim, lastPos);
   
    while (string::npos != pos || string::npos != lastPos) {
        
        // Found a token, add it to the vector.
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        
        // Skip delimiters.
        lastPos = str.find_first_not_of(delim, pos);
        
        // Find next "non-delimiter".
        pos = str.find_first_of(delim, lastPos);
    }
}