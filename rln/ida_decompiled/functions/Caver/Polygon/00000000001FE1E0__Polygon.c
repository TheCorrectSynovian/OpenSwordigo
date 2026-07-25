/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE1E0
 * Mangled: ._ZN5Caver7PolygonC2EiPKNS_7Vector2Eb
 * Demangled: Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *
 * Callers: 3
 *   0x00000000002BEC04  Caver::GroundPolygonComponent::SetDefaultValues(void)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BFAB8  Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 1
 *   0x00000000004B02F8  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE1E8 string=0x00000000001FE1EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Polygon::Polygon(Caver::Polygon *this, int a2, const Caver::Vector2 *a3, bool a4)
{
  return _ZN5Caver7PolygonC2EiPKNS_7Vector2Eb(this, a2, a3, a4);
}

