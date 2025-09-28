#include "stack/stack.h"

int main()
{
    sd::Stack st;

    st.push(5); // Добавить элемент

    std::cout << st.Top() << std::endl; // Разпечатать элемент

    st.pop(); // Удалить элемент

    return 0;
} // g++ src/main.cpp src/stack/stack.cpp -o stack