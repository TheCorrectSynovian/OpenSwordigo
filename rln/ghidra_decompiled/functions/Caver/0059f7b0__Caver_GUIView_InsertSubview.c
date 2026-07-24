/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f7b0
 * Function: Caver::GUIView::InsertSubview
 * Signature: undefined __thiscall InsertSubview(GUIView * this, _List_iterator param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::InsertSubview(std::_List_iterator<boost::shared_ptr<Caver::GUIView> >,
   boost::shared_ptr<Caver::GUIView> const&) */

void __thiscall Caver::GUIView::InsertSubview(GUIView *this,undefined8 param_2,long *param_3)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_3;
  if ((char)plVar2[10] == '\0') {
    pvVar1 = operator_new(0x20);
    *(long *)((long)pvVar1 + 0x10) = *param_3;
    lVar3 = param_3[1];
    *(long *)((long)pvVar1 + 0x18) = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    FUN_0062a9ac(pvVar1,param_2);
    plVar2 = (long *)*param_3;
  }
  else {
    *(undefined1 *)(plVar2 + 10) = 0;
  }
  plVar2[0xb] = (long)this;
  (**(code **)(*plVar2 + 0x80))(plVar2);
  if ((*(int *)(*param_3 + 0x70) != 0) && (DAT_00683734 < *(float *)(this + 0x8c))) {
                    /* catch() { ... } // from try @ 0059f434 with catch @ 0059f858
                       catch() { ... } // from try @ 0059f770 with catch @ 0059f858 */
                    /* catch() { ... } // from try @ 0059f90c with catch @ 0059f85c */
                    /* WARNING: Could not recover jumptable at 0x0059f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x58))(this);
    return;
  }
  return;
}


