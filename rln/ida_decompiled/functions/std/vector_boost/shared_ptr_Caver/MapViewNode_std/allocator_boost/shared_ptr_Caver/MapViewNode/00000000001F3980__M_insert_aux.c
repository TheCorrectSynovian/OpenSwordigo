/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3980
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver11MapViewNodeEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapViewNode>*,std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>>,boost::shared_ptr<Caver::MapViewNode> const&)
 *
 * Callers: 1
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 1
 *   0x0000000000429238  std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapViewNode>*,std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>>,boost::shared_ptr<Caver::MapViewNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3988 string=0x00000000001F398C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::MapViewNode>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver11MapViewNodeEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

