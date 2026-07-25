/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C30
 * Mangled: ._ZN5Caver11WeaponTrail6UpdateEf
 * Demangled: Caver::WeaponTrail::Update(float)
 *
 * Callers: 2
 *   0x00000000002CCF68  Caver::WeaponTrailComponent::Update(float)
 *   0x00000000002CCF70  `non-virtual thunk to'Caver::WeaponTrailComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002CC588  Caver::WeaponTrail::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8C34 string=0x00000000002CC588 ""
 *   insn=0x00000000001F8C38 string=0x00000000001F8C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::Update(Caver::WeaponTrail *this, float a2)
{
  return _ZN5Caver11WeaponTrail6UpdateEf(this, a2);
}

