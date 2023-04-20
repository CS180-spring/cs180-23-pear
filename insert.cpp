#include "insert.h"
#include <string>
#include <iostream>


using namespace std;

Insert::Insert(int id, string name){
    this->dId = dId;
    this->docName = docName;
}

int Insert::docId() const{
    return dId;
}

string  Insert::getName() const{
    return docName;
}

void Insert::setName(string docName){
    this->docName = docName;
}