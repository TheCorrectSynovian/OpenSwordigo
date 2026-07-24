/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c6580
 * Function: Caver::SwingableWeaponComponent::CurrentSwingPlane
 * Signature: undefined __cdecl CurrentSwingPlane(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SwingableWeaponComponent::CurrentSwingPlane() */

void Caver::SwingableWeaponComponent::CurrentSwingPlane(void)

{
  long lVar1;
  long in_x0;
  float *in_x8;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(in_x0 + 0x194) * *(float *)(in_x0 + 0x18c) -
          *(float *)(in_x0 + 0x198) * *(float *)(in_x0 + 0x188);
  fVar4 = *(float *)(in_x0 + 0x198) * *(float *)(in_x0 + 0x184) -
          *(float *)(in_x0 + 0x18c) * *(float *)(in_x0 + 400);
  fVar5 = *(float *)(in_x0 + 0x188) * *(float *)(in_x0 + 400) -
          *(float *)(in_x0 + 0x194) * *(float *)(in_x0 + 0x184);
  if (_LAB_00688900 <= fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) {
    local_48 = fVar3;
    fStack_44 = fVar4;
    local_40 = fVar5;
    Vector3::Normalize((Vector3 *)&local_48);
    lVar2 = *(long *)(in_x0 + 0x28);
    fVar4 = *(float *)(lVar2 + 0x70);
    fVar5 = *(float *)(lVar2 + 0x74);
    fVar3 = *(float *)(lVar2 + 0x78);
    *in_x8 = local_48;
    in_x8[1] = fStack_44;
    fVar3 = fVar3 * local_40 + fVar4 * local_48 + fVar5 * fStack_44;
    in_x8[2] = local_40;
  }
  else {
    in_x8[0] = 0.0;
    in_x8[1] = 0.0;
    in_x8[2] = 0.0;
    fVar3 = 0.0;
  }
  in_x8[3] = fVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


