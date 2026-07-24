/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00464a54
 * Function: boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>
 * Signature: undefined __thiscall shared_ptr<Caver::GameSceneView>(shared_ptr<Caver::GameSceneView> * this, GameSceneView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(Caver::GameSceneView*)
    */

void __thiscall
boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>
          (shared_ptr<Caver::GameSceneView> *this,GameSceneView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(GameSceneView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7790;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GameSceneView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GameSceneView,Caver::GameSceneView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


