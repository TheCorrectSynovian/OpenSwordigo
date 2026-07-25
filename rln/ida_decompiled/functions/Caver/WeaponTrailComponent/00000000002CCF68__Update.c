/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCF68
 * Mangled: _ZN5Caver20WeaponTrailComponent6UpdateEf
 * Demangled: Caver::WeaponTrailComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8C30  Caver::WeaponTrail::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CCF68 string=0x00000000002CCF6C "1"
 *   insn=0x00000000002CCF6C string=0x00000000001F8C30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::Update(Caver::WeaponTrailComponent *this, float a2)
{
  return Caver::WeaponTrail::Update((Caver::WeaponTrailComponent *)((char *)this + 112), a2);
}

