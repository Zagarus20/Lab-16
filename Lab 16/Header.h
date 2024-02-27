#include <string>
using namespace std;
struct NOTE
{
    string Name;
    string Mobile;
    string Address;
};
void writeDataToFile(const NOTE& record, const string& Name);
void displayInfoByMobile(const string& Mobile, const string& Name);
void displayAllRecords(const string& Name);

