#include <iostream>
#include <fstream>
#include "../rapidjson/writer.h"
#include "../rapidjson/document.h"
#include "../rapidjson/stringbuffer.h"

using namespace rapidjson;

int main() {

    std::ifstream inputFile("../collections/databases/test.json");
    std::string json((std::istreambuf_iterator<char>(inputFile)),
                     std::istreambuf_iterator<char>());
    inputFile.close();

    Document mydoc;
    mydoc.Parse(json.c_str());

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    mydoc.Accept(writer);

    std::cout << buffer.GetString() << std::endl;


  return 0;
}