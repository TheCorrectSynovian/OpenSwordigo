/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036AAEC
 * Mangled: _ZN5Caver21LevelUpViewController21NumPointsForAttributeENS_18CharacterAttributeE
 * Demangled: Caver::LevelUpViewController::NumPointsForAttribute(Caver::CharacterAttribute)
 *
 * Callers: 1
 *   0x00000000001FDFD0  Caver::LevelUpViewController::NumPointsForAttribute(Caver::CharacterAttribute)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x000000000036AAF0 string=0x000000000036AAF4 "?"
 *   insn=0x000000000036AAF0 string=0x000000000036AB0C "4@"
 *   insn=0x000000000036AAF8 string=0x000000000036AB18 "4@"
 *   insn=0x000000000036AAFC string=0x000000000036AB00 "4@"
 *   insn=0x000000000036AB00 string=0x000000000036AB04 "a"
 *   insn=0x000000000036AB08 string=0x000000000036AB20 ""
 *   insn=0x000000000036AB0C string=0x000000000036AB10 ""
 *   insn=0x000000000036AB18 string=0x000000000036AB1C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LevelUpViewController::NumPointsForAttribute(__int64 a1, int a2)
{
  __int64 v2; // x8

  switch ( a2 )
  {
    case 2:
      v2 = *(_QWORD *)(a1 + 104) + 376LL;
      return *(unsigned int *)(*(_QWORD *)v2 + 260LL);
    case 1:
      v2 = *(_QWORD *)(a1 + 104) + 360LL;
      return *(unsigned int *)(*(_QWORD *)v2 + 260LL);
    case 0:
      v2 = *(_QWORD *)(a1 + 104) + 344LL;
      return *(unsigned int *)(*(_QWORD *)v2 + 260LL);
  }
  return 0;
}

