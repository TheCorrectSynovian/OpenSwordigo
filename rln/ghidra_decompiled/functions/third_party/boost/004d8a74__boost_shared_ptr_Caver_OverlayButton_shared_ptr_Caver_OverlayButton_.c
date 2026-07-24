/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d8a74
 * Function: boost::shared_ptr<Caver::OverlayButton>::shared_ptr<Caver::OverlayButton>
 * Signature: undefined __thiscall shared_ptr<Caver::OverlayButton>(shared_ptr<Caver::OverlayButton> * this, OverlayButton * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::OverlayButton>::shared_ptr<Caver::OverlayButton>(Caver::OverlayButton*)
    */

void __thiscall
boost::shared_ptr<Caver::OverlayButton>::shared_ptr<Caver::OverlayButton>
          (shared_ptr<Caver::OverlayButton> *this,OverlayButton *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(OverlayButton **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7dd8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d89dc with catch @ 004d8a94
                        */
                    /* try { // try from 004d8a98 to 005d8a9f has its CatchHandler @ 004d8aa8 */
                    /* try { // try from 004d8aa0 to 005d8aab has its CatchHandler @ 004d8994 */
  plVar2[3] = (long)param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d8a98 with catch @ 004d8aa8
                        */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (OverlayButton *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


