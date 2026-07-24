/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00338dfc
 * Function: Caver::ShapeComponent::WorldMatrix
 * Signature: undefined __cdecl WorldMatrix(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShapeComponent::WorldMatrix() const */

void Caver::ShapeComponent::WorldMatrix(void)

{
  long lVar1;
  long in_x0;
  float *in_x8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  SceneObject::WorldMatrix();
  if (*(char *)(*(long *)(in_x0 + 0x28) + 0x90) != '\0') {
    uStack_78 = _UNK_006837d8;
    local_80 = _DAT_006837d0;
    uStack_68 = _UNK_006837e8;
    uStack_70 = _DAT_006837e0;
    uStack_58 = _UNK_006837f8;
    local_60 = _DAT_006837f0;
    uStack_48 = _UNK_00683808;
    uStack_50 = _DAT_00683800;
    C_Matrix4Mul(in_x8,(float *)&local_80,in_x8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


