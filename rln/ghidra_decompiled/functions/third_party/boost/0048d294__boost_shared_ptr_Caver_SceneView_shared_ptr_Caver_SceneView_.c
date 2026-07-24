/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048d294
 * Function: boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>
 * Signature: undefined __thiscall shared_ptr<Caver::SceneView>(shared_ptr<Caver::SceneView> * this, SceneView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView*) */

void __thiscall
boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>
          (shared_ptr<Caver::SceneView> *this,SceneView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0048d298 to 0058d29b has its CatchHandler @ 0048d588 */
                    /* try { // try from 0048d29c to 0058d357 has its CatchHandler @ 0048d098 */
  *(SceneView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7c90;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (SceneView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::SceneView,Caver::SceneView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


