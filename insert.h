#ifndef INSERT_H
#define INSERT_H

#include <string>

using namespace std;

class Insert {
    private:
        int dId;
        string docName;
    public:
        Insert(int dId, string docName);

        int getdocId() const;
        string getName() const;
        void setName(string docName);

};

#endif