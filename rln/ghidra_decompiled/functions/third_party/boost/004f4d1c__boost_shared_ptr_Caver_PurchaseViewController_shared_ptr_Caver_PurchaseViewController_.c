/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f4d1c
 * Function: boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>
 * Signature: undefined __thiscall shared_ptr<Caver::PurchaseViewController>(shared_ptr<Caver::PurchaseViewController> * this, PurchaseViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController*)
    */

void __thiscall
boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>
          (shared_ptr<Caver::PurchaseViewController> *this,PurchaseViewController *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(PurchaseViewController **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4fa0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (PurchaseViewController *)0x0) {
    enable_shared_from_this<Caver::GUIViewController>::
    _internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>
              ((enable_shared_from_this<Caver::GUIViewController> *)(param_1 + 8),(shared_ptr *)this
               ,param_1);
  }
  return;
}


