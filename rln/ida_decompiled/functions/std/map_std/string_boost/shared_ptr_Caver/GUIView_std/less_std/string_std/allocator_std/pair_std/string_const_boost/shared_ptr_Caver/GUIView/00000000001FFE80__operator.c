/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE80
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver7GUIViewEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003D72E4  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000003D3D94  std::map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE88 string=0x00000000001FFE8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::GUIView>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver7GUIViewEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

