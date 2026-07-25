/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCF70
 * Mangled: _ZThn24_N5Caver20WeaponTrailComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::WeaponTrailComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8C30  Caver::WeaponTrail::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CCF70 string=0x00000000002CCF74 "/"
 *   insn=0x00000000002CCF74 string=0x00000000001F8C30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WeaponTrailComponent::Update(
        Caver::WeaponTrailComponent *this,
        float a2)
{
  return Caver::WeaponTrail::Update((Caver::WeaponTrailComponent *)((char *)this + 88), a2);
}

