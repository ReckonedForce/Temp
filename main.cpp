#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Variables
    string name;
    int temp, cTemp;

    // Open file to input temp
    ifstream myfile;
    myfile.open("FahrenheitTemperature.txt");

    // Open file to output text
    ofstream outfile;
    outfile.open("CelsiusTemperature.txt");

    // Check if input and output files are open
    if(myfile.is_open() && outfile.is_open()){

        // Loop through the input file
        while (myfile >> name >> temp){
            // Convert the input temp to output
            cTemp = (temp - 32) * (5.0/9.0);
            // Output the new temp with name to the file
            outfile << name << " " << cTemp << endl;
        }
    }
    else{
        // Error message
        cout<<"Invalid file."<<endl;
    }

    // Close open files
    myfile.close();
    outfile.close();

    // Return program success
    return 0;
}
