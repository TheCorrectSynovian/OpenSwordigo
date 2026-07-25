/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC070
 * Mangled: ._ZN5Caver15EntityComponent6UpdateEf
 * Demangled: Caver::EntityComponent::Update(float)
 *
 * Callers: 3
 *   0x0000000000268FE8  `non-virtual thunk to'Caver::EntityComponent::Update(float)
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *   0x000000000027BF1C  Caver::MonsterEntityComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000268EB4  Caver::EntityComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC078 string=0x00000000001FC07C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::Update(Caver::EntityComponent *this, float a2)
{
  return _ZN5Caver15EntityComponent6UpdateEf(this, a2);
}

