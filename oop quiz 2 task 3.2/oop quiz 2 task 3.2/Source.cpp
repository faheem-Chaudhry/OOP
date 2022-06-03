#include<iostream>
using namespace std;
template <class T>
class stack
{
    T* arr;
    int topStack;
    int size;
public:
    stack(int);
    void push(T);
    T pop();
    T top();
    bool isEmpty();
    void reSize();
    void formula(string);
};
template <class T>
stack<T>::stack(int sizeOf)
{
    size = sizeOf;
    arr = new T[1000];
    topStack = -1;
}
template <class T>
//push the element in the stack 
void stack<T>::push(T x)
{
    arr[++topStack] = x;
}
template <class T>
T stack<T>::pop()
{
    return arr[topStack--];
}
//it will return the value of top from the stack
template <class T>
T stack<T>::top()
{
    return arr[topStack];
}
//check whether the stack is empty or not
template <class T>
bool stack<T>::isEmpty()
{
    return topStack == -1;
}
template <class T>
//resize the size of array accordingly
void stack<T>::reSize()
{
    if (topStack == size - 1)
    {
        size = size * 2;
    }
    else if (topStack < size / 4)
    {
        size = size / 2;
    }
}
template <class T>
void stack<T>::formula(string s1)
{
    int sizeOf = s1.length();
    string str = "";
    for (int i = 0; i < sizeOf; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90 && s1[i + 1] >= 65 && s1[i + 1] <= 90)
        {
            str = s1[i];
            push(str);
            str = "";
        }
        else if (s1[i] >= 65 && s1[i] <= 90 && s1[i + 1] >= 97 && s1[i + 1] <= 122 && !(s1[i + 2] >= 49 && s1[i + 2] <= 57))
        {
            str += s1[i];
            str += s1[i + 1];
            push(str);
            str = "";
        }
        else if (s1[i] >= 65 && s1[i] <= 90 && s1[i + 1] >= 97 && s1[i + 1] <= 122 && i == (sizeOf - 1))
        {
            str += s1[i];
            str += s1[i + 1];
            push(str);
            str = "";
        }
        else if (s1[i] >= 65 && s1[i] <= 90 && i == (sizeOf - 1))
        {
            str = s1[i];
            push(str);
            str = "";
        }
        else if (s1[i] >= 65 && s1[i] <= 90 && s1[i + 1] >= 49 && s1[i + 1] <= 57)
        {
            int dec = (s1[i + 1]) - 48;
            for (int j = 0; j < dec; j++)
            {
                str = s1[i];
                push(str);
            }
            str = "";
        }
        else if (s1[i] >= 65 && s1[i] <= 90 && s1[i + 1] >= 97 && s1[i + 1] <= 122 && s1[i + 2] >= 49 && s1[i + 2] <= 57)
        {
            int dec = (s1[i + 2]) - 48;
            str += s1[i];
            str += s1[i + 1];
            for (int j = 0; j < dec; j++)
            {
              //  str += s1[i];
               // str += s1[i + 1];
                push(str);
             //   str = "";
            }
            str = "";
        }
    }
 //   char s2[size];
    for (int i = 0; i <= topStack; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    string s1;
    cout << "Enter the Formula: ";
    cin >> s1;
    stack<string> s(s1.length());
    s.formula(s1);
}