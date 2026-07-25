/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B66D0
 * Mangled: _ZNK5Caver27RotatingBackgroundComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::RotatingBackgroundComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F39D0  Caver::BackgroundComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B66D0 string=0x00000000001F39D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::RotatingBackgroundComponent::SaveToProtobufMessage(
        Caver::RotatingBackgroundComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::BackgroundComponent::SaveToProtobufMessage();
}

