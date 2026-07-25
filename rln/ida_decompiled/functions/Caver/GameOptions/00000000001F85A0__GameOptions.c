/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F85A0
 * Mangled: ._ZN5Caver11GameOptionsC2Ev
 * Demangled: Caver::GameOptions::GameOptions(void)
 *
 * Callers: 1
 *   0x000000000036ACA4  Caver::MainMenuViewController::MainMenuViewController(void)
 *
 * Callees: 1
 *   0x00000000003B42C0  Caver::GameOptions::GameOptions(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F85A4 string=0x00000000003B42C0 "( "
 *   insn=0x00000000001F85A8 string=0x00000000001F85AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOptions::GameOptions(Caver::GameOptions *this)
{
  return _ZN5Caver11GameOptionsC2Ev(this);
}

