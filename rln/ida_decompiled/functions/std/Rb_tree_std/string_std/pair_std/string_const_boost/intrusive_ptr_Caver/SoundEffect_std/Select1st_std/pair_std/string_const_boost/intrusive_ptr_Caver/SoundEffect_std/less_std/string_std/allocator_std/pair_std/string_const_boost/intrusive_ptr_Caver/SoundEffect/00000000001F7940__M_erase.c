/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7940
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *
 * Callers: 3
 *   0x00000000004853D0  Caver::SoundLibrary::SetSharedLibrary(Caver::SoundLibrary*)
 *   0x0000000000485AAC  Caver::SoundLibrary::Clear(void)
 *   0x0000000000486CB8  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *
 * Callees: 1
 *   0x0000000000486CB8  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7948 string=0x00000000001F794C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E();
}

