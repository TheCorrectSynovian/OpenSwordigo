/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E00
 * Mangled: ._ZNK5Caver14SpellComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 5
 *   0x0000000000281EAC  Caver::DimensionSpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000282714  Caver::FireBreathComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000284030  Caver::MagicBoltComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028598C  Caver::MagicBombComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002895F8  Caver::MagicHookshotComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x000000000028FB40  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E08 string=0x00000000001F4E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::SaveToProtobufMessage(
        Caver::SpellComponent *this,
        Caver::Proto::Component *a2)
{
  return _ZNK5Caver14SpellComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

