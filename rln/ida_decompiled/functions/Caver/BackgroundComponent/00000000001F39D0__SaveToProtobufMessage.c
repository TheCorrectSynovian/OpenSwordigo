/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F39D0
 * Mangled: ._ZNK5Caver19BackgroundComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::BackgroundComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000002B66D0  Caver::RotatingBackgroundComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x000000000021D77C  Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F39D8 string=0x00000000001F39DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::BackgroundComponent::SaveToProtobufMessage()
{
  JUMPOUT(0x21D87C);
}

