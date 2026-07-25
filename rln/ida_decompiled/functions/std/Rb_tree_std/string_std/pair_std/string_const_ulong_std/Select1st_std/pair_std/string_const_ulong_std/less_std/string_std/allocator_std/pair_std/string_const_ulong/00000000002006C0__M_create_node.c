/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002006C0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_create_node(std::pair<std::string const,ulong> const&)
 *
 * Callers: 1
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003DF898  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_create_node(std::pair<std::string const,ulong> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002006C8 string=0x00000000002006CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_();
}

