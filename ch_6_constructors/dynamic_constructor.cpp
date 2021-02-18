#include <cstring>
#include <iostream>

using namespace std;

class str {
  char *name;
  int length;

 public:
  str() {
    length = 0;
    name = new char[length + 1];
  }

  str(char *s) {
    length = strlen(s);
    name = new char[length + 1];

    strcpy(name, s);
  }

  void display(void) { cout << name << "\n"; }

  void join(str &a, str &b);
};

void str::join(str &a, str &b) {
  this->length = a.length + b.length - 1;
  delete name;
  name = new char[length + 1];

  strcpy(name, a.name);
  strcat(name, b.name);
}

int main() {
  char *first = "Joseph ";
  str name1(first), name2("Louis "), name3("Lagrange "), s1, s2;

  s1.join(name1, name2);
  s2.join(s1, name3);

  name1.display();
  name2.display();
  name3.display();

  s1.display();
  s2.display();

  return 0;
}
