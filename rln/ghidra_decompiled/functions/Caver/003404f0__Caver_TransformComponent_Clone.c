/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003404f0
 * Function: Caver::TransformComponent::Clone
 * Signature: undefined __thiscall Clone(TransformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformComponent::Clone() const */

long * __thiscall Caver::TransformComponent::Clone(TransformComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_80 [7];
  undefined8 uStack_48;
  long local_38;
  
  plVar11 = local_80;
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  plVar8 = operator_new(0xb0);
  *(undefined4 *)(plVar8 + 1) = 0;
  puVar1 = PTR_vtable_007e51e0 + 0x128;
  local_80[5] = *(long *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_80[4] = *(long *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_48 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  local_80[6] = *(long *)(PTR_identityMatrix_007e74c8 + 0x30);
  local_80[1] = *(long *)(PTR_identityMatrix_007e74c8 + 8);
  local_80[0] = *(long *)PTR_identityMatrix_007e74c8;
  local_80[3] = *(long *)(PTR_identityMatrix_007e74c8 + 0x18);
  local_80[2] = *(long *)(PTR_identityMatrix_007e74c8 + 0x10);
  puVar2 = PTR_vtable_007e51e0 + 0x168;
  plVar3 = plVar8 + 0x16;
  puVar4 = PTR_vtable_007e51e0 + 0x10;
  plVar8[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar8[4] = 0;
  plVar8[5] = 0;
  *(undefined1 *)(plVar8 + 6) = 0;
  plVar10 = plVar8 + 9;
  *plVar10 = 0;
  *plVar8 = (long)puVar4;
  plVar9 = plVar3;
  if (plVar3 <= (long *)((long)plVar8 + 0x74U)) {
    plVar9 = (long *)((long)plVar8 + 0x74U);
  }
  plVar8[10] = 0;
  plVar8[0xb] = (long)plVar10;
  plVar8[0xc] = (long)plVar10;
  plVar8[0xd] = 0;
  uVar5 = ((ulong)((long)plVar9 + (-0x71 - (long)plVar8)) >> 2) + 1;
  plVar9 = plVar8 + 0xe;
  plVar8[3] = (long)puVar2;
  plVar8[2] = (long)puVar1;
  if (7 < uVar5) {
    uVar12 = uVar5 & 0x7ffffffffffffff8;
    plVar10 = plVar8 + 0x10;
    plVar11 = (long *)((long)local_80 + uVar12 * 4);
    plVar9 = (long *)((long)plVar9 + uVar12 * 4);
    plVar13 = local_80 + 2;
    uVar14 = uVar12;
    do {
      plVar7 = plVar13 + -1;
      lVar15 = plVar13[-2];
      lVar17 = plVar13[1];
      lVar16 = *plVar13;
      uVar14 = uVar14 - 8;
      plVar13 = plVar13 + 4;
      plVar10[-1] = *plVar7;
      plVar10[-2] = lVar15;
      plVar10[1] = lVar17;
      *plVar10 = lVar16;
      plVar10 = plVar10 + 4;
    } while (uVar14 != 0);
    if (uVar5 == uVar12) goto LAB_00340610;
  }
  do {
    plVar10 = (long *)((long)plVar9 + 4);
    *(undefined4 *)plVar9 = *(undefined4 *)plVar11;
    plVar9 = plVar10;
    plVar11 = (long *)((long)plVar11 + 4);
  } while (plVar10 < plVar3);
LAB_00340610:
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar8 + 7,this + 0x38);
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar8;
}


