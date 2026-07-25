/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002034F0
 * Mangled: ._ZNSt4listIN5Caver12TargetActionIFvbRKSsEEESaIS5_EE5eraseESt14_List_iteratorIS5_E
 * Demangled: std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *
 * Callers: 1
 *   0x00000000004BAE14  Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool)
 *
 * Callees: 1
 *   0x00000000004BB450  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *
 * Referenced strings: 1
 *   insn=0x00000000002034F8 string=0x00000000002034FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::list<Caver::TargetAction<void ()(bool,std::string const&)>>::erase()
{
  return _ZNSt4listIN5Caver12TargetActionIFvbRKSsEEESaIS5_EE5eraseESt14_List_iteratorIS5_E();
}

