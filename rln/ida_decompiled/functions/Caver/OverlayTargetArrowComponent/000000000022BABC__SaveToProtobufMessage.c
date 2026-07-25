/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BABC
 * Mangled: _ZNK5Caver27OverlayTargetArrowComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::OverlayTargetArrowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4530  Caver::OverlayComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x000000000022BABC string=0x00000000001F4530 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTargetArrowComponent::SaveToProtobufMessage(
        Caver::OverlayTargetArrowComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::OverlayComponent::SaveToProtobufMessage(this, a2);
}

