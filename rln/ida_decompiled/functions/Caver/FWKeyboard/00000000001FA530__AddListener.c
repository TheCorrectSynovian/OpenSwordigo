/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA530
 * Mangled: ._ZN5Caver10FWKeyboard11AddListenerEPNS_19IFWKeyboardListenerE
 * Demangled: Caver::FWKeyboard::AddListener(Caver::IFWKeyboardListener *)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004AB5B0  Caver::FWKeyboard::AddListener(Caver::IFWKeyboardListener *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA538 string=0x00000000001FA53C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWKeyboard::AddListener()
{
  return _ZN5Caver10FWKeyboard11AddListenerEPNS_19IFWKeyboardListenerE();
}

