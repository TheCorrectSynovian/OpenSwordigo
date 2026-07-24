/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059187c
 * Function: Caver::GUIAlertView::AddCustomView
 * Signature: undefined __thiscall AddCustomView(GUIAlertView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::AddCustomView(boost::shared_ptr<Caver::GUIView> const&) */

void __thiscall Caver::GUIAlertView::AddCustomView(GUIAlertView *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)this + 0x60))();
  puVar1 = *(undefined8 **)(this + 400);
                    /* catch() { ... } // from try @ 00590538 with catch @ 005918a0 */
                    /* catch() { ... } // from try @ 00590570 with catch @ 005918a4
                       catch() { ... } // from try @ 00590abc with catch @ 005918a4 */
  if (puVar1 == *(undefined8 **)(this + 0x198)) {
    std::vector<boost::shared_ptr<Caver::GUIView>,std::allocator<boost::shared_ptr<Caver::GUIView>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUIView>,std::allocator<boost::shared_ptr<Caver::GUIView>>>
                     *)(this + 0x188),puVar1,param_1);
  }
  else {
    *puVar1 = *(undefined8 *)param_1;
    lVar2 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 00590530 with catch @ 005918b4
                       catch() { ... } // from try @ 00590ae0 with catch @ 005918b4 */
    puVar1[1] = lVar2;
                    /* catch() { ... } // from try @ 005907c8 with catch @ 005918b8
                       catch() { ... } // from try @ 00590860 with catch @ 005918b8 */
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    *(undefined8 **)(this + 400) = puVar1 + 2;
  }
  UpdateLayout(this);
  return;
}


