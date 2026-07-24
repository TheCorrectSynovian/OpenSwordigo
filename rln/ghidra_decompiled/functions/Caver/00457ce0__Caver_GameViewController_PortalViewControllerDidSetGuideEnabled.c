/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457ce0
 * Function: Caver::GameViewController::PortalViewControllerDidSetGuideEnabled
 * Signature: undefined __thiscall PortalViewControllerDidSetGuideEnabled(GameViewController * this, PortalViewController * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::PortalViewControllerDidSetGuideEnabled(Caver::PortalViewController*,
   bool) */

void __thiscall
Caver::GameViewController::PortalViewControllerDidSetGuideEnabled
          (GameViewController *this,PortalViewController *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xa8);
  *(bool *)(lVar1 + 0x1c8) = param_2;
  *(undefined1 *)(lVar1 + 0x1c9) = 1;
  UpdateGuideTarget(this,false);
  return;
}


