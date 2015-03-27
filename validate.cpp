#include <string>
#include <boost/regex.hpp>

bool validate_email(const std::string& a)
{
   static const boost::regex e("^[_a-z0-9-]+(\\.[_a-z0-9-]+)*@[a-z0-9-]+(\\.[a-z0-9-]+)*(\\.[a-z]{2,4})$");
   return boost::regex_match(a, e);
}

#include <iostream>
using namespace std;

int main()
{
   string a[2] = { "@home.com", "nmartin867@gmail.com"};
   int i;
   for(i = 0; i < 2; ++i)
   {
      cout << "validate_email(\"" << a[i] << "\") returned " << validate_email(a[i]) << endl;
   }
   return 0;
}