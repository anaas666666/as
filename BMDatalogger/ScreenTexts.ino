const char sensor_0[] PROGMEM = "RPM:";
const char sensor_1[] PROGMEM = "ECT:";
const char sensor_2[] PROGMEM = "IAT:";
const char sensor_3[] PROGMEM = "TPS:";
const char sensor_4[] PROGMEM = "O2:";
const char sensor_5[] PROGMEM = "IGN:";
const char sensor_6[] PROGMEM = "INJ:";
const char sensor_7[] PROGMEM = "FUEL:";
const char sensor_8[] PROGMEM = "IACV:";
const char sensor_9[] PROGMEM = "MAP:";
const char sensor_10[] PROGMEM = "BST:";
const char sensor_11[] PROGMEM = "VSS:";
const char sensor_12[] PROGMEM = "FAN:";
const char sensor_13[] PROGMEM = "BATT:";
const char sensor_14[] PROGMEM = "ICUT:";
const char sensor_15[] PROGMEM = "FCUT:";
const char sensor_16[] PROGMEM = "INJFV:";
const char sensor_17[] PROGMEM = "2MAP:";
const char sensor_18[] PROGMEM = "TIME:";
const char sensor_19[] PROGMEM = "BTIME:";
const char sensor_20[] PROGMEM = "VTS:";
const char sensor_21[] PROGMEM = "VTP:";
const char sensor_22[] PROGMEM = "ELDV:";
const char sensor_23[] PROGMEM = "O2H:";
const char sensor_24[] PROGMEM = "AC:";
const char sensor_25[] PROGMEM = "ALT:";
const char sensor_26[] PROGMEM = "GEAR:";

const char sensor_27[] PROGMEM = "BST:";
const char sensor_28[] PROGMEM = "FTL:";
const char sensor_29[] PROGMEM = "ATLG:";
const char sensor_30[] PROGMEM = "FTS:";
const char sensor_31[] PROGMEM = "EBC:";
const char sensor_32[] PROGMEM = "BSTCT:";
const char sensor_33[] PROGMEM = "LEAN:";
const char sensor_34[] PROGMEM = "PARK:";
const char sensor_35[] PROGMEM = "BKSW:";
const char sensor_36[] PROGMEM = "ACC:";
const char sensor_37[] PROGMEM = "START:";
const char sensor_38[] PROGMEM = "SCC:";
const char sensor_39[] PROGMEM = "FCUT2:";
const char sensor_40[] PROGMEM = "PSP:";
const char sensor_41[] PROGMEM = "FPMP:";
const char sensor_42[] PROGMEM = "IAB:";
const char sensor_43[] PROGMEM = "PURGE:";
const char sensor_44[] PROGMEM = "GPO1:";
const char sensor_45[] PROGMEM = "GPO2:";
const char sensor_46[] PROGMEM = "GPO3:";
const char sensor_47[] PROGMEM = "BSTS2:";
const char sensor_48[] PROGMEM = "BSTS3:";
const char sensor_49[] PROGMEM = "BSTS4:";

const char inf_0[] PROGMEM = "kmh";
const char inf_1[] PROGMEM = "mph";
const char inf_2[] PROGMEM = "%";
const char inf_3[] PROGMEM = "ms";
const char inf_4[] PROGMEM = "L";
const char inf_5[] PROGMEM = "PAGE";
const char inf_6[] PROGMEM = "MENU";
const char inf_7[] PROGMEM = "SENSOR";
const char inf_8[] PROGMEM = "PEAKS";
const char inf_9[] PROGMEM = "MIL";
const char inf_10[] PROGMEM = "NO CODE";
const char inf_11[] PROGMEM = "  RESET";
const char inf_12[] PROGMEM = "   DONE";
const char inf_13[] PROGMEM = "FAILED";
const char inf_14[] PROGMEM = "START";
const char inf_15[] PROGMEM = "Min:";
const char inf_16[] PROGMEM = "Max:";
const char inf_17[] PROGMEM = "Curr:";
const char inf_18[] PROGMEM = "Off";
const char inf_19[] PROGMEM = "On";
const char inf_20[] PROGMEM = "BMDatalogger";
const char inf_21[] PROGMEM = "By Bouletmarc";
const char inf_22[] PROGMEM = "SLEEP";

