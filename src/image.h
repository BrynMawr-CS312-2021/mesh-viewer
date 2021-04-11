// alinen, 2021
#ifndef image_H_
#define image_H_

#include <iostream>
#include "AGLM.h"

// This is a placeholder class
// Feel free to replace this clas with your own image class
namespace agl
{
    struct Pixel
    {
        unsigned char r;
        unsigned char g;
        unsigned char b;
    };

    class Image
    {
    public:
      
        Image();
        Image(int width, int height);
        Image(const Image& orig);
        Image& operator=(const Image& orig);

        virtual ~Image();

        // load the given filename
        bool load(const std::string& filename);

        // save the given filename
        bool save(const std::string& filename) const;

        // return the current width
        inline int width() const { return myWidth; }

        // return the current height
        inline int height() const { return myHeight; }

        // return the data
        inline unsigned char* data() const { return (unsigned char*) myData; }

        // Get the pixel at index (row, col)
        Pixel get(int row, int col) const;

        // Get the pixel at index (row, col)
        void set(int row, int col, const Pixel& color); 

        // Set a color with components in range [0, 1]
        void set_vec3(int row, int col, const glm::vec3& color);

        // Get a vec3 color 
        glm::vec3 get_vec3(int row, int col) const;

    private:
       void clear();

    private:
        Pixel* myData;
        unsigned int myWidth;
        unsigned int myHeight;
        bool myLoaded;
    };
}

#endif
