/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286530
 * Mangled: _ZThn24_N5Caver18MagicBombComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::MagicBombComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBFB0  Caver::MagicBombComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000286534 string=0x00000000001FBFB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicBombComponent::Update(Caver::MagicBombComponent *this, float a2)
{
  return Caver::MagicBombComponent::Update((Caver::MagicBombComponent *)((char *)this - 24), a2);
}

