/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4DF0
 * Mangled: ._ZN5Caver18MagicBoltComponent6UpdateEf
 * Demangled: Caver::MagicBoltComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000028537C  `non-virtual thunk to'Caver::MagicBoltComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4DF8 string=0x00000000001F4DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicBoltComponent::Update(Caver::MagicBoltComponent *this, float a2)
{
  return _ZN5Caver18MagicBoltComponent6UpdateEf(this, a2);
}

