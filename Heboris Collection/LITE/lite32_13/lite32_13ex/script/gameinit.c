// ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ 
//
//    HEBORIS [w{X] 2001 Ver0.00 / 2000.11.05 (Sun) ` ????.??.?? (????)
//
//                         (c) 1998-2000 Kenji Hoshimoto
//
//¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡ ¡

// O[oÏ
int		screenColor = 16;			// »ÝÌF

// Ýèt@CðC|[g
	include "option.def"			// Setting.exeÌÝè

// \[Xt@CðC|[g
	include "script/screencfg.c"	// SCREEN.SAVÖAÌÖ

//¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤¥¤
//   úÝè
//£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£¢£
void main() {
	// SCREEN.SAVÇÝÝ(screencfg.c)
	if(loadScreenConfig()) {
		saveScreenConfig(screenMode, systemmem, screenColor);
	}
	
	if(screenMode == 0)
		SetWindow(0, 320, 240, screenColor);	// tXN[[h 320*240
	else if(screenMode == 1)
		SetWindow(1, 320, 240, screenColor);	// EChE[h 320*240
	else if(screenMode == 2)
		SetWindow(1, 640, 480, screenColor);	// EChE[h 640*480
	else
		SetWindow(0, 640, 480, screenColor);	// tXN[[h 640*480
	
	// 60fps
	SetFPS(60);

	// YGS2000ÅLÌÝè
	SetConstParam("Caption", "HEBORIS LITE - Script Compiling...");
	SetConstParam("EnablePause", 0);	// ÇÝÝ®¹ÜÅÍ|[Y³ø
	SetConstParam("USE_XZ_FOR_BUTTON", 0);
	SetConstParam("StringMax", 16);

	SetDebugMode(0);

	// VXeðg¤©?
	SetSystemMemoryUse(systemmem);
}
