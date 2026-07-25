/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002037C0
 * Mangled: ._ZN5Caver24OrbitControllerComponent6UpdateEf
 * Demangled: Caver::OrbitControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002A49E8  `non-virtual thunk to'Caver::OrbitControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002037C8 string=0x00000000002037CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OrbitControllerComponent::Update(Caver::OrbitControllerComponent *this, float a2)
{
  return _ZN5Caver24OrbitControllerComponent6UpdateEf(this, a2);
}

