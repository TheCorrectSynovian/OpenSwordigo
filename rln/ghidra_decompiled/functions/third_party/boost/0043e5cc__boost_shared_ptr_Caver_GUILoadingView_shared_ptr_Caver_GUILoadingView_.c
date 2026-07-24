/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e5cc
 * Function: boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>
 * Signature: undefined __thiscall shared_ptr<Caver::GUILoadingView>(shared_ptr<Caver::GUILoadingView> * this, GUILoadingView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView*)
    */

void __thiscall
boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>
          (shared_ptr<Caver::GUILoadingView> *this,GUILoadingView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0043e5e0 to 0053e5eb has its CatchHandler @ 0043eba4 */
  *(GUILoadingView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4cd0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GUILoadingView *)0x0) {
                    /* try { // try from 0043e614 to 0053e64f has its CatchHandler @ 0043eb48 */
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


