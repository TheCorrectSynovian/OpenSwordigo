/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ab06c
 * Function: boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>
 * Signature: undefined __thiscall shared_ptr<Caver::StoreController>(shared_ptr<Caver::StoreController> * this, StoreController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController*)
    */

void __thiscall
boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>
          (shared_ptr<Caver::StoreController> *this,StoreController *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(StoreController **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5168;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


