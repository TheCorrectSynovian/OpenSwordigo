/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD540
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS2_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>,std::string const&)
 *
 * Callers: 1
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003DF118  std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>,Caver::ItemOverlay::ItemInfo const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD548 string=0x00000000001FD54C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_get_insert_hint_unique_pos()
{
  JUMPOUT(0x3DF520);
}

