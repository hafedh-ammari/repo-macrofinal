/**
  ******************************************************************************
  * @file    main.c
  * @author  HAFEDH AMMARI
  * @brief   Macros 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define INTEL 1 
//#define OTHERS
#define NOINTEL 0
#define X 1
#define Y 3
// Define an addition equation X+Y=4
#define   SOM(X,Y) (INTEL)?(X+Y):(X*Y)
//Find the minimum value that is X = 1
#define   MIN(X,Y) (INTEL)?((X<Y)? X: Y):((X>Y)? X: Y)
//Define a multiplicatin equation X*Y=3
#define   MUL(X,Y) (NOINTEL)?(X+Y):(X*Y)
//Find the maximum value that is Y= 3
#define   MAX(X,Y) (NOINTEL)?((X<Y)? X: Y):((X>Y)? X: Y)

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{ 
  // call the macros functions
  int som_macro = SOM(X,Y);
  int min_macro = MIN(X,Y);
  int mul_macro = MUL(X,Y);
  int max_macro = MAX(X,Y);
  while (1)
  {}
}




/**************************************END OF FILE**************************************/