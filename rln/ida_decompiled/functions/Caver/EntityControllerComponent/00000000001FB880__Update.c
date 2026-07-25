/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB880
 * Mangled: ._ZN5Caver25EntityControllerComponent6UpdateEf
 * Demangled: Caver::EntityControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000026CB48  `non-virtual thunk to'Caver::EntityControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000026C0F0  Caver::EntityControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB888 string=0x00000000001FB88C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityControllerComponent::Update(Caver::EntityControllerComponent *this, float a2)
{
  return _ZN5Caver25EntityControllerComponent6UpdateEf(this, a2);
}

