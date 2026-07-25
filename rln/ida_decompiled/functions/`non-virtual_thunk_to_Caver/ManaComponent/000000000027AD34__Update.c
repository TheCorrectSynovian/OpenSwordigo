/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AD34
 * Mangled: _ZThn24_N5Caver13ManaComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ManaComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD2B0  Caver::ManaComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000027AD34 string=0x000000000027AD38 "^\t"
 *   insn=0x000000000027AD38 string=0x00000000001FD2B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ManaComponent::Update(Caver::ManaComponent *this, float a2)
{
  return Caver::ManaComponent::Update((Caver::ManaComponent *)((char *)this - 24), a2);
}

