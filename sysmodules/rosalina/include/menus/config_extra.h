typedef struct {
	bool suppressLeds;
	bool cutSlotPower;
	bool homeToRosalina;
	bool toggleLCD;
	bool toggleTopLCD;
} config_extra;

extern config_extra configExtra;
extern Menu configExtraMenu;

bool topScreenCheck();
void ConfigExtra_SetSuppressLeds();
void ConfigExtra_SetCutSlotPower();
void ConfigExtra_SetHomeToRosalina();
void ConfigExtra_SetToggleLCD();
void ConfigExtra_SetToggleTopLCD();
void ConfigExtra_UpdateMenuItem(int menuIndex, bool value);
void ConfigExtra_UpdateAllMenuItems();
void ConfigExtra_ReadConfigExtra();
void ConfigExtra_WriteConfigExtra();
