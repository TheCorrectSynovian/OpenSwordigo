/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282D68
 * Mangled: _ZThn24_N5Caver19FireBreathComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::FireBreathComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5D90  Caver::FireBreathComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000282D68 string=0x0000000000282D6C "\t"
 *   insn=0x0000000000282D6C string=0x00000000001F5D90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::FireBreathComponent::Update(Caver::FireBreathComponent *this, float a2)
{
  return Caver::FireBreathComponent::Update((Caver::FireBreathComponent *)((char *)this - 24), a2);
}

