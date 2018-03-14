#include <iostream>
#include "VolImage.h"
#include <vector>
#include <fstream>
//#include <boost/algorithm/string/split.hpp>
//#include <boost/algorithm/string/classification.hpp>
using namespace std;

int main(){

   //read in MRI.data file and see the size specifications
   ifstream file;
   file.open("../brain_mri_raws/MRI.data");
   string width, height, imageno;
   file >> width >> height >> imageno;
   
   //constructor
   VolImage vi(width,height);
   //string tr = to_string(vi.getHeight());
   //cout << tr;
   
   return 0;
}