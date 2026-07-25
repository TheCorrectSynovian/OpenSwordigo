/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F91B0
 * Mangled: ._ZN5Caver15AttackComponent6UpdateEf
 * Demangled: Caver::AttackComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000292B54  `non-virtual thunk to'Caver::AttackComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000292794  Caver::AttackComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F91B8 string=0x00000000001F91BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AttackComponent::Update(Caver::AttackComponent *this, float a2)
{
  return _ZN5Caver15AttackComponent6UpdateEf(this, a2);
}

