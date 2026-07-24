/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003011b0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>
 * Signature: LabelGroup * __cdecl __uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>(__normal_iterator param_1, __normal_iterator param_2, LabelGroup * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


LabelGroup *
std::__uninitialized_copy<false>::
__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>
          (void)

{
  LabelGroup *pLVar1;
  
  pLVar1 = (LabelGroup *)
           (*(code *)
             PTR___uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>_007e3108
           )();
  return pLVar1;
}


