/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b2d44
 * Function: Caver::DoorControllerComponent::SetOpen
 * Signature: undefined __thiscall SetOpen(DoorControllerComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::SetOpen(bool) */

void __thiscall Caver::DoorControllerComponent::SetOpen(DoorControllerComponent *this,bool param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  KeyframeAnimationComponent *this_00;
  undefined4 uVar4;
  
  if (param_1) {
    Open(this);
    plVar1 = *(long **)(this + 0x98);
  }
  else {
    Close(this);
    plVar1 = *(long **)(this + 0x98);
  }
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar1 = *(long **)(this + 0x98);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  uVar4 = 0;
  if (param_1) {
    this_00 = *(KeyframeAnimationComponent **)(this + 0x98);
    if (this_00 == (KeyframeAnimationComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      this_00 = *(KeyframeAnimationComponent **)(this + 0x98);
    }
    lVar3 = *(long *)(*(long *)(this_00 + 0x90) + 0x18);
    if (lVar3 == 0) {
      KeyframeAnimationComponent::LoadAnimation(this_00);
      lVar3 = *(long *)(*(long *)(this_00 + 0x90) + 0x18);
    }
    uVar4 = *(undefined4 *)(lVar3 + 0x20);
  }
  *(undefined4 *)(lVar2 + 0xc) = uVar4;
  return;
}


