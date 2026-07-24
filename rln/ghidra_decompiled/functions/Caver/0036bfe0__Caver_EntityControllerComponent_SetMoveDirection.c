/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036bfe0
 * Function: Caver::EntityControllerComponent::SetMoveDirection
 * Signature: undefined __thiscall SetMoveDirection(EntityControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::SetMoveDirection(int) */

void __thiscall
Caver::EntityControllerComponent::SetMoveDirection(EntityControllerComponent *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x80);
  *(undefined4 *)(this + 0x134) = 0;
  *(int *)(this + 300) = param_1;
  *(int *)(this + 0x108) = param_1;
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar1 = *(long *)(this + 0x80);
    param_1 = *(int *)(this + 0x108);
  }
  *(float *)(lVar1 + 0xb0) = *(float *)(this + 0x10c) * (float)param_1;
  lVar2 = *(long *)(this + 0x100);
  if (lVar2 != 0) {
    if (lVar1 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar1 = *(long *)(this + 0x80);
    }
    *(bool *)(lVar2 + 0x39) = param_1 != *(int *)(lVar1 + 0x70);
  }
  return;
}


