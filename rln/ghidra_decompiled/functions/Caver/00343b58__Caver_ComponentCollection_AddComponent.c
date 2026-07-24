/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00343b58
 * Function: Caver::ComponentCollection::AddComponent
 * Signature: undefined __thiscall AddComponent(ComponentCollection * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentCollection::AddComponent(Caver::Component*) */

void __thiscall
Caver::ComponentCollection::AddComponent(ComponentCollection *this,Component *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  Component *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1 != (Component *)0x0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar1 = *(undefined8 **)(this + 8);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x10)) {
    std::
    vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
    ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
                     *)this,puVar1,&local_30);
  }
  else {
    *puVar1 = param_1;
    if (param_1 != (Component *)0x0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    *(undefined8 **)(this + 8) = puVar1 + 1;
  }
  if ((local_30 != (Component *)0x0) &&
     (iVar2 = *(int *)(local_30 + 8), *(int *)(local_30 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*(long *)local_30 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


