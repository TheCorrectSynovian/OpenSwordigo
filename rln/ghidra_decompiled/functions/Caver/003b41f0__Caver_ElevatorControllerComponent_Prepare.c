/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b41f0
 * Function: Caver::ElevatorControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::Prepare() */

void __thiscall Caver::ElevatorControllerComponent::Prepare(ElevatorControllerComponent *this)

{
  long lVar1;
  float fVar2;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  RegisterLibrary(this);
  if ((*(long *)(this + 0x80) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) != 0)) {
    Shape::Bounds();
    *(undefined4 *)(this + 0xac) = 0;
    local_2c = local_34 + local_2c;
    *(float *)(this + 0xb0) = local_2c;
    fVar2 = local_2c;
    if (local_2c < -local_34) {
      *(undefined4 *)(this + 0xac) = 0;
      *(float *)(this + 0xb0) = local_34;
      local_2c = local_34;
      fVar2 = -local_34;
    }
    local_30 = local_38 + local_30;
    if (local_30 <= fVar2) {
      local_30 = 0.0;
    }
    else {
      local_2c = 0.0;
      *(float *)(this + 0xac) = local_30;
      *(undefined4 *)(this + 0xb0) = 0;
      fVar2 = local_30;
    }
    local_40 = -local_38;
    if (local_40 <= fVar2) {
      local_40 = -local_30;
    }
    else {
      local_2c = 0.0;
      *(float *)(this + 0xac) = local_38;
      *(undefined4 *)(this + 0xb0) = 0;
      local_30 = local_38;
    }
    *(float *)(this + 0x88) = local_30;
    fStack_3c = -local_2c;
    *(undefined8 *)(this + 0x90) = 0;
    *(float *)(this + 0x8c) = local_2c;
    Rectangle::ExpandToIncludePoint((Rectangle *)(this + 0x88),(Vector2 *)&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


