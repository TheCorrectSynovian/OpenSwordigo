/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004790A8
 * Mangled: Java_com_touchfoo_swordigo_Native_handleMenuButtonPress
 * Demangled: Java_com_touchfoo_swordigo_Native_handleMenuButtonPress
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5930  Caver::FWKeyboard::SendKeyUpEvent(uint,uint,double)
 *   0x00000000001FE590  Caver::FWKeyboard::SendKeyDownEvent(uint,uint,double)
 *   0x00000000001FEF70  Caver::FWKeyboard::sharedKeyboard(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004790BC string=0x00000000004790C0 "4"
 *   insn=0x00000000004790D8 string=0x00000000001F5930 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_Native_handleMenuButtonPress(Caver::FWKeyboard *a1)
{
  Caver::FWKeyboard *v1; // x0
  Caver::FWKeyboard *v2; // x0
  Caver::FWKeyboard *v3; // x0

  v1 = (Caver::FWKeyboard *)Caver::FWKeyboard::sharedKeyboard(a1);
  v2 = (Caver::FWKeyboard *)Caver::FWKeyboard::SendKeyDownEvent(v1, 0x5Du, 0, 0.0);
  v3 = (Caver::FWKeyboard *)Caver::FWKeyboard::sharedKeyboard(v2);
  return Caver::FWKeyboard::SendKeyUpEvent(v3, 0x5Du, 0, 0.0);
}

