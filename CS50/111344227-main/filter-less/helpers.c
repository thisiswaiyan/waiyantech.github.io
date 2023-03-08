#include "helpers.h"
#include <math.h>

void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float new = (image[i][j].rgbtRed + image[i][j].rgbtBlue + image[i][j].rgbtGreen) / 3.0;
            image[i][j].rgbtRed = round(new);
            image[i][j].rgbtBlue = round(new);
            image[i][j].rgbtGreen = round(new);
        }
    }
    return;
}

void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int originalRed = image[i][j].rgbtRed;
            int originalGreen = image[i][j].rgbtGreen;
            int originalBlue = image[i][j].rgbtBlue;
            int sepia[3];
            sepia[0] = round((.393 * originalRed) + (.769 * originalGreen) + (.189 * originalBlue));
            sepia[1] = round((.349 * originalRed) + (.686 * originalGreen) + (.168 * originalBlue));
            sepia[2] = round((.272 * originalRed) + (.534 * originalGreen) + (.131 * originalBlue));

            for (int k = 0; k < 3; k++)
            {
                if (sepia[k] > 255)
                {
                    sepia[k] = 255;
                }
                image[i][j].rgbtRed = sepia[0];
                image[i][j].rgbtGreen = sepia[1];
                image[i][j].rgbtBlue = sepia[2];
            }
        }
    }
    return;
}

void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    for (int i = 0; i < height; i++)
    {
        int n = width - 1;
        for (int j = 0, half = width / 2; j < half; j++)
        {
            tmp[i][j] = image[i][j];
            image[i][j] = image[i][n];
            image[i][n] = tmp[i][j];
            n--;
        }
    }
    return;
}

void blur(int height, int width, RGBTRIPLE image[height][width])

{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int totalRed = 0;
            int totalGreen = 0;
            int totalBlue = 0;
            float counter = 0.00;
            for (int r = -1; r < 2; r++)
            {
                for (int c = -1; c < 2; c++)
                {
                    if ((i + r) >= 0 && (j + c) >= 0 && (i + r) < height && (j + c) < width)
                    {
                        totalRed += image[i + r][j + c].rgbtRed;
                        totalGreen += image[i + r][j + c].rgbtGreen;
                        totalBlue += image[i + r][j + c].rgbtBlue;
                        counter++;
                    }
                }
            }
            temp[i][j].rgbtRed = round(totalRed / counter);
            temp[i][j].rgbtGreen = round(totalGreen / counter);
            temp[i][j].rgbtBlue = round(totalBlue / counter);
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}