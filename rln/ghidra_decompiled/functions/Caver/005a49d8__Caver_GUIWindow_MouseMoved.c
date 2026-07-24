/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a49d8
 * Function: Caver::GUIWindow::MouseMoved
 * Signature: undefined __thiscall MouseMoved(GUIWindow * this, Vector2 * param_1, Vector2 * param_2, uint param_3, double param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GUIWindow::MouseMoved(Caver::Vector2 const&, Caver::Vector2 const&,
   unsigned int, double) */

void __thiscall
Caver::GUIWindow::MouseMoved
          (GUIWindow *this,Vector2 *param_1,Vector2 *param_2,uint param_3,double param_4)

{
  MouseMoved(this + -0xf0,param_1,param_2,param_3,param_4);
  return;
}


