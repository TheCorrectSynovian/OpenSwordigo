/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8330
 * Mangled: ._ZN5Caver15EntityComponent7PrepareEv
 * Demangled: Caver::EntityComponent::Prepare(void)
 *
 * Callers: 2
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000268C2C  Caver::EntityComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8338 string=0x00000000001F833C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::Prepare(Caver::EntityComponent *this)
{
  return _ZN5Caver15EntityComponent7PrepareEv(this);
}

