/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F67B0
 * Mangled: ._ZN9__gnu_cxx13new_allocatorIN5Caver10QuestsView10LabelGroupEE9constructEPS3_RKS3_
 * Demangled: __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct(Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup const&)
 *
 * Callers: 2
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x0000000000434510  std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *
 * Callees: 1
 *   0x0000000000434510  std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F67B8 string=0x00000000001F67BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct()
{
  JUMPOUT(0x4349CC);
}

