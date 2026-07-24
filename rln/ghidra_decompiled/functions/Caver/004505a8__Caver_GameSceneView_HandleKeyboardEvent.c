/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004505a8
 * Function: Caver::GameSceneView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(GameSceneView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::GameSceneView::HandleKeyboardEvent(GameSceneView *this,GUIKeyboardEvent *param_1)

{
  int iVar1;
  GameSceneView GVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_drawDepth_007e6018;
  if (*(int *)(param_1 + 0xc) == 1) {
                    /* try { // try from 004505b8 to 005505cf has its CatchHandler @ 004505b8
                       catch() { ... } // from try @ 004505b8 with catch @ 004505b8
                       catch() { ... } // from try @ 004505d4 with catch @ 004505b8 */
    if ((*(uint *)(param_1 + 8) >> 3 & 1) == 0) {
      if ((*(uint *)(param_1 + 8) >> 5 & 1) != 0) {
        if (*(int *)(param_1 + 0x10) == 0x48) {
                    /* try { // try from 00450650 to 00550653 has its CatchHandler @ 00450664 */
                    /* try { // try from 00450654 to 00550677 has its CatchHandler @ 00450638 */
          CharControllerComponent::Hurt
                    (*(CharControllerComponent **)(*(long *)(this + 0xf0) + 0xe0));
          return;
        }
                    /* try { // try from 004505d0 to 005505d3 has its CatchHandler @ 004505e4 */
        if (*(int *)(param_1 + 0x10) == 0x44) {
                    /* try { // try from 004505d4 to 005505f7 has its CatchHandler @ 004505b8 */
          CharControllerComponent::Die(*(CharControllerComponent **)(*(long *)(this + 0xf0) + 0xe0))
          ;
          return;
        }
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 004505d0 with catch @ 004505e4 */
      if (iVar1 == 0x44) {
        if (*(long *)(this + 0xf0) != 0) {
          lVar4 = *(long *)(*(long *)(this + 0xf0) + 0x20);
                    /* try { // try from 00450610 to 00550613 has its CatchHandler @ 00450624 */
          if (*(char *)(lVar4 + 0x358) == '\0') {
            *(undefined1 *)(lVar4 + 0x358) = 1;
                    /* catch() { ... } // from try @ 00450650 with catch @ 00450664 */
            return;
          }
                    /* try { // try from 00450614 to 00550637 has its CatchHandler @ 004505f8 */
          if (*PTR_drawDepth_007e6018 != '\0') {
                    /* catch() { ... } // from try @ 00450610 with catch @ 00450624 */
            *(undefined1 *)(lVar4 + 0x358) = 0;
            *puVar3 = 0;
            return;
          }
          *PTR_drawDepth_007e6018 = 1;
          return;
        }
      }
      else if (iVar1 == 0x57) {
        GVar2 = this[0x1a2];
                    /* try { // try from 00450638 to 0055064f has its CatchHandler @ 00450638
                       catch() { ... } // from try @ 00450638 with catch @ 00450638
                       catch() { ... } // from try @ 00450654 with catch @ 00450638 */
        this[0x1a2] = (GameSceneView)((byte)GVar2 ^ 1);
        *(byte *)(*(long *)(*(long *)(this + 0xf0) + 0x20) + 0x404) = (byte)GVar2 ^ 1;
      }
      else {
                    /* try { // try from 004505f8 to 0055060f has its CatchHandler @ 004505f8
                       catch() { ... } // from try @ 004505f8 with catch @ 004505f8
                       catch() { ... } // from try @ 00450614 with catch @ 004505f8 */
        if (iVar1 == 0x49) {
          ToggleDebugInfo(this);
          return;
        }
      }
    }
  }
  return;
}


