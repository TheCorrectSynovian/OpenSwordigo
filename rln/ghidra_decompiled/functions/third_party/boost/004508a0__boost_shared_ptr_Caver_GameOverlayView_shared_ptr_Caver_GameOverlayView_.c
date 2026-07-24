/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004508a0
 * Function: boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>
 * Signature: undefined __thiscall shared_ptr<Caver::GameOverlayView>(shared_ptr<Caver::GameOverlayView> * this, GameOverlayView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView*)
    */

void __thiscall
boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>
          (shared_ptr<Caver::GameOverlayView> *this,GameOverlayView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00450890 with catch @ 004508a4 */
  *(GameOverlayView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 004508b8 to 005508cf has its CatchHandler @ 004508b8
                       catch() { ... } // from try @ 004508b8 with catch @ 004508b8
                       catch() { ... } // from try @ 004508d4 with catch @ 004508b8 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e51c8;
                    /* try { // try from 004508d0 to 005508d3 has its CatchHandler @ 004508e4 */
  plVar2[3] = (long)param_1;
                    /* try { // try from 004508d4 to 005508f7 has its CatchHandler @ 004508b8 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
                    /* catch() { ... } // from try @ 004508d0 with catch @ 004508e4 */
  if (param_1 != (GameOverlayView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
                    /* try { // try from 004508f8 to 0055090f has its CatchHandler @ 004508f8
                       catch() { ... } // from try @ 004508f8 with catch @ 004508f8
                       catch() { ... } // from try @ 00450914 with catch @ 004508f8 */
  return;
}


