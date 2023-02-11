#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::vector<unsigned char> image_data;
    image_data.push_back(0x42);
    image_data.push_back(0x4d);
    image_data.push_back(0x36);
    image_data.push_back(0x00);
    image_data.push_back(0x0c);
    image_data.push_back(0x00);
    // ...


    std::ofstream file("image.bmp", std::ios::out | std::ios::binary);
    if (!file.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    file.write(reinterpret_cast<char*>(image_data.data()), image_data.size());

    file.close();
    return 0;
}
