/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b4458
 * Function: Caver::ElevatorControllerComponent::StartElevating
 * Signature: undefined __thiscall StartElevating(ElevatorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::StartElevating() */

void __thiscall
Caver::ElevatorControllerComponent::StartElevating(ElevatorControllerComponent *this)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x9c) = 1;
  if (this[0xa0] == (ElevatorControllerComponent)0x0) {
    lVar3 = *(long *)(this + 0x28);
    this[0xa0] = (ElevatorControllerComponent)0x1;
    fVar4 = *(float *)(lVar3 + 0x70);
    *(float *)(this + 0xa4) = fVar4;
    pfVar2 = (float *)(lVar3 + 0x74);
    fVar5 = *pfVar2;
    *(float *)(this + 0xa8) = fVar5;
  }
  else {
    lVar3 = *(long *)(this + 0x28);
    fVar4 = *(float *)(this + 0xa4);
    fVar5 = *(float *)(this + 0xa8);
    pfVar2 = (float *)(lVar3 + 0x74);
  }
  fVar4 = fVar4 + *(float *)(this + 0xac);
  fVar5 = fVar5 + *(float *)(this + 0xb0);
  *(float *)(this + 0xb8) = fVar4;
  *(float *)(this + 0xbc) = fVar5;
  fVar6 = *(float *)(lVar3 + 0x70) - fVar4;
  fVar7 = *pfVar2 - fVar5;
  if (DAT_00683488 <= fVar6 * fVar6 + fVar7 * fVar7) {
    local_40 = fVar4 - *(float *)(lVar3 + 0x70);
    fStack_3c = fVar5 - *pfVar2;
    Vector2::Normalize((Vector2 *)&local_40);
    *(ulong *)(lVar3 + 0x68) =
         CONCAT44(fStack_3c * *(float *)(this + 0xb4),local_40 * *(float *)(this + 0xb4));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


