/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048ce20
 * Function: boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>
 * Signature: undefined __thiscall shared_ptr<Caver::GUIEffectView>(shared_ptr<Caver::GUIEffectView> * this, GUIEffectView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>(Caver::GUIEffectView*)
    */

void __thiscall
boost::shared_ptr<Caver::GUIEffectView>::shared_ptr<Caver::GUIEffectView>
          (shared_ptr<Caver::GUIEffectView> *this,GUIEffectView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(GUIEffectView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 0048ce38 to 0058ce3b has its CatchHandler @ 0048cff0 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5a88;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GUIEffectView *)0x0) {
                    /* try { // try from 0048ce6c to 0058cee3 has its CatchHandler @ 0048d060 */
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


