/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A60
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE4findERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::find(std::string const&)
 *
 * Callers: 1
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003DEFFC  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::find(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A68 string=0x00000000001F9A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::find()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsmESt10_Select1stIS2_ESt4lessISsESaIS2_EE4findERS1_();
}

