/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292B54
 * Mangled: _ZThn24_N5Caver15AttackComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::AttackComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F91B0  Caver::AttackComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000292B58 string=0x00000000001F91B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::AttackComponent::Update(Caver::AttackComponent *this, float a2)
{
  return Caver::AttackComponent::Update((Caver::AttackComponent *)((char *)this - 24), a2);
}

