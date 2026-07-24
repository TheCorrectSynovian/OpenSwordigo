/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457024
 * Function: boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>
 * Signature: undefined __thiscall shared_ptr<Caver::GameMenuViewController>(shared_ptr<Caver::GameMenuViewController> * this, GameMenuViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController*)
    */

void __thiscall
boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>
          (shared_ptr<Caver::GameMenuViewController> *this,GameMenuViewController *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00456d58 with catch @ 00457030 */
                    /* catch() { ... } // from try @ 00456c9c with catch @ 00457038 */
  *(GameMenuViewController **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5fb0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
                    /* catch() { ... } // from try @ 00456c0c with catch @ 00457068 */
  if (param_1 != (GameMenuViewController *)0x0) {
                    /* catch() { ... } // from try @ 00456d9c with catch @ 00457070
                       catch() { ... } // from try @ 00456e5c with catch @ 00457070 */
    enable_shared_from_this<Caver::GUIViewController>::
    _internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>
              ((enable_shared_from_this<Caver::GUIViewController> *)(param_1 + 8),(shared_ptr *)this
               ,param_1);
  }
  return;
}


