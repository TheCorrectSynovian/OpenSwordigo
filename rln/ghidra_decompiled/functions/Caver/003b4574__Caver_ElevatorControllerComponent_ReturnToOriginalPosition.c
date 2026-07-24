/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4574
 * Function: Caver::ElevatorControllerComponent::ReturnToOriginalPosition
 * Signature: undefined __thiscall ReturnToOriginalPosition(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::ReturnToOriginalPosition() */

void __thiscall
Caver::ElevatorControllerComponent::ReturnToOriginalPosition(ElevatorControllerComponent *this)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  fVar1 = *(float *)(this + 0xa4);
  fVar2 = *(float *)(this + 0xa8);
  lVar4 = *(long *)(this + 0x28);
  *(undefined4 *)(this + 0x9c) = 2;
  *(float *)(this + 0xb8) = fVar1;
  *(float *)(this + 0xbc) = fVar2;
  fVar5 = *(float *)(lVar4 + 0x70) - fVar1;
  fVar6 = *(float *)(lVar4 + 0x74) - fVar2;
  if (DAT_00683488 <= fVar5 * fVar5 + fVar6 * fVar6) {
    local_40 = fVar1 - *(float *)(lVar4 + 0x70);
    fStack_3c = fVar2 - *(float *)(lVar4 + 0x74);
    Vector2::Normalize((Vector2 *)&local_40);
    *(ulong *)(lVar4 + 0x68) =
         CONCAT44(fStack_3c * *(float *)(this + 0xb4),local_40 * *(float *)(this + 0xb4));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


