/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF0D4
 * Mangled: _ZNK5Caver16ShatterComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ShatterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
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
__int64 __fastcall Caver::ShatterComponent::SaveToProtobufMessage(
        Caver::ShatterComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::Component::SaveToProtobufMessage(this, a2);
}

