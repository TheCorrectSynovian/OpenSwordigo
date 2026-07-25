/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC020
 * Mangled: ._ZN5Caver19HeroEntityComponent6UpdateEf
 * Demangled: Caver::HeroEntityComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000272D08  `non-virtual thunk to'Caver::HeroEntityComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC028 string=0x00000000001FC02C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::HeroEntityComponent::Update(Caver::HeroEntityComponent *this, float a2)
{
  JUMPOUT(0x272C10);
}

