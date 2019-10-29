#include <iostream>

int main(){

    int m_UnlockKey;
    int m_Key;

    //Unlock Key Conditions
    std::cout << "Enter your unlock key: ";
    std::cin >> m_UnlockKey;

    if(m_UnlockKey > 10){
        std::cout << "Out of Bounds";
        return 0;
    }

    else if(m_UnlockKey <= 1){
        std::cout << "Out of Bounds";
        return 0;
    }

    //Enter Key Conditions
    std::cout << "Enter a key: ";
    std::cin >> m_Key;

    if(m_Key > 10){
        std::cout << "Out of Bounds";
        return 0;
    }

    else if(m_Key <= 0){
        std::cout << "Out of Bounds";
        return 0;
    }

    else if(m_Key == m_UnlockKey){
        std::cout << "Unlocked";
    }

    else {
        std::cout << "Not The Right Key";
    }

    return 0;

}