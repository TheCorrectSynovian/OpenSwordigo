/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000240790
 * Mangled: _ZNK5Caver28TransformControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::TransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
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
__int64 __fastcall Caver::TransformControllerComponent::SaveToProtobufMessage(
        Caver::TransformControllerComponent *this,
        Caver::Proto::Component *a2)
{
  return Caver::Component::SaveToProtobufMessage(this, a2);
}

