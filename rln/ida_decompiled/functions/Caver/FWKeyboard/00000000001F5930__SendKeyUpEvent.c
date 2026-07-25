/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5930
 * Mangled: ._ZN5Caver10FWKeyboard14SendKeyUpEventEjjd
 * Demangled: Caver::FWKeyboard::SendKeyUpEvent(uint,uint,double)
 *
 * Callers: 2
 *   0x0000000000479074  Java_com_touchfoo_swordigo_Native_handleBackButtonPress
 *   0x00000000004790A8  Java_com_touchfoo_swordigo_Native_handleMenuButtonPress
 *
 * Callees: 1
 *   0x00000000004AB4E0  Caver::FWKeyboard::SendKeyUpEvent(uint,uint,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5938 string=0x00000000001F593C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWKeyboard::SendKeyUpEvent(
        Caver::FWKeyboard *this,
        unsigned int a2,
        unsigned int a3,
        double a4)
{
  return _ZN5Caver10FWKeyboard14SendKeyUpEventEjjd(this, a2, a3, a4);
}

