/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00444f48
 * Function: boost::shared_ptr<Caver::InventoryView>::shared_ptr<Caver::InventoryView>
 * Signature: undefined __thiscall shared_ptr<Caver::InventoryView>(shared_ptr<Caver::InventoryView> * this, InventoryView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::InventoryView>::shared_ptr<Caver::InventoryView>(Caver::InventoryView*)
    */

void __thiscall
boost::shared_ptr<Caver::InventoryView>::shared_ptr<Caver::InventoryView>
          (shared_ptr<Caver::InventoryView> *this,InventoryView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00444f4c to 00544f57 has its CatchHandler @ 00445030 */
  *(InventoryView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5088;
  plVar2[3] = (long)param_1;
                    /* try { // try from 00444f7c to 00544f83 has its CatchHandler @ 00444fc4 */
  plVar2[2] = 1;
  plVar2[1] = 1;
                    /* try { // try from 00444f84 to 00545043 has its CatchHandler @ 00444f18 */
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (InventoryView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::InventoryView,Caver::InventoryView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


