/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF70
 * Mangled: ._ZN5Caver10FWKeyboard14sharedKeyboardEv
 * Demangled: Caver::FWKeyboard::sharedKeyboard(void)
 *
 * Callers: 4
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *   0x0000000000479074  Java_com_touchfoo_swordigo_Native_handleBackButtonPress
 *   0x00000000004790A8  Java_com_touchfoo_swordigo_Native_handleMenuButtonPress
 *
 * Callees: 1
 *   0x00000000004AB3CC  Caver::FWKeyboard::sharedKeyboard(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF78 string=0x00000000001FEF7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWKeyboard::sharedKeyboard(Caver::FWKeyboard *this)
{
  return _ZN5Caver10FWKeyboard14sharedKeyboardEv(this);
}

