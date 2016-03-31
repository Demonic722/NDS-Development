/*---------------------------------------------------------------------------------
Scrolling background based on backgrounds example from Devkitpro, scrolling.cpp
-- John Riselvato ( March 26th, 2016 )
---------------------------------------------------------------------------------*/
#include <nds.h>
#include <map_tiles.h>
/*---------------------------------------------------------------------------------
Things to know:
- How VRAM works and the differences between the A-D Banks
---------------------------------------------------------------------------------*/
int main(void) {
	videoSetMode(MODE_5_2D);
	vramSetBankA(VRAM_A_MAIN_BG);
	int bg = bgInit(3, BgType_Bmp16, BgSize_B16_256x256, 0,0);
	dmaCopy(map_tilesTiles, bgGetGfxPtr(bg), map_tilesTilesLen); 
	while(1) {
		swiWaitForVBlank();
	}
	return 0;
}