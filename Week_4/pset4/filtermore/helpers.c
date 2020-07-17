#include "helpers.h"
#include<math.h>
#include<cs50.h>


// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i<height; i++)
    {
        for( int j = 0; j <width; j++)
        {
            RGBTRIPLE RGB = image[i][j];
            int average = round((RGB.rgbtBlue+ RGB.rgbtGreen + RGB.rgbtRed)/3.0);
            image[i][j].rgbtBlue  = image[i][j].rgbtGreen = image[i][j].rgbtRed = average;
        }
    }
}

int cap (int value)
{
    return value > 255 ? 255 : value;

}

void swap( RGBTRIPLE *p1, RGBTRIPLE *p2)
{
    RGBTRIPLE t = *p1;
    *p1 = * p2;
    *p2 = t;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i< height; i++)
    {
    for(int j = 0; j< width/2; j++)
    {
        swap(&image[i][j], &image[i][width - 1 - j]);
    }
    }
    return;
}

bool isvalidpixel(int i, int j, int height, int width)
{
    return i >= 0 && i< height && j >= 0 && j<width;
}

RGBTRIPLE get_blurred_pixel(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    int redValue, blueValue, greenValue;
    redValue = blueValue = greenValue = 0;
    int validpixelcount = 0;
    for(int di = -1; i<=1; i++)
    {
        for(int dj = -1; j<=1; j++)
        {
            int new_i = i+di;
            int new_j = j+dj;
            if(isvalidpixel(new_i,new_j,height,width))
            {
                validpixelcount++;
                redValue += image[new_i][new_j].rgbtRed;
                blueValue += image[new_i][new_j].rgbtBlue;
                greenValue += image[new_i][new_j].rgbtGreen;
            }
        }
    }
    RGBTRIPLE blurred_pixel;
    blurred_pixel.rgbtRed = round((float)redValue/validpixelcount);
    blurred_pixel.rgbtBlue = round((float)blueValue/validpixelcount);
    blurred_pixel.rgbtGreen = round((float)greenValue/validpixelcount);
    return blurred_pixel;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    RGBTRIPLE img_n[height][width];
    for(int i = 0; i< height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            img_n[i][j] = get_blurred_pixel(i, j, height, width, image);
        }
    }

    for(int i = 0; i< height; i++)
        for(int j = 0; j < width; j++)
        image[i][j] = img_n[i][j];

    return;
}

RGBTRIPLE get_edged_pixel(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    int gx[3][3] = {{-1,0,1},{-2,0,2},{-3,0,3}};

    int redvaluex, bluevaluex, greenvaluex, redvaluey, bluevaluey, greenvaluey;
    redvaluex = bluevaluex = greenvaluex = redvaluey = bluevaluey = greenvaluey = 0;
    for(int di = -1; i<=1; i++)
    {
        for(int dj = -1; j<=1; j++)
        {
            if(isvalidpixel(i+di, j+dj, height, width))
            {
            int weightx = gx[di+1][dj+1];
            redvaluex += weightx * image[i+di][j+dj].rgbtRed;
            bluevaluex += weightx * image[i+di][j+dj].rgbtBlue;
            greenvaluex += weightx * image[i+di][j+dj].rgbtGreen;

            int weighty = gx[di+1][dj+1];
            redvaluey += weighty * image[i+di][j+dj].rgbtRed;
            bluevaluey += weighty * image[i+di][j+dj].rgbtBlue;
            greenvaluey += weighty * image[i+di][j+dj].rgbtGreen;
            }
        }
    }
    RGBTRIPLE pixel;
    pixel.rgbtRed = cap(round(sqrt(redvaluex*redvaluex + redvaluey*redvaluey)));
    pixel.rgbtGreen = cap(round(sqrt(greenvaluex*greenvaluex + greenvaluey*greenvaluey)));
    pixel.rgbtRed = cap(round(sqrt(bluevaluex*bluevaluex + bluevaluey*bluevaluey)));

    return pixel;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE img_n[height][width];
    for(int i = 0; i< height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            img_n[i][j] = get_edged_pixel(i, j, height, width, image);
        }
    }
    for(int i = 0; i< height; i++)
        for(int j = 0; j < width; j++)
        image[i][j] = img_n[i][j];
}
