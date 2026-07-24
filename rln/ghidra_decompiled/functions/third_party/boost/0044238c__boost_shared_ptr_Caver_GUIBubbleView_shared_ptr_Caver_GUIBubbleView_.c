/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044238c
 * Function: boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>
 * Signature: undefined __thiscall shared_ptr<Caver::GUIBubbleView>(shared_ptr<Caver::GUIBubbleView> * this, GUIBubbleView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>(Caver::GUIBubbleView*)
    */

void __thiscall
boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>
          (shared_ptr<Caver::GUIBubbleView> *this,GUIBubbleView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00442398 to 005423cf has its CatchHandler @ 00442428 */
  *(GUIBubbleView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4a70;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
                    /* try { // try from 004423d0 to 00542487 has its CatchHandler @ 004422d0 */
  if (param_1 != (GUIBubbleView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


