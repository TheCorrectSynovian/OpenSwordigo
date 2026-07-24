/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00444c90
 * Function: boost::shared_ptr<Caver::QuestsView>::shared_ptr<Caver::QuestsView>
 * Signature: undefined __thiscall shared_ptr<Caver::QuestsView>(shared_ptr<Caver::QuestsView> * this, QuestsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::QuestsView>::shared_ptr<Caver::QuestsView>(Caver::QuestsView*) */

void __thiscall
boost::shared_ptr<Caver::QuestsView>::shared_ptr<Caver::QuestsView>
          (shared_ptr<Caver::QuestsView> *this,QuestsView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(QuestsView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6160;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (QuestsView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::QuestsView,Caver::QuestsView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


