/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4720
 * Mangled: ._ZN5Caver17AndroidEnteredAgeEi
 * Demangled: Caver::AndroidEnteredAge(int)
 *
 * Callers: 1
 *   0x00000000004BAB1C  Caver::OnlineController_Android::EnteredAge(int)
 *
 * Callees: 1
 *   0x000000000047AB54  Caver::AndroidEnteredAge(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4728 string=0x00000000001F472C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidEnteredAge(Caver *this, int a2)
{
  return _ZN5Caver17AndroidEnteredAgeEi(this, a2);
}

