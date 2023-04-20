#ifndef DELETE_H
#define DELETE_H

#include <string>

using namespace std;

class Delete {
    private:
        int dId;
        string docName;
    public:
        Delete(int dId, string docName);

        int getdocId() const;
        string getName() const;
        void deleteDoc(string docName);

};

#endif