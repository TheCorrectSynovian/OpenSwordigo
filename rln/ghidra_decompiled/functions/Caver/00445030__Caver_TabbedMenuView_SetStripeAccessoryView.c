/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445030
 * Function: Caver::TabbedMenuView::SetStripeAccessoryView
 * Signature: undefined __thiscall SetStripeAccessoryView(TabbedMenuView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::SetStripeAccessoryView(boost::shared_ptr<Caver::GUIView> const&) */

void __thiscall
Caver::TabbedMenuView::SetStripeAccessoryView(TabbedMenuView *this,shared_ptr *param_1)

{
  TabbedMenuView *pTVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 00444f4c with catch @ 00445030 */
                    /* try { // try from 00445044 to 00545047 has its CatchHandler @ 00445048 */
                    /* catch() { ... } // from try @ 00445044 with catch @ 00445048 */
  plVar3 = *(long **)param_1;
                    /* try { // try from 0044504c to 0054504f has its CatchHandler @ 00445058 */
  plVar2 = *(long **)(this + 0x178);
                    /* try { // try from 00445050 to 0054505b has its CatchHandler @ 00444f18 */
  if (plVar3 != plVar2) {
                    /* catch() { ... } // from try @ 0044504c with catch @ 00445058 */
    if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004450b4 with catch @ 0044505c
                       catch() { ... } // from try @ 0044513c with catch @ 0044505c */
      (**(code **)(*plVar2 + 0x78))();
      plVar3 = *(long **)param_1;
    }
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    }
    plVar2 = *(long **)(this + 0x180);
    pTVar1 = this + 0x178;
    *(long **)(this + 0x178) = plVar3;
    *(long *)(this + 0x180) = lVar4;
                    /* try { // try from 00445090 to 005450b3 has its CatchHandler @ 0044510c */
    if ((plVar2 != (long *)0x0) && (lVar4 = plVar2[1], plVar2[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar4 = plVar2[2];
                    /* try { // try from 004450b4 to 0054512f has its CatchHandler @ 0044505c */
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        if (*(long *)pTVar1 == 0) {
          return;
        }
        goto LAB_004450c8;
      }
    }
    if (*(long *)pTVar1 != 0) {
LAB_004450c8:
      (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),pTVar1);
      UpdateContentLayout(this);
      return;
    }
  }
                    /* catch() { ... } // from try @ 00445090 with catch @ 0044510c */
  return;
}


