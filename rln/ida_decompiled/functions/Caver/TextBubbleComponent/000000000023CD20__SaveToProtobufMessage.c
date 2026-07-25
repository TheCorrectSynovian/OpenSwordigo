/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CD20
 * Mangled: _ZNK5Caver19TextBubbleComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::TextBubbleComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextBubbleComponent::SaveToProtobufMessage(
        Caver::TextBubbleComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::Component::SaveToProtobufMessage(this, a2);
}

