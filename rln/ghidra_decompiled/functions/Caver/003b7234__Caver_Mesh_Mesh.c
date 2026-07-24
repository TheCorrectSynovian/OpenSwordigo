/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b7234
 * Function: Caver::Mesh::Mesh
 * Signature: undefined __thiscall Mesh(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::Mesh() */

void __thiscall Caver::Mesh::Mesh(Mesh *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  auVar6 = NEON_fmov(0x3f800000,4);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  uVar7 = auVar6._8_8_;
  *(undefined8 *)(this + 0xa8) = uVar7;
  uVar5 = auVar6._0_8_;
  *(undefined8 *)(this + 0xa0) = uVar5;
  *(undefined8 *)(this + 0xb8) = uVar7;
  *(undefined8 *)(this + 0xb0) = uVar5;
  *(undefined8 *)(this + 200) = uVar7;
  *(undefined8 *)(this + 0xc0) = uVar5;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined **)(this + 0xe0) = puVar1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  plVar3 = operator_new(0x28);
  puVar1 = PTR_vtable_007e5ac0;
  plVar3[3] = 0;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(long **)(this + 0xf0) = plVar3;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


