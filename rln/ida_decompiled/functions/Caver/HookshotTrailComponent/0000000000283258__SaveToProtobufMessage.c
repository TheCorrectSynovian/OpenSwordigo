/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283258
 * Mangled: _ZNK5Caver22HookshotTrailComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::HookshotTrailComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE0B0  Caver::GlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::SaveToProtobufMessage(
        Caver::HookshotTrailComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::GlowComponent::SaveToProtobufMessage(this, a2);
}

