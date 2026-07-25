/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036AAA0
 * Mangled: _ZN5Caver21LevelUpViewController22CharacterViewDismissedEPNS_13CharacterViewE
 * Demangled: Caver::LevelUpViewController::CharacterViewDismissed(Caver::CharacterView *)
 *
 * Callers: 1
 *   0x000000000036A7A4  Caver::LevelUpViewController::LoadView(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000036AAB0 string=0x000000000036AAB4 "\t"
 *   insn=0x000000000036AAB8 string=0x000000000036AABC """
 *   insn=0x000000000036AABC string=0x000000000036AAC0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LevelUpViewController::CharacterViewDismissed(__int64 this, Caver::CharacterView *a2)
{
  __int64 v2; // x8

  v2 = this;
  if ( *((_BYTE *)a2 + 408) )
  {
    this = *(_QWORD *)(this + 80);
    if ( this )
      return (**(__int64 (__fastcall ***)(__int64, __int64))this)(this, v2);
  }
  return this;
}

