/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C00
 * Mangled: ._ZN5Caver10FWKeyboard14RemoveListenerEPNS_19IFWKeyboardListenerE
 * Demangled: Caver::FWKeyboard::RemoveListener(Caver::IFWKeyboardListener *)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004AB5E0  Caver::FWKeyboard::RemoveListener(Caver::IFWKeyboardListener *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C08 string=0x00000000001F4C0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWKeyboard::RemoveListener()
{
  return _ZN5Caver10FWKeyboard14RemoveListenerEPNS_19IFWKeyboardListenerE();
}

