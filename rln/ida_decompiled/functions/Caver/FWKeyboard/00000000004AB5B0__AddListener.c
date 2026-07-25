/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB5B0
 * Mangled: _ZN5Caver10FWKeyboard11AddListenerEPNS_19IFWKeyboardListenerE
 * Demangled: Caver::FWKeyboard::AddListener(Caver::IFWKeyboardListener *)
 *
 * Callers: 1
 *   0x00000000001FA530  Caver::FWKeyboard::AddListener(Caver::IFWKeyboardListener *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 2
 *   insn=0x00000000004AB5C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004AB5DC string=0x000000000052A9AC """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWKeyboard::AddListener(__int64 a1, __int64 a2)
{
  __int64 v4; // x0

  v4 = operator new(0x18u);
  *(_QWORD *)(v4 + 16) = a2;
  return sub_52A9AC(v4, a1);
}

