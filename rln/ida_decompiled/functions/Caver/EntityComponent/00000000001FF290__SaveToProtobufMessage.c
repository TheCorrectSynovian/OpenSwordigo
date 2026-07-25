/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF290
 * Mangled: ._ZNK5Caver15EntityComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 2
 *   0x0000000000272194  Caver::HeroEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027B1EC  Caver::MonsterEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x0000000000267D30  Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF298 string=0x00000000001FF29C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::SaveToProtobufMessage(
        Caver::EntityComponent *this,
        Caver::Proto::Component *a2)
{
  return _ZNK5Caver15EntityComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

