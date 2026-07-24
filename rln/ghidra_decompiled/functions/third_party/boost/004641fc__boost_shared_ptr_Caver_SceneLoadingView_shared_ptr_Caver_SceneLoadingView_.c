/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004641fc
 * Function: boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>
 * Signature: undefined __thiscall shared_ptr<Caver::SceneLoadingView>(shared_ptr<Caver::SceneLoadingView> * this, SceneLoadingView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView*)
    */

void __thiscall
boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>
          (shared_ptr<Caver::SceneLoadingView> *this,SceneLoadingView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(SceneLoadingView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00464214 to 00564227 has its CatchHandler @ 004652d0 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5fc0;
  plVar2[3] = (long)param_1;
                    /* try { // try from 00464234 to 0056423f has its CatchHandler @ 00465264 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (SceneLoadingView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


