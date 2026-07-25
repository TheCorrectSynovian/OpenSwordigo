/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD20
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Callees: 1
 *   0x00000000004A8450  std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDD28 string=0x00000000001FDD2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

