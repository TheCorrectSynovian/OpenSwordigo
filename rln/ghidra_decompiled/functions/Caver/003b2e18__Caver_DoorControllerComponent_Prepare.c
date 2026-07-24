/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b2e18
 * Function: Caver::DoorControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::Prepare() */

void __thiscall Caver::DoorControllerComponent::Prepare(DoorControllerComponent *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  RegisterLibrary(this);
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar2 = *(long **)(this + 0x98);
    if (plVar2 == (long *)0x0) goto LAB_003b2ef4;
  }
  lVar4 = *(long *)(this + 0x80);
  if (lVar4 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar4 = *(long *)(this + 0x80);
    if (lVar4 == 0) goto LAB_003b2ef4;
    plVar2 = *(long **)(this + 0x98);
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      plVar2 = *(long **)(this + 0x98);
    }
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x108))();
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
  }
  plVar3 = *(long **)(lVar4 + 0xa0);
  *(long **)(lVar4 + 0xa0) = plVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
LAB_003b2ef4:
  SetOpen(this,(bool)this[0xd0]);
  return;
}


