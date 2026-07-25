/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9200
 * Mangled: ._ZNK5Caver14ShapeComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x0000000000217DC4  Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9208 string=0x00000000001F920C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ShapeComponent::SaveToProtobufMessage()
{
  JUMPOUT(0x2371FC);
}

