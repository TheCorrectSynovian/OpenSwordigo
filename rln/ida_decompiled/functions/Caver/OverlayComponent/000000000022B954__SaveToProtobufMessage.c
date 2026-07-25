/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B954
 * Mangled: _ZNK5Caver16OverlayComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::OverlayComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000001F4530  Caver::OverlayComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::SaveToProtobufMessage(
        Caver::OverlayComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::Component::SaveToProtobufMessage(this, a2);
}

