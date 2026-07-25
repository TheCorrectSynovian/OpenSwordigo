/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC710
 * Mangled: ._ZN5Caver20FireEmitterComponent6UpdateEf
 * Demangled: Caver::FireEmitterComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002A3148  `non-virtual thunk to'Caver::FireEmitterComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC718 string=0x00000000001FC71C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FireEmitterComponent::Update(Caver::FireEmitterComponent *this, float a2)
{
  return _ZN5Caver20FireEmitterComponent6UpdateEf(this, a2);
}

