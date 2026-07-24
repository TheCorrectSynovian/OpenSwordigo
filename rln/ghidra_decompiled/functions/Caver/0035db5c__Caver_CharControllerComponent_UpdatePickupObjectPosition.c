/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035db5c
 * Function: Caver::CharControllerComponent::UpdatePickupObjectPosition
 * Signature: undefined __thiscall UpdatePickupObjectPosition(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::UpdatePickupObjectPosition() */

void __thiscall
Caver::CharControllerComponent::UpdatePickupObjectPosition(CharControllerComponent *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  SceneObject *this_00;
  float fVar4;
  float fVar5;
  float local_48;
  float local_44;
  undefined8 local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (DAT_00684750 < *(float *)(this + 0x2e4)) {
    lVar3 = *(long *)(this + 0x298);
    TargetPickupObjectPosition();
    *(ulong *)(this + 0x2e4) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20) -
                  (float)((ulong)local_40 >> 0x20),
                  (float)*(undefined8 *)(lVar3 + 0x70) - (float)local_40);
  }
  this_00 = *(SceneObject **)(this + 0x298);
  TargetPickupObjectPosition();
  fVar4 = *(float *)(this + 0x2e4) * (1.0 - *(float *)(this + 0x2d4)) + local_48;
  fVar5 = (1.0 - *(float *)(this + 0x2d4)) * *(float *)(this + 0x2e8) + local_44;
  if ((DAT_00683488 < ABS(fVar4 - *(float *)(this_00 + 0x70))) ||
     (DAT_00683488 < ABS(fVar5 - *(float *)(this_00 + 0x74)))) {
    *(float *)(this_00 + 0x70) = fVar4;
    *(float *)(this_00 + 0x74) = fVar5;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined8 *)(*(long *)(this + 0x298) + 0x68) = *(undefined8 *)(*(long *)(this + 0x28) + 0x68);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


