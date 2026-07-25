/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A50
 * Mangled: ._ZN5Caver11WeaponTrail19InitWithMaxSegmentsEi
 * Demangled: Caver::WeaponTrail::InitWithMaxSegments(int)
 *
 * Callers: 1
 *   0x00000000002CC828  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Callees: 1
 *   0x00000000002CC174  Caver::WeaponTrail::InitWithMaxSegments(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A58 string=0x00000000001F9A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::InitWithMaxSegments(Caver::WeaponTrail *this, int a2)
{
  return _ZN5Caver11WeaponTrail19InitWithMaxSegmentsEi(this, a2);
}

