/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036AAC8
 * Mangled: _ZThn72_N5Caver21LevelUpViewController22CharacterViewDismissedEPNS_13CharacterViewE
 * Demangled: `non-virtual thunk to'Caver::LevelUpViewController::CharacterViewDismissed(Caver::CharacterView *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000036AAD0 string=0x000000000036AAD4 " (@"
 *   insn=0x000000000036AAD8 string=0x000000000036AADC ""
 *   insn=0x000000000036AAE0 string=0x000000000036AAE4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::LevelUpViewController::CharacterViewDismissed(
        __int64 this,
        Caver::CharacterView *a2)
{
  if ( *((_BYTE *)a2 + 408) )
  {
    this = *(_QWORD *)(this + 8);
    if ( this )
      return (**(__int64 (__fastcall ***)(__int64))this)(this);
  }
  return this;
}

