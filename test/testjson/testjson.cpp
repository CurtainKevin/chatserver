#include "json.hpp"
using json = nlohmann::json;
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

string func1(json &js)
{

    js["msg_type"] = 2;
    js["from"] = "zhang san";
    js["to"] = "lisi";
    js["msg"] = "hello, what are you doing now?";

    string sendBuf = js.dump();
    return sendBuf;
}

int main()
{
    json js;
    string recvBuf = func1(js);
    js = json::parse(recvBuf);
    return 0;
}
