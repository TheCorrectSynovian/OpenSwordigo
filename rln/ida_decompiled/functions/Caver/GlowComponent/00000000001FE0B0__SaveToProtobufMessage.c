/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE0B0
 * Mangled: ._ZNK5Caver13GlowComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::GlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 4
 *   0x0000000000283258  Caver::HookshotTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AD7D8  Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002AF810  Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002CA9B4  Caver::WeaponGlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002A352C  Caver::GlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE0B4 string=0x00000000002A352C "}o"
 *   insn=0x00000000001FE0B8 string=0x00000000001FE0BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::SaveToProtobufMessage(Caver::GlowComponent *this, Caver::Proto::Component *a2)
{
  return _ZNK5Caver13GlowComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

