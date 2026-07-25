/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028537C
 * Mangled: _ZThn24_N5Caver18MagicBoltComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::MagicBoltComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DF0  Caver::MagicBoltComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000285380 string=0x00000000001F4DF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicBoltComponent::Update(Caver::MagicBoltComponent *this, float a2)
{
  return Caver::MagicBoltComponent::Update((Caver::MagicBoltComponent *)((char *)this - 24), a2);
}

