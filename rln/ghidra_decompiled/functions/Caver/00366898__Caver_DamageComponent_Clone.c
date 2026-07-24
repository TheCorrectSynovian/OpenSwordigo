/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366898
 * Function: Caver::DamageComponent::Clone
 * Signature: undefined __thiscall Clone(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DamageComponent::Clone() const */

long * __thiscall Caver::DamageComponent::Clone(DamageComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = operator_new(0xd8);
  *(undefined4 *)(plVar4 + 1) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  puVar3 = PTR_vtable_007e5798;
  puVar1 = PTR_vtable_007e5798 + 0x128;
  puVar2 = PTR_vtable_007e5798 + 0x168;
  plVar4[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar5 = plVar4 + 9;
  *plVar5 = 0;
  plVar4[3] = (long)puVar2;
  plVar4[2] = (long)puVar1;
  lVar6 = _DAT_00683948;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[10] = 0;
  plVar4[0xb] = (long)plVar5;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0xf] = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined8 *)((long)plVar4 + 0xb4) = 0;
  *(undefined8 *)((long)plVar4 + 0xac) = 0;
  *(undefined8 *)((long)plVar4 + 0xa4) = 0;
  *(undefined1 *)((long)plVar4 + 0xbc) = 1;
  plVar4[0x18] = 0;
  *(undefined1 *)(plVar4 + 0x1a) = 0;
  *(undefined1 *)((long)plVar4 + 0xd1) = 1;
  plVar4[0xc] = (long)plVar5;
  plVar4[0x19] = lVar6;
  *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar4 + 7,this + 0x38);
  *(undefined4 *)((long)plVar4 + 0xa4) = *(undefined4 *)(this + 0xa4);
  lVar6 = *(long *)(this + 0xa8);
  plVar4[0x16] = *(long *)(this + 0xb0);
  plVar4[0x15] = lVar6;
  *(undefined4 *)(plVar4 + 0x17) = *(undefined4 *)(this + 0xb8);
  *(undefined4 *)(plVar4 + 0x18) = *(undefined4 *)(this + 0xc0);
  *(DamageComponent *)(plVar4 + 0x1a) = this[0xd0];
  plVar4[0x19] = *(long *)(this + 200);
  *(DamageComponent *)(plVar4 + 0x14) = this[0xa0];
  *(DamageComponent *)((long)plVar4 + 0xd1) = this[0xd1];
  return plVar4;
}


