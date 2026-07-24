/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c3f8
 * Function: Caver::GUIScrollView::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUIScrollView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIScrollView::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUIScrollView::TouchEnded(GUIScrollView *this,FWTouch *param_1)

{
  bool bVar1;
  long *plVar2;
  
  if (*(long *)param_1 == *(long *)(this + 0x158)) {
    plVar2 = *(long **)(this + 0x1a0);
    if ((plVar2 != (long *)0x0) && (this[0x1b1] == (GUIScrollView)0x0)) {
                    /* try { // try from 0059c434 to 0069c8db has its CatchHandler @ 0059ac98 */
      this[0x1b1] = (GUIScrollView)0x1;
                    /* catch() { ... } // from try @ 0059b2ec with catch @ 0059c438 */
      if (this[0x1b0] == (GUIScrollView)0x0) {
                    /* catch() { ... } // from try @ 0059b298 with catch @ 0059c43c */
        (**(code **)*plVar2)(plVar2,param_1);
        plVar2 = *(long **)(this + 0x1a0);
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      this[0x1b1] = (GUIScrollView)0x0;
    }
                    /* catch() { ... } // from try @ 0059b288 with catch @ 0059c498 */
    if ((this[0x163] != (GUIScrollView)0x0) &&
       ((bVar1 = *(float *)(this + 0x10c) * *(float *)(this + 0x10c) +
                 *(float *)(this + 0x138) * *(float *)(this + 0x138) < DAT_0069705c,
        this[0x163] = (GUIScrollView)0x0, bVar1 || (_DAT_00683c38 < *(float *)(this + 0x16c))))) {
      this[0xfc] = (GUIScrollView)0x0;
      *(undefined4 *)(this + 0x10c) = 0;
      this[0x128] = (GUIScrollView)0x0;
      *(undefined4 *)(this + 0x138) = 0;
    }
    this[0x162] = (GUIScrollView)0x0;
    *(undefined8 *)(this + 0x158) = 0;
  }
  return;
}


