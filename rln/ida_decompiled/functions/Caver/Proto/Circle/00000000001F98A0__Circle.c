/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F98A0
 * Mangled: ._ZN5Caver5Proto6CircleC2Ev
 * Demangled: Caver::Proto::Circle::Circle(void)
 *
 * Callers: 3
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *   0x000000000030AF94  Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002CFA00  Caver::Proto::Box::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F98A8 string=0x00000000001F98AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Circle::Circle(Caver::Proto::Circle *this)
{
  JUMPOUT(0x2CFA58);
}

