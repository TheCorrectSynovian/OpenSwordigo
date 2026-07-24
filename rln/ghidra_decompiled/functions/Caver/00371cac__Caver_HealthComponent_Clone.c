/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371cac
 * Function: Caver::HealthComponent::Clone
 * Signature: undefined __thiscall Clone(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::Clone() const */

long * __thiscall Caver::HealthComponent::Clone(HealthComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = operator_new(200);
  *(undefined4 *)(plVar4 + 1) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  puVar3 = PTR_vtable_007e4a68;
  puVar1 = PTR_vtable_007e4a68 + 0x128;
  puVar2 = PTR_vtable_007e4a68 + 0x168;
  plVar4[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar5 = plVar4 + 9;
  *plVar5 = 0;
  plVar4[3] = (long)puVar2;
  plVar4[2] = (long)puVar1;
  lVar6 = DAT_00688270;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[10] = 0;
  plVar4[0xb] = (long)plVar5;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *(undefined1 *)(plVar4 + 0xf) = 0;
  *(undefined4 *)((long)plVar4 + 0x8c) = 0;
  *(undefined8 *)((long)plVar4 + 0x7c) = 0;
  *(undefined8 *)((long)plVar4 + 0x84) = 0;
  *(undefined4 *)(plVar4 + 0x13) = 0x3f800000;
  plVar4[0x17] = 0;
  *(undefined1 *)(plVar4 + 0x18) = 0;
  *(undefined8 *)((long)plVar4 + 0xac) = 0;
  *(undefined8 *)((long)plVar4 + 0x9c) = 0;
  *(undefined8 *)((long)plVar4 + 0xa4) = 0;
  plVar4[0xc] = (long)plVar5;
  plVar4[0x12] = lVar6;
  *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar4 + 7,this + 0x38);
  *(undefined4 *)((long)plVar4 + 0x7c) = *(undefined4 *)(this + 0x7c);
  lVar6 = *(long *)(this + 0x80);
  plVar4[0x11] = *(long *)(this + 0x88);
  plVar4[0x10] = lVar6;
  *(undefined4 *)(plVar4 + 0x12) = *(undefined4 *)(this + 0x90);
  return plVar4;
}


