// g++ main.cpp -o main
/*
The const char* returned by the c_str() method of a std::string points to a buffer owned by the std::string and only remains valid until the next call to a mutating method of the std::string. If you want to retain the contents of this buffer, you need to copy its contents somewhere else.
*/
#include <cstring>
#include <iostream>
#include <memory>
#include <vector>

typedef const char* const* ENUM_LABELS;

static const char* static_choices[] = {0};
//   Knob* knob = Enumeration_knob(f, &_chosenModel, static_choices, "models", "Models");

int main()
{
    std::cout << "array" << std::endl;
    std::vector<const char*> array;
    array.push_back("");
    array.push_back("");
    array.push_back("");
    for (const auto& element : array) {
        std::cout << &element << "='" << element << "'" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "array2" << std::endl;
    std::vector<const char**> array2;
    array2.push_back(static_choices);
    array2.push_back(static_choices);
    array2.push_back(static_choices);
    for (const auto& element : array2) {
        std::cout << &element << " = " << element << " -> " << static_cast<bool>(*element) << std::endl;
    }
    std::cout << std::endl;

    std::cout << "array3" << std::endl;
    std::vector<std::unique_ptr<const char*>> array3;
    std::unique_ptr<const char*> data;
    array3.push_back(std::move(data));
    array3.push_back(std::move(std::unique_ptr<const char*>()));
    array3.push_back(std::move(std::unique_ptr<const char*>()));
    for (const auto& element : array3) {
        std::cout << &element << "'" << element.get() << "'" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "end" << std::endl;
    return 0;
}
