/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D30
 * Mangled: ._ZN5Caver15EntityComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 2
 *   0x0000000000272138  Caver::HeroEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000027B148  Caver::MonsterEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000267CE4  Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D38 string=0x00000000001F4D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::LoadFromProtobufMessage(
        Caver::EntityComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver15EntityComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

