#include "delete.h"
#include <string>
#include <iostream>


using namespace std;

Delete::Delete(int id, string name){
    this->dId = dId;
    this->docName = docName;
}

int Delete::docId() const{
    return dId;
}

string  Delete::getName() const{
    return docName;
}

void Delete::deleteDoc(string docName){
    
}