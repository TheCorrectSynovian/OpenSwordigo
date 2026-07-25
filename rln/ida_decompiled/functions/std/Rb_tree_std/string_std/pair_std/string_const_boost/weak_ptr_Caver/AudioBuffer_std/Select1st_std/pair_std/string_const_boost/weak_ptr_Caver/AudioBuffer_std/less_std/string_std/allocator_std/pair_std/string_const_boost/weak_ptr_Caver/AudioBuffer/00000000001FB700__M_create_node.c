/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB700
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver11AudioBufferEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>> const&)
 *
 * Callers: 1
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004876C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB708 string=0x00000000001FB70C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8weak_ptrIN5Caver11AudioBufferEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_();
}

