#include "stack.h" 

namespace sd
{
    bool Stack::empty() {return (top == nullptr); }

    _Ty Stack::Top() { return (top->value); }

    void Stack::push(_Ty val)
    {
        Node* new_node = new Node(val);
        new_node->value = val;
        if(top != nullptr) {
            new_node->next = top;
        }
        top = new_node;

        std::cout << "Element add" << std::endl;
    }
    void Stack::pop()
    {
        // Проверка на удаление ничего
        if(!empty())
        {
            Node* temp_top = top; // временое хранилище для верхней ячейки
            top = top->next;      // Получить доступ к следущей ячейки

            delete temp_top;
            std::cout << "Top Element delete" << std::endl;
        }
    }
}