const char err_0[] PROGMEM = "UKNW";
const char err_1[] PROGMEM = "O2A";
const char err_2[] PROGMEM = "O2B";
const char err_3[] PROGMEM = "MAP";
const char err_4[] PROGMEM = "CKP";
const char err_5[] PROGMEM = "MAP";
const char err_6[] PROGMEM = "ECT";
const char err_7[] PROGMEM = "TPS";
const char err_8[] PROGMEM = "TDC";
const char err_9[] PROGMEM = "CYP";
const char err_10[] PROGMEM = "IAT";

const char err_12[] PROGMEM = "EGR";
const char err_13[] PROGMEM = "BARO";
const char err_14[] PROGMEM = "IACV";
const char err_15[] PROGMEM = "ICM";
const char err_16[] PROGMEM = "INJ";
const char err_17[] PROGMEM = "VSS";

const char err_19[] PROGMEM = "AUTO";
const char err_20[] PROGMEM = "ELD";
const char err_21[] PROGMEM = "VTS";
const char err_22[] PROGMEM = "VTP";
const char err_23[] PROGMEM = "KNCK";

const char err_30[] PROGMEM = "AUTOA";
const char err_31[] PROGMEM = "AUTOB";

const char err_36[] PROGMEM = "TRAC";
const char err_41[] PROGMEM = "PO2H";
const char err_43[] PROGMEM = "FUELS";
const char err_45[] PROGMEM = "FUEL";

const char* const SensorVars[] PROGMEM = {
  sensor_0, sensor_1, sensor_2, sensor_3, sensor_4,
  sensor_5, sensor_6, sensor_7, sensor_8, sensor_9, 
  sensor_10, sensor_11, sensor_12, sensor_13, sensor_14,
  sensor_15, sensor_16, sensor_17, sensor_18, sensor_19,
  sensor_20, sensor_21, sensor_22, sensor_23, sensor_24,
  sensor_25, sensor_26, sensor_27, sensor_28, sensor_29,
  sensor_30, sensor_31, sensor_32, sensor_33, sensor_34,
  sensor_35, sensor_36, sensor_37, sensor_38, sensor_39,
  sensor_40, sensor_41, sensor_42, sensor_43, sensor_44,
  sensor_45, sensor_46, sensor_47, sensor_48, sensor_49
};

const char* const StringInfos[] PROGMEM = {
  inf_0, inf_1, inf_2, inf_3, inf_4,
  inf_5, inf_6, inf_7, inf_8, inf_9, 
  inf_10, inf_11, inf_12, inf_13, inf_14,
  inf_15, inf_16, inf_17, inf_18, inf_19,
  inf_20, inf_21, inf_22
};

const char* const ErrorsVars[] PROGMEM = {
  err_0, err_1, err_2, err_3, err_4,
  err_5, err_6, err_7, err_8, err_9, 
  err_10, err_12, err_13, err_14,
  err_15, err_16, err_17, err_19,
  err_20, err_21, err_22, err_23,
  err_30, err_31,
  err_36, err_41, err_43, err_45
};

int CurrentBufferIndex = 0; //which index we are now doing into the Buffer (0-10 or 0-20)

//################################################################################################
//################################################################################################
//################################################################################################

void ResetBufferIndex() {
  CurrentBufferIndex = 0;
  for (int i=0; i < 20; i++) StringBuffer[i] = ' ';
}

void Add_String(String ThisStr) {
  for (int i=0; i < 20; i++) {
    char c = ThisStr.charAt(i);
    if ((int) c >= 20) AddThisChar(c);
    if ((int) c < 20) i += 20;
  }
  
  //int Size = ThisStr.length() + 1;
  //int Size = strlen(ThisStr);
  //if (Size > 20) Size = 20;
  //for (int i=0; i<Size; i++) AddThisChar(ThisStr.charAt(i));
}

