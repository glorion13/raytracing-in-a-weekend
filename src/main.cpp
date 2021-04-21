#include <iostream>

#include "vec3.h"

int main()
{

    // Image

    const int image_width = 256;
    const int image_height = 256;

    // Render

    std::cout << "P3\n"
              << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height - 1; j >= 0; --j)
    {
        std::cerr << "Progress (scanlines remaining): " << j << '\n';
        for (int i = 0; i < image_width; ++i)
        {
            // Calculate value based on image position
            float r = float(i) / (image_width - 1);
            float g = float(j) / (image_height - 1);
            float b = 0.25;

            // Convert value to a colour between 0-256
            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::cerr
        << "Render complete." << '\n';
}