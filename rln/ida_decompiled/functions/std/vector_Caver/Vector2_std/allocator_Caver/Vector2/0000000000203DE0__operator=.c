/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203DE0
 * Mangled: ._ZNSt6vectorIN5Caver7Vector2ESaIS1_EEaSERKS3_
 * Demangled: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=(std::vector<Caver::Vector2,std::allocator<Caver::Vector2>> const&)
 *
 * Callers: 5
 *   0x00000000002BE92C  Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *   0x00000000002BEAB8  Caver::GroundPolygonComponent::SetPolygon(Caver::Polygon const&)
 *   0x00000000002BEC04  Caver::GroundPolygonComponent::SetDefaultValues(void)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002C0F30  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *
 * Callees: 1
 *   0x00000000002C0774  Caver::GroundPolygonComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203DE8 string=0x0000000000203DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::Vector2>::operator=()
{
  JUMPOUT(0x2C07CC);
}

