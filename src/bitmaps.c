#include "inkview.h"

extern const ibitmap chip_51;
extern const ibitmap chip_52;
extern const ibitmap chip_53;
extern const ibitmap chip_54;
extern const ibitmap chip_55;
extern const ibitmap chip_56;
extern const ibitmap chip_57;
extern const ibitmap chip_58;
extern const ibitmap chip_59;
extern const ibitmap chip_61;
extern const ibitmap chip_62;
extern const ibitmap chip_63;
extern const ibitmap chip_64;
extern const ibitmap chip_65;
extern const ibitmap chip_66;
extern const ibitmap chip_67;
extern const ibitmap chip_68;
extern const ibitmap chip_69;
extern const ibitmap chip_71;
extern const ibitmap chip_72;
extern const ibitmap chip_73;
extern const ibitmap chip_74;
extern const ibitmap chip_75;
extern const ibitmap chip_76;
extern const ibitmap chip_77;
extern const ibitmap chip_78;
extern const ibitmap chip_79;
extern const ibitmap chip_91;
extern const ibitmap chip_92;
extern const ibitmap chip_93;
extern const ibitmap chip_94;
extern const ibitmap chip_A1;
extern const ibitmap chip_A2;
extern const ibitmap chip_A3;
extern const ibitmap chip_D1;
extern const ibitmap chip_D2;
extern const ibitmap chip_D3;
extern const ibitmap chip_D4;
extern const ibitmap chip_E1;
extern const ibitmap chip_E2;
extern const ibitmap chip_E3;
extern const ibitmap chip_E4;

const ibitmap* bitmaps[256] = {0, };

void bitmaps_init(void)
{
  bitmaps[0x51] = &chip_51;
  bitmaps[0x52] = &chip_52;
  bitmaps[0x53] = &chip_53;
  bitmaps[0x54] = &chip_54;
  bitmaps[0x55] = &chip_55;
  bitmaps[0x56] = &chip_56;
  bitmaps[0x57] = &chip_57;
  bitmaps[0x58] = &chip_58;
  bitmaps[0x59] = &chip_59;
  bitmaps[0x61] = &chip_61;
  bitmaps[0x62] = &chip_62;
  bitmaps[0x63] = &chip_63;
  bitmaps[0x64] = &chip_64;
  bitmaps[0x65] = &chip_65;
  bitmaps[0x66] = &chip_66;
  bitmaps[0x67] = &chip_67;
  bitmaps[0x68] = &chip_68;
  bitmaps[0x69] = &chip_69;
  bitmaps[0x71] = &chip_71;
  bitmaps[0x72] = &chip_72;
  bitmaps[0x73] = &chip_73;
  bitmaps[0x74] = &chip_74;
  bitmaps[0x75] = &chip_75;
  bitmaps[0x76] = &chip_76;
  bitmaps[0x77] = &chip_77;
  bitmaps[0x78] = &chip_78;
  bitmaps[0x79] = &chip_79;
  bitmaps[0x91] = &chip_91;
  bitmaps[0x92] = &chip_92;
  bitmaps[0x93] = &chip_93;
  bitmaps[0x94] = &chip_94;
  bitmaps[0xA1] = &chip_A1;
  bitmaps[0xA2] = &chip_A2;
  bitmaps[0xA3] = &chip_A3;
  bitmaps[0xD1] = &chip_D1;
  bitmaps[0xD2] = &chip_D2;
  bitmaps[0xD3] = &chip_D3;
  bitmaps[0xD4] = &chip_D4;
  bitmaps[0xE1] = &chip_E1;
  bitmaps[0xE2] = &chip_E2;
  bitmaps[0xE3] = &chip_E3;
  bitmaps[0xE4] = &chip_E4;
}