void Add_Sensor_Desc() {
  if (ThisScreenIndex == 1) GetTempCelcius();
  if (ThisScreenIndex == 2) GetTempCelcius();
  if (ThisScreenIndex == 3) GetInfosString(2);
  if (ThisScreenIndex == 6) GetInfosString(3);
  if (ThisScreenIndex == 7) GetInfosString(4);
  if (ThisScreenIndex == 11) GetKMH();
}

void GetTempCelcius() {
  AddThisChar((char)0xDF);
  if (UseCelcius == 1) AddThisChar('C');
  if (UseCelcius == 0) AddThisChar('F');
}

void GetKMH() {
  if (UseKMH == 1) GetInfosString(0);
  if (UseKMH == 0) GetInfosString(1);
}

void GetSensorString(int Addr) {
  GetStringsChar((unsigned int) pgm_read_word(&SensorVars[Addr]));
}

void GetInfosString(int Addr) {
  GetStringsChar((unsigned int) pgm_read_word(&StringInfos[Addr]));
}

void GetActivatedString(bool Activated) {
  if (!Activated) GetInfosString(18);
  if (Activated) GetInfosString(19);
}

void GetErrorString(int Addr) {
  Add_String(String(Addr) + "-");
  if (Addr == 11 | Addr == 18) Addr = 0;
  if (Addr > 23 & Addr < 30) Addr = 0;
  if (Addr > 31 & Addr < 36) Addr = 0;
  if (Addr > 36 & Addr < 41) Addr = 0;
  if (Addr == 42 | Addr == 44 | Addr > 45) Addr = 0;

  int Remover = 0;
  if (Addr > 11) Remover = 1;
  if (Addr > 18) Remover = 2;
  if (Addr > 29) Remover = 8;
  if (Addr > 35) Remover = 12;
  if (Addr > 40) Remover = 16;
  if (Addr > 42) Remover = 17;
  if (Addr > 44) Remover = 18;
  if (Addr > 11) Addr -= Remover;
  
  GetStringsChar((unsigned int) pgm_read_word(&ErrorsVars[Addr]));
}

void GetStringsChar(unsigned int flash_address) {
  for (int i=0; i < 20; i++) {
    char c = (char) pgm_read_byte(flash_address++);
    if ((int) c >= 20) AddThisChar(c);
    if ((int) c < 20) i += 20;
  }
}

void AddThisChar(char This) {
  if (CurrentBufferIndex < 20) {
    StringBuffer[CurrentBufferIndex] = This;
    CurrentBufferIndex++;
  }
}

//used to remake double into 1 decimal
void RemoveLastChar() {
  if (CurrentBufferIndex > 0) CurrentBufferIndex--;
  StringBuffer[CurrentBufferIndex] = ' ';
}

void PrintText(int Lenght, int PosX, int PosY) {
  for (int i=0; i < Lenght; i++) {
    lcd.setCursor(PosX + i, PosY);
    lcd.print(StringBuffer[i]);
  }
}

void PrintTextLenght(int PosX, int PosY) {
  for (int i=0; i < CurrentBufferIndex; i++) {
    lcd.setCursor(PosX + i, PosY);
    lcd.print(StringBuffer[i]);
  }
}

void PrintTextFrom(int Lenght, int From, int PosX, int PosY) {
  for (int i=0; i < Lenght; i++) {
    lcd.setCursor(PosX + i, PosY);
    lcd.print(StringBuffer[i + From]);
  }
}

int GetBufferLenght() {
  return CurrentBufferIndex;
}

void DisplayMil(int Displayed) {
  int PosX = 0;
  int PosY = 2;
  if (Displayed == 1 | Displayed == 3) PosX = 10;
  if (Displayed >= 2) PosY = 3;
  PrintText(10, PosX, PosY);
}

