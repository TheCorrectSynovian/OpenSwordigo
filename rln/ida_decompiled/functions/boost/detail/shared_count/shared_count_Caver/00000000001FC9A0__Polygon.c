/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC9A0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver7PolygonEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Polygon>(Caver::Polygon *)
 *
 * Callers: 2
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C0134  Caver::Shape::ShapeWithPolygon(Caver::Polygon const&)
 *
 * Callees: 1
 *   0x0000000000239728  boost::detail::shared_count::shared_count<Caver::Polygon>(Caver::Polygon *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC9A8 string=0x00000000001FC9AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Polygon>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver7PolygonEEEPT_();
}

