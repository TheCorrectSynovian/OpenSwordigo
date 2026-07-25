/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4530
 * Mangled: ._ZNK5Caver16OverlayComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::OverlayComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 2
 *   0x000000000022BABC  Caver::OverlayTargetArrowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000022D0C0  Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x000000000022B954  Caver::OverlayComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4534 string=0x000000000022B954 "sN"
 *   insn=0x00000000001F4538 string=0x00000000001F453C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::SaveToProtobufMessage(
        Caver::OverlayComponent *this,
        Caver::Proto::Component *a2)
{
  return _ZNK5Caver16OverlayComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE(this, a2);
}

