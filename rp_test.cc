#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
#include "boost/smart_ptr.hpp"
using namespace rapidjson;

bool move_test(boost::shared_ptr<Document> &test){
  std::cout<<test->get("project").GetString()<<std::endl;
}



int main() {
    // 1. Parse a JSON string into DOM.
    const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
    boost::shared_ptr<Document> d(new Document);
    d->Parse(json);
    move_test(d);
    // 2. Modify it by DOM.
    // Value& s = d["stars"];
    // s.SetInt(s.GetInt() + 1);

    // std::string key="project";
    // std::cout<<d[key.c_str()].GetString()<<std::endl;


    // // 3. Stringify the DOM
    // StringBuffer buffer;
    // Writer<StringBuffer> writer(buffer);
    // d.Accept(writer);

    // // Output {"project":"rapidjson","stars":11}
    // std::cout << buffer.GetString() << std::endl;
    return 0;
}
