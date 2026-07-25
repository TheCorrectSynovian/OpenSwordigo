/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3990
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver7TextureEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>> const&)
 *
 * Callers: 1
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004CE54C  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3998 string=0x00000000001F399C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver7TextureEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_();
}

