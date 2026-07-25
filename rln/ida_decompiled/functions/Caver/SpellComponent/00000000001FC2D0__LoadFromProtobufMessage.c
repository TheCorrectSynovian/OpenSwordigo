/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC2D0
 * Mangled: ._ZN5Caver14SpellComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 5
 *   0x0000000000281EA8  Caver::DimensionSpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002825C0  Caver::FireBreathComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000283EC4  Caver::MagicBoltComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002858F4  Caver::MagicBombComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000289460  Caver::MagicHookshotComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x000000000028FAE4  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC2D8 string=0x00000000001FC2DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::LoadFromProtobufMessage(
        Caver::SpellComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver14SpellComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}

