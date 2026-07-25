/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9940
 * Mangled: ._ZNSt6vectorIN5Caver7PolygonESaIS1_EE9push_backERKS1_
 * Demangled: std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back(Caver::Polygon const&)
 *
 * Callers: 1
 *   0x00000000002BFAB8  Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 1
 *   0x00000000002BFFA8  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back(Caver::Polygon const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9948 string=0x00000000001F994C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::Polygon>::push_back()
{
  return _ZNSt6vectorIN5Caver7PolygonESaIS1_EE9push_backERKS1_();
}

