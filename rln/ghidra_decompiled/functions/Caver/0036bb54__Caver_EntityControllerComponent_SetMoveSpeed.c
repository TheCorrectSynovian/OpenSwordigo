/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036bb54
 * Function: Caver::EntityControllerComponent::SetMoveSpeed
 * Signature: undefined __thiscall SetMoveSpeed(EntityControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityControllerComponent::SetMoveSpeed(float) */

void __thiscall
Caver::EntityControllerComponent::SetMoveSpeed(EntityControllerComponent *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x80);
  *(float *)(this + 0x10c) = param_1;
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar1 = *(long *)(this + 0x80);
    if (lVar1 == 0) goto LAB_0036bb9c;
  }
  *(float *)(lVar1 + 0xb0) = (float)*(int *)(this + 0x108) * param_1;
LAB_0036bb9c:
  if ((*(long *)(this + 0x100) != 0) && (DAT_00683944 < *(float *)(this + 0x10c))) {
    *(float *)(*(long *)(this + 0x100) + 0x34) =
         *(float *)(this + 0x10c) / (*(float *)(*(long *)(this + 0x28) + 0x8c) * _DAT_0068782c);
  }
  return;
}


