/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200290
 * Mangled: ._ZN5Caver15EntityComponent17InitWithComponentEPKS0_
 * Demangled: Caver::EntityComponent::InitWithComponent(Caver::EntityComponent const*)
 *
 * Callers: 2
 *   0x0000000000272028  Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *   0x000000000027AF5C  Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*)
 *
 * Callees: 1
 *   0x0000000000267BEC  Caver::EntityComponent::EntityComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200298 string=0x000000000020029C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::EntityComponent::InitWithComponent()
{
  JUMPOUT(0x267CA0);
}

