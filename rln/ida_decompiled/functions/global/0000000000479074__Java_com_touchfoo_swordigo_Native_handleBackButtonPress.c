/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000479074
 * Mangled: Java_com_touchfoo_swordigo_Native_handleBackButtonPress
 * Demangled: Java_com_touchfoo_swordigo_Native_handleBackButtonPress
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5930  Caver::FWKeyboard::SendKeyUpEvent(uint,uint,double)
 *   0x00000000001FE590  Caver::FWKeyboard::SendKeyDownEvent(uint,uint,double)
 *   0x00000000001FEF70  Caver::FWKeyboard::sharedKeyboard(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000047907C string=0x0000000000479080 "!"
 *   insn=0x0000000000479088 string=0x000000000047908C "A"
 *   insn=0x0000000000479090 string=0x0000000000479094 "!"
 *   insn=0x00000000004790A0 string=0x00000000004790A4 "#"
 *   insn=0x00000000004790A4 string=0x00000000001F5930 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_handleBackButtonPress(Caver::FWKeyboard *a1)
{
  Caver::FWKeyboard *v1; // x0
  Caver::FWKeyboard *v2; // x0
  Caver::FWKeyboard *v3; // x0

  v1 = (Caver::FWKeyboard *)Caver::FWKeyboard::sharedKeyboard(a1);
  v2 = (Caver::FWKeyboard *)Caver::FWKeyboard::SendKeyDownEvent(v1, 0x21u, 0, 0.0);
  v3 = (Caver::FWKeyboard *)Caver::FWKeyboard::sharedKeyboard(v2);
  return Caver::FWKeyboard::SendKeyUpEvent(v3, 0x21u, 0, 0.0);
}

