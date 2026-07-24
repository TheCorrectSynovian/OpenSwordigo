/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00534dd0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>
 * Signature: LabelGroup * __cdecl __uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>(LabelGroup * param_1, LabelGroup * param_2, LabelGroup * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::LabelGroup*
   std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup*,
   Caver::QuestsView::LabelGroup*>(Caver::QuestsView::LabelGroup*, Caver::QuestsView::LabelGroup*,
   Caver::QuestsView::LabelGroup*) */

LabelGroup *
std::__uninitialized_copy<false>::
__uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>
          (LabelGroup *param_1,LabelGroup *param_2,LabelGroup *param_3)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00534da4 with catch @ 00534ddc */
  if (param_1 != param_2) {
    lVar1 = 0;
    do {
      _Construct<Caver::QuestsView::LabelGroup,Caver::QuestsView::LabelGroup>
                (param_3 + lVar1,param_1 + lVar1);
      lVar1 = lVar1 + 0x38;
    } while ((long)param_2 - (long)param_1 != lVar1);
    param_3 = param_3 + lVar1;
  }
                    /* catch() { ... } // from try @ 00534e5c with catch @ 00534e14 */
  return param_3;
}


