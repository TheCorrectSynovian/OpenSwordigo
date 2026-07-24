/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b49d4
 * Function: Caver::ElevatorControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(ElevatorControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::ElevatorControllerComponent::HandleMessage
          (ElevatorControllerComponent *this,int param_1,void *param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_1 == 7) && (lVar3 = *(long *)((long)param_2 + 8), *(char *)(lVar3 + 0x17b) != '\0')) {
    local_60 = *(undefined8 *)(this + 0xac);
    fVar7 = *(float *)((long)param_2 + 0x28);
    fVar6 = *(float *)((long)param_2 + 0x2c);
    Vector2::Normalize((Vector2 *)&local_60);
    fVar4 = (float)local_60;
    fVar5 = local_60._4_4_;
    lVar3 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(lVar3 + 0x28),(long)PTR_Interface_007e5a28);
    if ((lVar3 != 0) &&
       ((fVar4 = fVar7 * fVar4 + fVar6 * fVar5, fVar4 < DAT_00687f44 || (DAT_0068493c < fVar4)))) {
      if ((*(int *)(this + 0x98) != 2) &&
         ((*(int *)(this + 0x9c) != 1 && (*(int *)(this + 0x9c) != 0 || *(int *)(this + 0x98) != 0))
         )) {
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
          local_60 = CONCAT44(fVar5 - *pfVar2,fVar4 - *(float *)(lVar3 + 0x70));
          Vector2::Normalize((Vector2 *)&local_60);
          *(ulong *)(lVar3 + 0x68) =
               CONCAT44((float)((ulong)local_60 >> 0x20) * *(float *)(this + 0xb4),
                        (float)local_60 * *(float *)(this + 0xb4));
        }
      }
      *(undefined4 *)(this + 0xcc) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


