/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4850
 * Mangled: ._ZN5Caver15EntityComponentC2Ev
 * Demangled: Caver::EntityComponent::EntityComponent(void)
 *
 * Callers: 3
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *   0x000000000027AE80  Caver::ManaComponent::className(void)
 *   0x000000000027DBA4  Caver::MonsterEntityComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000267BEC  Caver::EntityComponent::EntityComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4858 string=0x00000000001F485C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::EntityComponent(Caver::EntityComponent *this)
{
  return _ZN5Caver15EntityComponentC2Ev(this);
}

