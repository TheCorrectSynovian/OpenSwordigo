/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003033c0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>
 * Signature: LabelGroup * __cdecl __uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>(LabelGroup * param_1, LabelGroup * param_2, LabelGroup * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


LabelGroup *
std::__uninitialized_copy<false>::
__uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>
          (LabelGroup *param_1,LabelGroup *param_2,LabelGroup *param_3)

{
  LabelGroup *pLVar1;
  
  pLVar1 = (LabelGroup *)
           (*(code *)
             PTR___uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>_007e4210
           )();
  return pLVar1;
}


