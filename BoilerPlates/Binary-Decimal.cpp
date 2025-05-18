#include <iostream>
#include <bitset>
#include <string>

int main() {
    std::string binaryStr = "1011"; // binary for 11
    std::bitset<8> bits(binaryStr); // 8 bits, you can adjust the size
    unsigned long decimal = bits.to_ulong(); // Convert to decimal

    std::cout << "Binary: " << binaryStr << "\nDecimal: " << decimal << std::endl;
    

    int decimal = 11;
    std::bitset<8> bits(decimal); // Use 8 bits; change as needed

    std::cout << "Decimal: " << decimal << "\nBinary: " << bits.to_string() << std::endl;
    return 0;
}

