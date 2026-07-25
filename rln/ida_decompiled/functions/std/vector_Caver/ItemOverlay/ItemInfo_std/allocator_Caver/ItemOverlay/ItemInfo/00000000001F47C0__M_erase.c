/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F47C0
 * Mangled: ._ZNSt6vectorIN5Caver11ItemOverlay8ItemInfoESaIS2_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS2_S4_EE
 * Demangled: std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_erase(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>)
 *
 * Callers: 1
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003DF898  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_create_node(std::pair<std::string const,ulong> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F47C8 string=0x00000000001F47CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::ItemOverlay::ItemInfo>::_M_erase()
{
  JUMPOUT(0x3DF8FC);
}

