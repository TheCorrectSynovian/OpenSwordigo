/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAB1C
 * Mangled: _ZN5Caver24OnlineController_Android10EnteredAgeEi
 * Demangled: Caver::OnlineController_Android::EnteredAge(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4720  Caver::AndroidEnteredAge(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAB20 string=0x00000000001F4720 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineController_Android::EnteredAge(Caver::OnlineController_Android *this, Caver *a2)
{
  return Caver::AndroidEnteredAge((Caver *)(unsigned int)a2, (int)a2);
}

