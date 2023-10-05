#include <iostream>
#include <map>

using namespace std;

map<string, map<string, string> > dataAkun;

// Hash Function here
int hashFunction(string password)
{
  int hashValue = 0;
  
  for (char c : password) {
    hashValue += static_cast<int>(c);
  }
  return hashValue % 100;
}

void registerAkun()
{
  string username, password, fullname;
  cout << "Input Username: " << endl;
  cin >> username;
  cout << "Input Password: " << endl;
  cin >> password;
  cout << "Input Nama Lengkap: " << endl;
  cin >> fullname;

  string hash_key = to_string(hashFunction(password));

  map<string, string> dataDetail;
  dataDetail["username"] = username;
  dataDetail["fullname"] = fullname;

  // masukkan ke map
  dataAkun[hash_key] = dataDetail;
}

void loginAkun()
{
  string username, password;
  cout << "Input Username: " << endl;
  cin >> username;
  cout << "Input Password: " << endl;
  cin >> password;

  string hash_key = to_string(hashFunction(password));

  cout << endl;
  if (dataAkun.find(hash_key) != dataAkun.end())
  {
    cout << "Login Successful!" << endl
         << endl;
    cout << "==== Account Details ====" << endl;
    cout << "Username: " << dataAkun[hash_key]["username"] << endl;
    cout << "Fullname: " << dataAkun[hash_key]["username"] << endl;
  } else {
    cout << "Failed!" << endl
         << endl;
  }
}

void printAkun()
{
  cout << endl;
  for (auto i = dataAkun.begin(); i != dataAkun.end(); i++)
  {
    cout << "Key: " << i->first << "\t"
         << " Username: " << i->second["username"] << " Fullname: " << i->second["fullname"] << endl;
  }
}

// Menu
void menu()
{
  while (true)
  {
    int input_user;

    cout << endl;
    cout << "==== MENU ====" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl;

    cout << endl;
    cout << "Choose Menu: " << endl;
    cin >> input_user;

    if (input_user == 1)
    {
      registerAkun();
    }
    else if (input_user == 2)
    {
      loginAkun();
    }
    else if (input_user == 3)
    {
      printAkun();
      break;
    }
    else
    {
      cout << "Invalid!" << endl;
    }
  }
}

int main()
{
  menu();
}