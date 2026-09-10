#include <stdio.h>
#include <math.h>
/*
    In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula: 
    -   White=Max(red/255,green/255,blue/255) 
    -   Cyan=(white - red/255)/white 
    -   Magenta=(white - green/255)/white 
    -   Yellow=(white - blue/255)/white 
    -   Black=1 - white 
    Note: if RGB values are all 0, then 
    the CMY values are all 0 and the K value is 1.
*/
void main()
{
    int red, green, blue;
    int white , Cyan ,Magenta ,Yellow ,Black;

    printf("Enter a scale for Red");
    scanf("%d",&red);

    printf("Enter a scale for Green");
    scanf("%d",&green);

    printf("Enter a scale for Blue");
    scanf("%d", &blue);

    white=((red/255)>(green/255))?((red/255)>(blue/255)?(red/255):(blue/255):(green/255)>(blue/255)?(green/255):(blue/255));
    Cyan=(white - red/255)/white; 
      Magenta=(white - green/255)/white ;
       Yellow=(white - blue/255)/white ;
       Black=1 - white;
       printf("W; %f\n", cyan);
       printf("M; %f\n", magenta);
       printf("Y; %f\n", Yellow);
       printf("B; %f\n", Black);
       
}