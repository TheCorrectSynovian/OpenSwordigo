/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036bbe4
 * Function: Caver::EntityControllerComponent::SetAcceleration
 * Signature: undefined __thiscall SetAcceleration(EntityControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::SetAcceleration(float) */

void __thiscall
Caver::EntityControllerComponent::SetAcceleration(EntityControllerComponent *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x80);
  *(float *)(this + 0x110) = param_1;
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar1 = *(long *)(this + 0x80);
    if (lVar1 == 0) {
      return;
    }
  }
  *(float *)(lVar1 + 0xb4) = param_1;
  return;
}


