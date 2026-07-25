/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F80C0
 * Mangled: ._ZN5Caver23BushControllerComponent6UpdateEf
 * Demangled: Caver::BushControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002B1A7C  `non-virtual thunk to'Caver::BushControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002B199C  Caver::BushControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F80C8 string=0x00000000001F80CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BushControllerComponent::Update(Caver::BushControllerComponent *this, float a2)
{
  return _ZN5Caver23BushControllerComponent6UpdateEf(this, a2);
}

