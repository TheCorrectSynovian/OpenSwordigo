/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF240
 * Mangled: ._ZN5Caver15EntityComponent13HandleMessageEiPv
 * Demangled: Caver::EntityComponent::HandleMessage(int,void *)
 *
 * Callers: 2
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x0000000000269460  Caver::EntityComponent::HandleMessage(int,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF248 string=0x00000000001FF24C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::HandleMessage(Caver::EntityComponent *this, int a2, void *a3)
{
  return _ZN5Caver15EntityComponent13HandleMessageEiPv(this, a2, a3);
}

