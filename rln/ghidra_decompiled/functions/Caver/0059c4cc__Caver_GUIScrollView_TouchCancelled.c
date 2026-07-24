/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c4cc
 * Function: Caver::GUIScrollView::TouchCancelled
 * Signature: undefined __thiscall TouchCancelled(GUIScrollView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIScrollView::TouchCancelled(Caver::FWTouch const&) */

void __thiscall Caver::GUIScrollView::TouchCancelled(GUIScrollView *this,FWTouch *param_1)

{
  bool bVar1;
  
  if (*(long *)param_1 == *(long *)(this + 0x158)) {
                    /* catch() { ... } // from try @ 0059b274 with catch @ 0059c4f0 */
    if (((*(long **)(this + 0x1a0) != (long *)0x0) && (this[0x1b0] != (GUIScrollView)0x0)) &&
       (this[0x1b1] == (GUIScrollView)0x0)) {
      this[0x1b1] = (GUIScrollView)0x1;
      (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
      this[0x1b1] = (GUIScrollView)0x0;
    }
                    /* catch() { ... } // from try @ 0059b260 with catch @ 0059c528 */
                    /* catch() { ... } // from try @ 0059b248 with catch @ 0059c52c */
                    /* catch() { ... } // from try @ 0059b0ac with catch @ 0059c544 */
                    /* catch() { ... } // from try @ 0059b024 with catch @ 0059c548 */
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
                    /* catch() { ... } // from try @ 0059b018 with catch @ 0059c580 */
  return;
}


