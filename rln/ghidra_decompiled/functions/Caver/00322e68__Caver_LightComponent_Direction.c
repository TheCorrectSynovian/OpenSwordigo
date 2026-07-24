/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00322e68
 * Function: Caver::LightComponent::Direction
 * Signature: undefined __cdecl Direction(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::Direction() const */

void Caver::LightComponent::Direction(void)

{
  long lVar1;
  long in_x0;
  undefined8 *in_x8;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)(*(long *)(in_x0 + 0x28) + 0x70);
  local_30 = *(float *)(*(long *)(in_x0 + 0x28) + 0x78);
  Vector3::Normalize((Vector3 *)&local_38);
  *in_x8 = CONCAT44(-(float)((ulong)local_38 >> 0x20),-(float)local_38);
  *(float *)(in_x8 + 1) = -local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


