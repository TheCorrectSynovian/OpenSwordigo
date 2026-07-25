/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA70
 * Mangled: ._ZNSt6vectorIN5Caver10QuestsView10LabelGroupESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *
 * Callers: 1
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 1
 *   0x0000000000434510  std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBA78 string=0x00000000001FBA7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::QuestsView::LabelGroup>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver10QuestsView10LabelGroupESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_();
}

