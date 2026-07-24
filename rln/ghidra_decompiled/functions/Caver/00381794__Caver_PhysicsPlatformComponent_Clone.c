/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00381794
 * Function: Caver::PhysicsPlatformComponent::Clone
 * Signature: undefined __thiscall Clone(PhysicsPlatformComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PhysicsPlatformComponent::Clone() const */

long * __thiscall Caver::PhysicsPlatformComponent::Clone(PhysicsPlatformComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = operator_new(0xa8);
  *(undefined4 *)(plVar6 + 1) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(undefined1 *)(plVar6 + 6) = 0;
  puVar5 = PTR_vtable_007e71f8;
  puVar1 = PTR_vtable_007e71f8 + 0x128;
  puVar2 = PTR_vtable_007e71f8 + 0x168;
  plVar6[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar7 = plVar6 + 9;
  *plVar7 = 0;
  plVar6[3] = (long)puVar2;
  plVar6[2] = (long)puVar1;
  uVar4 = _UNK_00688918;
  uVar3 = _DAT_00688910;
  *plVar6 = (long)(puVar5 + 0x10);
  plVar6[10] = 0;
  plVar6[0xb] = (long)plVar7;
  plVar6[0xc] = (long)plVar7;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 1;
  *(undefined8 *)((long)plVar6 + 0x74) = 0;
  *(undefined8 *)((long)plVar6 + 0x7c) = 0;
  *(undefined4 *)((long)plVar6 + 0x84) = 0;
  *(undefined8 *)((long)plVar6 + 0x9c) = uVar4;
  *(undefined8 *)((long)plVar6 + 0x94) = uVar3;
  *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar6 + 7,this + 0x38);
  *(undefined8 *)((long)plVar6 + 0x94) = *(undefined8 *)(this + 0x94);
  *(undefined4 *)((long)plVar6 + 0x9c) = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)(plVar6 + 0x14) = *(undefined4 *)(this + 0xa0);
  return plVar6;
}


