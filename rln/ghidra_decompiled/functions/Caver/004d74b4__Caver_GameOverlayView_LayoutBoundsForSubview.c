/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d74b4
 * Function: Caver::GameOverlayView::LayoutBoundsForSubview
 * Signature: undefined __thiscall LayoutBoundsForSubview(GameOverlayView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&) */

void __thiscall
Caver::GameOverlayView::LayoutBoundsForSubview(GameOverlayView *this,string *param_1)

{
  int iVar1;
  
  iVar1 = FUN_006689e0(param_1,"left");
  if ((((iVar1 != 0) && (iVar1 = FUN_006689e0(param_1,"right"), iVar1 != 0)) &&
      (iVar1 = FUN_006689e0(param_1,"jump"), iVar1 != 0)) &&
     (((iVar1 = FUN_006689e0(param_1,"swing"), iVar1 != 0 &&
       (iVar1 = FUN_006689e0(param_1,"skill"), iVar1 != 0)) &&
      (iVar1 = FUN_006689e0(param_1,"consumables"), iVar1 != 0)))) {
                    /* catch() { ... } // from try @ 004d7580 with catch @ 004d7550 */
    GUIView::safeBounds();
    return;
  }
                    /* try { // try from 004d756c to 005d757f has its CatchHandler @ 004d75a4 */
  GUIView::controlBounds();
  return;
}


