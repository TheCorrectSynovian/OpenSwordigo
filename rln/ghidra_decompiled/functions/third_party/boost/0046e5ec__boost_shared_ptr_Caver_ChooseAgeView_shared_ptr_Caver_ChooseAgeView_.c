/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e5ec
 * Function: boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>
 * Signature: undefined __thiscall shared_ptr<Caver::ChooseAgeView>(shared_ptr<Caver::ChooseAgeView> * this, ChooseAgeView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(Caver::ChooseAgeView*)
    */

void __thiscall
boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>
          (shared_ptr<Caver::ChooseAgeView> *this,ChooseAgeView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(ChooseAgeView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e74a0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (ChooseAgeView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


