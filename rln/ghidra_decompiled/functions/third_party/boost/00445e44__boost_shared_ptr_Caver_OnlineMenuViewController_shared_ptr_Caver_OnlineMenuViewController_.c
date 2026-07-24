/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445e44
 * Function: boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>
 * Signature: undefined __thiscall shared_ptr<Caver::OnlineMenuViewController>(shared_ptr<Caver::OnlineMenuViewController> * this, OnlineMenuViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController*)
    */

void __thiscall
boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>
          (shared_ptr<Caver::OnlineMenuViewController> *this,OnlineMenuViewController *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00445e44 to 00545eaf has its CatchHandler @ 00445dd8 */
  *(OnlineMenuViewController **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e69b0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* catch() { ... } // from try @ 00445e40 with catch @ 00445e84 */
  *(long **)(this + 8) = plVar2;
  if (param_1 != (OnlineMenuViewController *)0x0) {
                    /* catch() { ... } // from try @ 00445e08 with catch @ 00445e94 */
    enable_shared_from_this<Caver::GUIViewController>::
    _internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>
              ((enable_shared_from_this<Caver::GUIViewController> *)(param_1 + 8),(shared_ptr *)this
               ,param_1);
  }
  return;
}


