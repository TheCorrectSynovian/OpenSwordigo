/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272D08
 * Mangled: _ZThn24_N5Caver19HeroEntityComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::HeroEntityComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC020  Caver::HeroEntityComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000272D0C string=0x00000000001FC020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::HeroEntityComponent::Update(Caver::HeroEntityComponent *this, float a2)
{
  Caver::HeroEntityComponent::Update((Caver::HeroEntityComponent *)((char *)this - 24), a2);
}

