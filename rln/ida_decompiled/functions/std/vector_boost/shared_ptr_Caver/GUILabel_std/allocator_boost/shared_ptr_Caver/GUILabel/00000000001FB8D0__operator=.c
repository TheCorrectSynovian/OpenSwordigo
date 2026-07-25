/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB8D0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver8GUILabelEEESaIS4_EEaSERKS6_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::operator=(std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>> const&)
 *
 * Callers: 1
 *   0x0000000000434510  std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *
 * Callees: 1
 *   0x0000000000434AC4  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::operator=(std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB8D8 string=0x00000000001FB8DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::GUILabel>>::operator=()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver8GUILabelEEESaIS4_EEaSERKS6_();
}

