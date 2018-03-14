#include "VolImage.h"
//header declarations

//constructor
VolImage::VolImage(std::string w, std::string h){

   int wi = atoi(w.c_str() );
   int hi = atoi(h.c_str() );
   
   VolImage::width = wi;
   VolImage::height = hi;
}

//destructor
VolImage::~VolImage(){

}

int VolImage::getHeight(){
   
   int h = VolImage::height;
   
   return h;
}

int VolImage::getWidth(){
   
   int w = VolImage::width;
   
   return w;
}