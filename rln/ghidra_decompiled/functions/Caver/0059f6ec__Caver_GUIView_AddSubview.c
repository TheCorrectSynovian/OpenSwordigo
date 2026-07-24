/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f6ec
 * Function: Caver::GUIView::AddSubview
 * Signature: undefined __thiscall AddSubview(GUIView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::AddSubview(boost::shared_ptr<Caver::GUIView> const&) */

void __thiscall Caver::GUIView::AddSubview(GUIView *this,shared_ptr *param_1)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)param_1;
  if ((char)plVar2[10] == '\0') {
    pvVar1 = operator_new(0x20);
    *(undefined8 *)((long)pvVar1 + 0x10) = *(undefined8 *)param_1;
    lVar3 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 0059f098 with catch @ 0059f730 */
    *(long *)((long)pvVar1 + 0x18) = lVar3;
                    /* catch() { ... } // from try @ 0059ef40 with catch @ 0059f734
                       catch() { ... } // from try @ 0059f1c0 with catch @ 0059f734 */
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0059ef5c with catch @ 0059f73c
                       catch() { ... } // from try @ 0059ef94 with catch @ 0059f73c */
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    FUN_0062a9ac(pvVar1,this + 0x20);
                    /* catch() { ... } // from try @ 0059efd0 with catch @ 0059f74c
                       catch() { ... } // from try @ 0059f0ec with catch @ 0059f74c
                       catch() { ... } // from try @ 0059f16c with catch @ 0059f74c */
    plVar2 = *(long **)param_1;
  }
  else {
    *(undefined1 *)(plVar2 + 10) = 0;
  }
  plVar2[0xb] = (long)this;
  (**(code **)(*plVar2 + 0x80))(plVar2);
                    /* try { // try from 0059f770 to 0069f797 has its CatchHandler @ 0059f858 */
  if ((*(int *)(*(long *)param_1 + 0x70) != 0) && (DAT_00683734 < *(float *)(this + 0x8c))) {
                    /* try { // try from 0059f798 to 0069f85b has its CatchHandler @ 0059edcc */
                    /* WARNING: Could not recover jumptable at 0x0059f79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x58))(this);
    return;
  }
  return;
}


