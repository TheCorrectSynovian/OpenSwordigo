/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA9F0
 * Mangled: ._ZNSt4pairIKSsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS4_EEED2Ev
 * Demangled: std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>::~pair()
 *
 * Callers: 1
 *   0x00000000004337FC  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>> *)
 *
 * Callees: 1
 *   0x0000000000433850  std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>::~pair()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA9F8 string=0x00000000001FA9FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>::~pair()
{
  return _ZNSt4pairIKSsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS4_EEED2Ev();
}

