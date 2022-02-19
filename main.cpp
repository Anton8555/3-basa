#include <iostream>
#include <vector>

// command codes
#define commandPrintBase -1
#define commandExit -2
// maximum base size
#define maxSize 20

int main() {
    std::vector<int> base;
    int position = 0;
    int num;

    while( true ) {
        // data input
        std::cout << "Enter number:";
        std::cin >> num;

        // enter analyses

        if( num == commandExit )
            break;
        if( num == commandPrintBase) {
            std::cout << "Element base: ";
            if( base.size() == maxSize )
                for(int i=position; i<base.size(); i++)
                    std::cout << base[i] << " ";
            for(int i=0; i<position; i++)
                std::cout << base[i] << " ";
            std::cout << std::endl;

        } else {
            // other numbers

            if (base.size() < maxSize) {
                base.push_back(num);
            } else {
                if (position == maxSize) position = 0;
                base[position] = num;
            }
            position++;
        }
    }

    return 0;
}
