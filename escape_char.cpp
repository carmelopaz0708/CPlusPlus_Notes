/*
  ESCAPE CHARACTERS
    Remember to use escape characters instead of the standard library. Escape characters are easier to type and debug. The following escape characters perform the specific
  function listed below.

  \n - newline                    \t - horizontal tab                               \' - ignores next single quotation mark
  \r - carriage return            \v - vertical tab                                 \" - ignores the next double quotation mark
  \b - backspace                  \a - alarm (must be hardware enabled)             \? - ignores the next question mark

@auth siege
@init 03/07/19
*/

#include <iostream>
void warning();
void prompt();
void encrypt();
bool auth(std::string, std::string);
void exit();
void access();
void lockdown();

int main() {
  warning();
  prompt();
}

void warning() {
  char init;
  bool ack;
  std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n";
  std::cout << "\t\t\t\t\t\t\tRESTRICTED ACCESS\n";
  std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n";
  std::cout << "WARNING! FLAG REQUEST TO SERVER INITIATED. SCREENCAPTURE INITIATED.GATEWAY LOCKED, AWAITING KEYPASS. ENCRYPTION PROTOCOL SUCCESSFUL. \n\n";
  std::cout << "Warning. This area requires LEVEL 10 GOVERNMENT CLEARANCE. Unauthorized access, use, copy and modification of this data without neccesary clearance\n";
  std::cout << "is punishable under federal law under the Republic Act 5934 (The Act of Terrorism Law). Violation of stated policies automatically grants violator \n";
  std::cout << "enemy of the state status, of which the law will do everything in its power and jurisdiction to detain you. Perpetrator will be sentenced to life i\n";
  std::cout << "n prison without possibility of parole.\n";
  std::cout << "Secure software protocol has been implemented to this and all other gateway stations. This session is now online. Your keystrokes, network address,\n";
  std::cout << "host address, mac address, pc name and probable address via preprogrammed triangulation algorithm was obtained and sent directly to administrator d\n";
  std::cout << "atabase for review.";
}

void prompt() {
  char ack;
  std::cout << "Do you wish to continue(y/n)? _\b";
  std::cin >> ack;
  std::cin.get();
  if (ack == 'y') {
    encrypt();
  }
  else if (ack == 'n') {
    exit();
  }
}

void encrypt() {
  std::string rootid, keypass;
  bool flag;
  std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n";
  std::cout << "ROOT ID:__________\b\b\b\b\b\b\b\b\b\b";
  getline(std::cin, rootid);
  std::cout << "KEYPASS:_____\b\b\b\b\b";
  getline(std::cin, keypass);
  std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n";
  flag = auth(rootid, keypass);
  if (flag == true) {
    access();
  }
  else {
    // Go to lockdown
    lockdown();
  }
}

bool auth(std::string auth1, std::string auth2) {
  bool flag;
  std::string key1 = "CXETV57B1I";
  std::string key2 = "UIE4T";
  if (auth1 == key1 && auth2 == key2) {
    flag = true;
    return flag;
  }
  else {
    flag = false;
    return flag;
  }
}

void exit() {
  std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n";
  std::cout << "EXIT PROMPT INITIATED. REMOTE ACCESS TERMINATED. SECURE SHELL TERMINATED. SESSION SUCCESFULLY EXPIRED...\n";
  std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n";
}

void access() {
  std::cout << "VERIFIED. VAULT UNLOCKED. SECURE SHELL ONLINE.";
  std::cout << "\n\nGood day Engr. Carmelo Paz!";
  std::cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------\n";
}

void lockdown() {
  std::cout << "AUTHENTICATION ERROR! WRONG USERNAME OR PASSWORD! ACCESS DENIED!\n";
  std::cout << "LOCKDOWN PROTOCOL INITIATED. REMOTE REVIEW CREDENTIALS DELIVERED TO ADMINISTRATOR FOR REVIEW. SESSION EXPIRED.\n";
  std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------\n";
}
