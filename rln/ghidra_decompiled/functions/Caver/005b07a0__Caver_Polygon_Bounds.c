/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b07a0
 * Function: Caver::Polygon::Bounds
 * Signature: undefined __cdecl Bounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon::Bounds() const */

void Caver::Polygon::Bounds(void)

{
  long lVar1;
  int *in_x0;
  undefined8 *in_x8;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*in_x0 == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    puVar2 = *(undefined4 **)(in_x0 + 2);
                    /* catch() { ... } // from try @ 005b09c0 with catch @ 005b07dc
                       catch() { ... } // from try @ 005b0b44 with catch @ 005b07dc */
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    local_50 = 0;
    if ((1 < *in_x0) &&
       (Rectangle::ExpandToIncludePoint((Rectangle *)&local_58,(Vector2 *)(puVar2 + 2)), 2 < *in_x0)
       ) {
      lVar3 = 2;
      lVar4 = 0x10;
      do {
        Rectangle::ExpandToIncludePoint
                  ((Rectangle *)&local_58,(Vector2 *)(*(long *)(in_x0 + 2) + lVar4));
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar3 < *in_x0);
    }
    *(undefined4 *)in_x8 = local_58;
    *(undefined4 *)((long)in_x8 + 4) = uStack_54;
    in_x8[1] = local_50;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


