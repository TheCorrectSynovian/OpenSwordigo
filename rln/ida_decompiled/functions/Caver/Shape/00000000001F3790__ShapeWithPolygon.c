/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3790
 * Mangled: ._ZN5Caver5Shape16ShapeWithPolygonERKNS_7PolygonE
 * Demangled: Caver::Shape::ShapeWithPolygon(Caver::Polygon const&)
 *
 * Callers: 1
 *   0x00000000002BFAB8  Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 1
 *   0x00000000002C0134  Caver::Shape::ShapeWithPolygon(Caver::Polygon const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3798 string=0x00000000001F379C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Shape::ShapeWithPolygon(Caver::Shape *this, const Caver::Polygon *a2)
{
  return _ZN5Caver5Shape16ShapeWithPolygonERKNS_7PolygonE(this, a2);
}

