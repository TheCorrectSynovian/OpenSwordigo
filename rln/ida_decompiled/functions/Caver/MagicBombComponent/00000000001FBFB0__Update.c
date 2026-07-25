/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBFB0
 * Mangled: ._ZN5Caver18MagicBombComponent6UpdateEf
 * Demangled: Caver::MagicBombComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000286530  `non-virtual thunk to'Caver::MagicBombComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002863DC  Caver::MagicBombComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBFB8 string=0x00000000001FBFBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicBombComponent::Update(Caver::MagicBombComponent *this, float a2)
{
  return _ZN5Caver18MagicBombComponent6UpdateEf(this, a2);
}

