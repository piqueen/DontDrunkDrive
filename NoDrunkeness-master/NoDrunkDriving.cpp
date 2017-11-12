#include <iostream>
#include <string>
using namespace std;

// Account class for registering a user to the app, and a nested Friend class as emergancy contact
class Account{
private:
    class Friend{
    public:
      Friend() : Friend("blanken blank",1111111111) {}
      Friend(string n2, int p2) : name(n2),phone(p2) {}
      string name;
      int phone;
    };
public:
  Account() : Account("null@Example.com","Joe Smith",1111111111,"11-111 null st. NY, 11111") {}
  Account(string e, string n, int p, string a): email(e),name(n),phone(p),address(a) {}
  Account(string e, string n, int p, string a, string n2, int p2): email(e),name(n),phone(p),address(a),fcontact(n2,p2) {}

  string email;
  string name;
  int phone;
  string address;

  Friend fcontact;
}user0,user1;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main () {
// Menu Screen
  cout << "***********************************************************************************************************************\n";
  cout << "\t\t\t\t\t\tHello! Welcome to...\n";
  cout << "\t\t\t\t\t\t  No Drunk Driving!\n\n";

  cout << "\t\t\tThis app was created to make both you and the world a safer place.\n";
  cout << "\t\tWhenever you feel like having a sip, just enable this app and begin your binge (responsibly)!\n";
  cout << "\t\tAnd whenever you're done drinking, just let us know and perform a simple breath test\n\n";

  cout << "\t\t\t\t\tThank you for your responsibility!\n\n";

  cout << "\t1.Create an Account ->\n";
  cout << "\t1.Sign in without an Account ->\n";

  int choice;
  switch(choice){
    case 1:
  system ("PAUSE");
  system("CLS");
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// User Info
char input;
  cout << "-Fill out the Form Below-\n\n";
do{
  cout << "Name (First and Last): ";
  cin >> user1.name;
  cout << "Email (null@null.com): ";
  cin >> user1.email;
  cout << "Phone Number (Please no spaces or other characters please. ex: 1111111111): ";
  cin >> user1.phone;
  cout << "Address: ";
  cin >> user1.address;

  cout << "Is all the information above you've inputted correct? (y/n): ";
  cin >> input;
    if (input == 'y'){
      cout << "\nAwesome! Let's continue to your emergancy contact!\n";
      system ("PAUSE");
      system("CLS");}
    } while (input != 'y');
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Contact Info
  input = 'n';
    cout << "Put in your first contact information. We'll contact your friend/relative/other your location when you need a lift home\n\n";
  do{
    cout << "Contact Name: ";
    cin >> user1.fcontact.name;
    cout << "Contact Phone Number: ";
    cin >> user1.fcontact.phone;

    cout << "Is all the information above you've inputted correct? (y/n): ";
    cin >> input;
      if (input == 'y'){
        cout << "\nAwesome! Thanks for signing up!\n";
        system ("PAUSE");
        system("CLS");}
      } while (input != 'y');
      break;
    switch 2:
    break;
  }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Main app
  cout << "So now that you've gotten your account set up, it's time to put it into practice.\n";

/*  do {
    cout << "Are you drinking today? Just type 'yes' in the console whenevery you are.\n";
    cin >> input;
      if (input == "yes")
        cout << "Great! Enjoy yourself and let us know when you're done!";
  } while(input != "yes");

*/
 return 0;
}
