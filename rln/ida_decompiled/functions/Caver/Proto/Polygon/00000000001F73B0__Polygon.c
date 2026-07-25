/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F73B0
 * Mangled: ._ZN5Caver5Proto7PolygonC2Ev
 * Demangled: Caver::Proto::Polygon::Polygon(void)
 *
 * Callers: 6
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BEF94  Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x00000000003063B0  Caver::Proto::GroundPolygonComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *   0x000000000030AF94  Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D0148  Caver::Proto::Circle::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F73B8 string=0x00000000001F73BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon *this)
{
  JUMPOUT(0x2D01A0);
}

