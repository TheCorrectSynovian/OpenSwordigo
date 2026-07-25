/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F83C0
 * Mangled: ._ZN5Caver15EntityComponent10FlashModelERKNS_5ColorEf
 * Demangled: Caver::EntityComponent::FlashModel(Caver::Color const&,float)
 *
 * Callers: 1
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x0000000000268CD8  Caver::EntityComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F83C8 string=0x00000000001F83CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::EntityComponent::FlashModel()
{
  JUMPOUT(0x268E18);
}

