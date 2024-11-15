/**************************************************
Professor: D.Sc. Manuel Eduardo Loaiza Fernandez
Course: Ciencia de la Computacion I
Example: an colored cube rotating  
UCSP - 2024 - II
**************************************************/

#include <iostream>
#include <cmath>
#include <thread>
#include <atomic>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

float A, B, C;

float cubeWidth = 10;
int width = 80, height = 22;

float* zBuffer;
char* buffer;

int backgroundASCIICode = ' ';
int distanceFromCam = 100;
float horizontalOffset;
float K1 = 40;

float incrementSpeed = 0.6;

float x, y, z;
float ooz;
int xp, yp;
int idx;

std::atomic<bool> running{true};

float calculateX(int i, int j, int k) 
{
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
           j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k) 
{
    return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
           j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
           i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) 
{
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateForSurface(float cubeX, float cubeY, float cubeZ, int ch) 
{
    x = calculateX(cubeX, cubeY, cubeZ);
    y = calculateY(cubeX, cubeY, cubeZ);
    z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

    ooz = 1 / z;

    xp = static_cast<int>(width / 2 + horizontalOffset + K1 * ooz * x * 2);
    yp = static_cast<int>(height / 2 + K1 * ooz * y);

    idx = xp + yp * width;
    if (idx >= 0 && idx < width * height) 
    {
        if (ooz > zBuffer[idx]) 
        {
            zBuffer[idx] = ooz;
            buffer[idx] = ch;
        }
    }
}

void printIntro()
{
    std::system(CLEAR_COMMAND); // Clear the console based on the platform
     std::cout << "\x1B[1;36;44m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl; 
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[31;1m Universidad Catolica San Pablo \x1B[m" << std::endl; 
	std::cout << "\x1B[33;1m Escuela Profesional de Ciencia de la Computacion \x1B[m" << std::endl; 
	std::cout << "\x1B[37;1m Curso de Ciencia de la Computacion I \x1B[m" << std::endl; 
	std::cout << "\x1B[38;5;46m Prof. D.Sc. Manuel Eduardo Loaiza Fernandez \x1B[m" << std::endl; 
	std::cout << "\x1B[3;38;5;160m Arequipa 2024 - Semestre II \x1B[m" << std::endl; 
	std::cout << "\x1B[5;36;44m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"	
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto 
    
    return;
}

void printGLScreen(int w, int h, char* charBuffer)
{
    int k{0};
    for (int i{0}; i < w; i++)
    {
        for (int j{0}; j < h; j++)
        {
            std::cout << charBuffer[k];
            k++;
        }
        std::cout << "\n";
    }
    
    return;
}

#ifdef _WIN32
bool isKeyPressed() 
{
    return GetAsyncKeyState('Q') & 0x8000;
}
#else
void setTerminalNonBlocking(bool enable) 
{
    static termios oldt;
    termios newt;
    tcgetattr(STDIN_FILENO, &oldt); // Get current terminal attributes
    newt = oldt;
    
    if (enable) {
        newt.c_lflag &= ~(ICANON | ECHO); // Disable canonical mode (buffered I/O) and local echo
        newt.c_cc[VMIN] = 0; // Minimum number of characters to read
        newt.c_cc[VTIME] = 1; // Timeout in deciseconds for non-canonical read
    } else {
        newt = oldt;
    }
    
    tcsetattr(STDIN_FILENO, TCSANOW, &newt); // Set new terminal attributes
}

bool isKeyPressed() 
{
    char buf = 0;
    int bytesRead = read(STDIN_FILENO, &buf, 1);
    return (bytesRead > 0 && (buf == 'q' || buf == 'Q'));
}
#endif

int main() 
{
    zBuffer = new float[width * height];
    buffer = new char[width * height];

#ifndef _WIN32
    setTerminalNonBlocking(true);
#endif

    while (running.load()) 
    {
        if (isKeyPressed()) 
        {
            running.store(false);
            break;
        }

        memset(buffer, backgroundASCIICode, width * height);
        memset(zBuffer, 0, width * height * sizeof(float));

        horizontalOffset = -2 * cubeWidth;

        for (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) 
        {
            for (float cubeY = -cubeWidth; cubeY < cubeWidth; cubeY += incrementSpeed) 
            {
                calculateForSurface(cubeX, cubeY, -cubeWidth, '@');
                calculateForSurface(cubeWidth, cubeY, cubeX, '$');
                calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
                calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
                calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
                calculateForSurface(cubeX, cubeWidth, cubeY, '+');
            }
        }

        printIntro();
        
        for (int k = 0; k < width * height; k++) 
        {
            if (k % width)
            {
                if (buffer[k] == '@')
                    std::cout << "\x1B[5;32;42m";
                if (buffer[k] == '$')
                    std::cout << "\x1B[5;31;41m";
                if (buffer[k] == '~')
                    std::cout << "\x1B[5;34;44m";
                if (buffer[k] == '#')
                    std::cout << "\x1B[5;33;43m";
                if (buffer[k] == ';')
                    std::cout << "\x1B[5;35;45m";
                if (buffer[k] == '+')
                    std::cout << "\x1B[5;36;46m";

                std::cout << buffer[k] << "\x1B[m";
            }
            else
            {
                std::cout << std::endl;
            }
        }

        A += 0.05;
        B += 0.05;
        C += 0.01;
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }

#ifndef _WIN32
    setTerminalNonBlocking(false);
#endif
    
    delete[] zBuffer;
    delete[] buffer;

    return 0;
}

/*
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

float A, B, C;

float cubeWidth = 20;
int width = 160, height = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgroundASCIICode = '.';
int distanceFromCam = 100;
float horizontalOffset;
float K1 = 40;

float incrementSpeed = 0.6;

float x, y, z;
float ooz;
int xp, yp;
int idx;

float calculateX(int i, int j, int k) {
  return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
         j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k) {
  return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
         j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
         i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) {
  return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void calculateForSurface(float cubeX, float cubeY, float cubeZ, int ch) {
  x = calculateX(cubeX, cubeY, cubeZ);
  y = calculateY(cubeX, cubeY, cubeZ);
  z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

  ooz = 1 / z;

  xp = (int)(width / 2 + horizontalOffset + K1 * ooz * x * 2);
  yp = (int)(height / 2 + K1 * ooz * y);

  idx = xp + yp * width;
  if (idx >= 0 && idx < width * height) {
    if (ooz > zBuffer[idx]) {
      zBuffer[idx] = ooz;
      buffer[idx] = ch;
    }
  }
}

int main() {
  printf("\x1b[2J");
  while (1) {
    memset(buffer, backgroundASCIICode, width * height);
    memset(zBuffer, 0, width * height * 4);
    cubeWidth = 20;
    horizontalOffset = -2 * cubeWidth;
    // first cube
    for (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) {
      for (float cubeY = -cubeWidth; cubeY < cubeWidth;
           cubeY += incrementSpeed) {
        calculateForSurface(cubeX, cubeY, -cubeWidth, '@');
        calculateForSurface(cubeWidth, cubeY, cubeX, '$');
        calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
        calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
        calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
        calculateForSurface(cubeX, cubeWidth, cubeY, '+');
      }
    }
    cubeWidth = 10;
    horizontalOffset = 1 * cubeWidth;
    // second cube
    for (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) {
      for (float cubeY = -cubeWidth; cubeY < cubeWidth;
           cubeY += incrementSpeed) {
        calculateForSurface(cubeX, cubeY, -cubeWidth, '@');
        calculateForSurface(cubeWidth, cubeY, cubeX, '$');
        calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
        calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
        calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
        calculateForSurface(cubeX, cubeWidth, cubeY, '+');
      }
    }
    cubeWidth = 5;
    horizontalOffset = 8 * cubeWidth;
    // third cube
    for (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) {
      for (float cubeY = -cubeWidth; cubeY < cubeWidth;
           cubeY += incrementSpeed) {
        calculateForSurface(cubeX, cubeY, -cubeWidth, '@');
        calculateForSurface(cubeWidth, cubeY, cubeX, '$');
        calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
        calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
        calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
        calculateForSurface(cubeX, cubeWidth, cubeY, '+');
      }
    }
    printf("\x1b[H");
    for (int k = 0; k < width * height; k++) {
      putchar(k % width ? buffer[k] : 10);
    }

    A += 0.05;
    B += 0.05;
    C += 0.01;
    usleep(8000 * 2);
  }
  return 0;
}
*/