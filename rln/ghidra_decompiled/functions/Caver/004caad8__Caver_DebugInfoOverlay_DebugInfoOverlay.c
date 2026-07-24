/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004caad8
 * Function: Caver::DebugInfoOverlay::DebugInfoOverlay
 * Signature: undefined __thiscall DebugInfoOverlay(DebugInfoOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::DebugInfoOverlay() */

void __thiscall Caver::DebugInfoOverlay::DebugInfoOverlay(DebugInfoOverlay *this)

{
  GUIView::GUIView((GUIView *)this);
                    /* catch() { ... } // from try @ 004caaac with catch @ 004caaf8 */
                    /* catch() { ... } // from try @ 004caa38 with catch @ 004caafc */
  *(undefined **)this = PTR_vtable_007e48e8 + 0x10;
  memset(this + 0xf0,0,0x58);
                    /* try { // try from 004cab10 to 005cab3f has its CatchHandler @ 004cab10
                       catch() { ... } // from try @ 004cab10 with catch @ 004cab10
                       catch() { ... } // from try @ 004cad3c with catch @ 004cab10 */
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  *(undefined4 *)(this + 0x154) = 0xbf800000;
  *(undefined8 *)(this + 0x158) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x160) = 0xffffffffffffffff;
  this[0xe5] = (DebugInfoOverlay)0x0;
  return;
}


