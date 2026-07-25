/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202430
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver8GUILabelEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x0000000000431F0C  std::map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202438 string=0x000000000020243C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::GUILabel>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver8GUILabelEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

