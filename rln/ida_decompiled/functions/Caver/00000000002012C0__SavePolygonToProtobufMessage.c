/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002012C0
 * Mangled: ._ZN5Caver28SavePolygonToProtobufMessageERKNS_7PolygonEPNS_5Proto7PolygonE
 * Demangled: Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *
 * Callers: 2
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BEF94  Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x0000000000489E98  Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002012C8 string=0x00000000002012CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SavePolygonToProtobufMessage(
        Caver *this,
        const Caver::Polygon *a2,
        Caver::Proto::Polygon *a3)
{
  return _ZN5Caver28SavePolygonToProtobufMessageERKNS_7PolygonEPNS_5Proto7PolygonE(this, a2, a3);
}

