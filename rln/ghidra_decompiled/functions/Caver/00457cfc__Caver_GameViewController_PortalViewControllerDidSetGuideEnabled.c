/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457cfc
 * Function: Caver::GameViewController::PortalViewControllerDidSetGuideEnabled
 * Signature: undefined __thiscall PortalViewControllerDidSetGuideEnabled(GameViewController * this, PortalViewController * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(Caver::PortalViewController*,
   bool) */

void __thiscall
Caver::GameViewController::PortalViewControllerDidSetGuideEnabled
          (GameViewController *this,PortalViewController *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x40);
                    /* try { // try from 00457d00 to 00557d07 has its CatchHandler @ 00457d10 */
                    /* try { // try from 00457d08 to 00557d13 has its CatchHandler @ 00457b80 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00457d00 with catch @ 00457d10
                        */
  *(bool *)(lVar1 + 0x1c8) = param_2;
                    /* try { // try from 00457d14 to 00557d9f has its CatchHandler @ 00457d14
                       catch() { ... } // from try @ 00457d14 with catch @ 00457d14
                       catch() { ... } // from try @ 00457db4 with catch @ 00457d14
                       catch() { ... } // from try @ 00457e8c with catch @ 00457d14
                       catch() { ... } // from try @ 00457f34 with catch @ 00457d14 */
  *(undefined1 *)(lVar1 + 0x1c9) = 1;
  UpdateGuideTarget(this + -0x68,false);
  return;
}


