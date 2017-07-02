#include "MathLog.h"
#include "Engine.h"
#include "Window.h"

int answer;

int main() 
{
	LOG(MGE_NAME);
	LOG(MGE_V);
	
	returnAddTwo(5, 4, true);
	answer = returnAddTwo(5, 67);
	LOG(answer);

	createWindow();
	PauseMP();
}