/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3430
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver11MapViewNodeEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MapViewNode>(Caver::MapViewNode *)
 *
 * Callers: 1
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 1
 *   0x0000000000429048  std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>>(ulong,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3438 string=0x00000000001F343C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::MapViewNode>()
{
  JUMPOUT(0x4290D0);
}

