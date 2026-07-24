/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f874
 * Function: Caver::GUIView::InsertSubviewBelowSubview
 * Signature: undefined __thiscall InsertSubviewBelowSubview(GUIView * this, shared_ptr * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::InsertSubviewBelowSubview(boost::shared_ptr<Caver::GUIView> const&,
   Caver::GUIView*) */

void __thiscall
Caver::GUIView::InsertSubviewBelowSubview(GUIView *this,shared_ptr *param_1,GUIView *param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  GUIView *pGVar4;
  
                    /* try { // try from 0059f874 to 0069f87b has its CatchHandler @ 0059f918 */
  pGVar4 = *(GUIView **)(this + 0x20);
  while( true ) {
    if (this + 0x20 == pGVar4) {
      return;
    }
    if (*(GUIView **)(pGVar4 + 0x10) == param_2) break;
                    /* try { // try from 0059f8a8 to 0069f8b3 has its CatchHandler @ 0059f8c0 */
    pGVar4 = *(GUIView **)pGVar4;
  }
  plVar1 = *(long **)param_1;
                    /* catch() { ... } // from try @ 0059f8a8 with catch @ 0059f8c0 */
  if ((char)plVar1[10] == '\0') {
    pvVar2 = operator_new(0x20);
    *(undefined8 *)((long)pvVar2 + 0x10) = *(undefined8 *)param_1;
    lVar3 = *(long *)(param_1 + 8);
    *(long *)((long)pvVar2 + 0x18) = lVar3;
                    /* try { // try from 0059f8e4 to 0069f90b has its CatchHandler @ 0059f914 */
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    FUN_0062a9ac(pvVar2,pGVar4);
    plVar1 = *(long **)param_1;
  }
  else {
    *(undefined1 *)(plVar1 + 10) = 0;
  }
  plVar1[0xb] = (long)this;
                    /* try { // try from 0059f90c to 0069f927 has its CatchHandler @ 0059f85c */
  (**(code **)(*plVar1 + 0x80))();
                    /* catch() { ... } // from try @ 0059f8e4 with catch @ 0059f914 */
                    /* catch() { ... } // from try @ 0059f874 with catch @ 0059f918 */
  if (*(int *)(*(long *)param_1 + 0x70) == 0) {
    return;
  }
                    /* try { // try from 0059f928 to 0069f933 has its CatchHandler @ 0059f934 */
  if (*(float *)(this + 0x8c) <= DAT_00683734) {
    return;
  }
                    /* catch() { ... } // from try @ 0059f928 with catch @ 0059f934 */
                    /* try { // try from 0059f938 to 0069f93b has its CatchHandler @ 0059f940 */
                    /* catch() { ... } // from try @ 0059f938 with catch @ 0059f940 */
                    /* try { // try from 0059f944 to 0069f97b has its CatchHandler @ 0059f944
                       catch() { ... } // from try @ 0059f944 with catch @ 0059f944
                       catch() { ... } // from try @ 0059f980 with catch @ 0059f944
                       catch() { ... } // from try @ 0059fa20 with catch @ 0059f944
                       catch() { ... } // from try @ 0059fb30 with catch @ 0059f944 */
                    /* WARNING: Could not recover jumptable at 0x0059f948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x58))(this);
  return;
}


