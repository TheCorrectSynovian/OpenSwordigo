/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD2B0
 * Mangled: ._ZN5Caver13ManaComponent6UpdateEf
 * Demangled: Caver::ManaComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000027AD34  `non-virtual thunk to'Caver::ManaComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000027AC34  Caver::ManaComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD2B8 string=0x00000000001FD2BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ManaComponent::Update(Caver::ManaComponent *this, float a2)
{
  return _ZN5Caver13ManaComponent6UpdateEf(this, a2);
}

