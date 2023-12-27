#include <iostream>
#include <fstream>

void createImageFile(int height, int width);

int main(){
    createImageFile(256, 256);
}



void createImageFile(int height, int width){
    //Create a ppm image file
    std::ofstream outputFile;
    outputFile.open("output.ppm");


    outputFile << "P3\n";
    outputFile << width << " " << height << "\n"; // COLUMNS ROWS
    outputFile << "255\n"; // colors
    for (int y = 0; y < height; y++){
        for (int x = 0; x < width; x++){
            outputFile << 255 - x << " " << 255 - x << " " << 255 - x << "\n";
        }
    }
    outputFile.close();
}