/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE310
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE15_M_insert_equalERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *
 * Callers: 1
 *   0x0000000000485478  Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&)
 *
 * Callees: 1
 *   0x0000000000487190  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE318 string=0x00000000001FE31C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SoundEffectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE15_M_insert_equalERKS7_();
}

