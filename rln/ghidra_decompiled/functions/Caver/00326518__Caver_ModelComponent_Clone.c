/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00326518
 * Function: Caver::ModelComponent::Clone
 * Signature: undefined __thiscall Clone(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::Clone() const */

long * __thiscall Caver::ModelComponent::Clone(ModelComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  Vector3 *this_00;
  long lVar8;
  undefined1 auVar9 [16];
  
  plVar6 = operator_new(0x140);
  *(undefined4 *)(plVar6 + 1) = 0;
  *(undefined1 *)(plVar6 + 6) = 0;
  puVar4 = PTR_vtable_007e6b98;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e6b98 + 0x128;
  puVar3 = PTR_vtable_007e6b98 + 0x168;
  plVar6[7] = (long)puVar1;
  plVar7 = plVar6 + 9;
  plVar6[10] = 0;
  *plVar7 = 0;
  plVar6[3] = (long)puVar3;
  plVar6[2] = (long)puVar2;
  plVar6[5] = 0;
  plVar6[4] = 0;
  auVar9 = NEON_fmov(0x3f800000,4);
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xb] = (long)plVar7;
  plVar6[0xc] = (long)plVar7;
  plVar6[0xe] = (long)puVar1;
  plVar6[0x12] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[0xf] = 0;
  *(undefined8 *)((long)plVar6 + 0x95) = 0;
  plVar6[0x15] = auVar9._8_8_;
  plVar6[0x14] = auVar9._0_8_;
  *(undefined1 *)(plVar6 + 0x18) = 0;
  *(undefined1 *)(plVar6 + 0x23) = 0;
  *(undefined8 *)((long)plVar6 + 0xcc) = 0;
  *(undefined4 *)((long)plVar6 + 0xd4) = 0;
  this_00 = (Vector3 *)((long)plVar6 + 0xc4);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)((long)plVar6 + 300) = 0;
  *(undefined8 *)((long)plVar6 + 0x11c) = 0;
  *(undefined2 *)((long)plVar6 + 0x134) = 0;
  *(undefined8 *)((long)plVar6 + 0x124) = 0;
  *(undefined8 *)((long)plVar6 + 0x136) = 0xffffffffffffffff;
  *(undefined1 *)((long)plVar6 + 0x13e) = 0;
  *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar6 + 7,this + 0x38);
  *(undefined8 *)this_00 = *(undefined8 *)(this + 0xc4);
  *(undefined4 *)((long)plVar6 + 0xcc) = *(undefined4 *)(this + 0xcc);
  bVar5 = Vector3::IsClose(this_00,(Vector3 *)PTR_Vector3Zero_007e5988,DAT_00683734);
  *(byte *)(plVar6 + 0x18) = ~bVar5 & 1;
  plVar6[0x1a] = *(long *)(this + 0xd0);
  *(undefined4 *)(plVar6 + 0x13) = *(undefined4 *)(this + 0x98);
  FUN_0066a6a8(plVar6 + 0xe,this + 0x70);
  *(undefined4 *)((long)plVar6 + 0x13a) = *(undefined4 *)(this + 0x13a);
  lVar8 = *(long *)(this + 0xa0);
  plVar6[0x15] = *(long *)(this + 0xa8);
  plVar6[0x14] = lVar8;
  *(ModelComponent *)((long)plVar6 + 0x9c) = this[0x9c];
  return plVar6;
}


