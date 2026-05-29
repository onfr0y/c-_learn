#include <iostream>

// using Length = int;
// int main() {
//   Length x{5};
//   std::cout << x << '\n';
//   return 0;
// }

// 13.2 Unscoped enumerations

// using Colour = int;
// constexpr Colour red{0};
// // constexpr Colour green{1};
// constexpr Colour blue{2};
// using Colour = int;
// constexpr Colour red{0};
// constexpr Colour green{1};
// constexpr Colour blue{2};

// Define an unscoped enumeration named Colour
enum Colour {
  red,
  green,
  blue,
};

enum Pet {
  cat,
  dog,
  pig,
  backpack

};

constexpr std::string_view getColourName(Colour colour) {
  switch (colour) {
  case red:
    return "red";
  case green:
    return "green";
  case blue:
    return "blue";
  }
}

constexpr std;:string_view getPetName(Pet pet) {

  swtich(pet pet) {
  case cat:
    return "cat";
  }
}

int main() {

  //   Colour appleColour{red};
  //   Colour shirtColour{green};
  constexpr constexpr Colour shirt{blue};

  std::cout << "Your shirt is " << getColourName(shirt) << '\n';
  return 0;
}