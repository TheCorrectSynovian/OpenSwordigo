/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA7D0
 * Mangled: ._ZNSt3mapISsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS3_EESt4lessISsESaISt4pairIKSsS5_EEEixERS9_
 * Demangled: std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x0000000000432350  std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA7D8 string=0x00000000001FA7DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,std::vector<Caver::QuestsView::LabelGroup>>::operator[]()
{
  return _ZNSt3mapISsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS3_EESt4lessISsESaISt4pairIKSsS5_EEEixERS9_();
}

