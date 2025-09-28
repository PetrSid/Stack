#pragma once

#ifndef STACK_H_
#define STACK_H_

#include <iostream> // includes

// Пространство имён для структур данных
namespace sd
{
    typedef int _Ty; // типо подготовка шаблона для будущей реализации

    class Stack
    {
        private:
            struct Node // Узел 
            {
                _Ty value;  // Значение
                Node* next; // указатель на следующий узел

                // Конструктор для инициализации узла
                Node(_Ty _val) : value(_val), next(nullptr) {}
            };
            Node* top;  // указатель на следущий элемент

            bool empty();
        public:
            // Конструктор для инициализации стека
            Stack() : top(nullptr) {}

            // Методы Стека

            _Ty Top();

            void push(_Ty val);
            void pop();
    };
}
#endif // STACK_H_