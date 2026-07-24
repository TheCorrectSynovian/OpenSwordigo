/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336310
 * Function: Caver::ShadowComponent::Clone
 * Signature: undefined __thiscall Clone(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::Clone() const */

long * __thiscall Caver::ShadowComponent::Clone(ShadowComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = operator_new(0xe0);
  *(undefined4 *)(plVar3 + 1) = 0;
  *(undefined1 *)(plVar3 + 6) = 0;
  puVar2 = PTR_vtable_007e5d20;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = (long)puVar1;
  plVar4 = plVar3 + 9;
  plVar3[10] = 0;
  *plVar4 = 0;
  *(undefined1 *)(plVar3 + 0xf) = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  plVar3[0x1b] = 0;
  *(undefined4 *)((long)plVar3 + 0x9c) = 0;
  *(undefined8 *)((long)plVar3 + 0x94) = 0;
  *(undefined8 *)((long)plVar3 + 0x8c) = 0;
  *(undefined8 *)((long)plVar3 + 0x84) = 0;
  *(undefined8 *)((long)plVar3 + 0x7c) = 0;
  *(undefined1 *)((long)plVar3 + 0xbc) = 0;
  *(undefined8 *)((long)plVar3 + 0xac) = 0;
  *(undefined8 *)((long)plVar3 + 0xb4) = 0;
  plVar3[0xb] = (long)plVar4;
  plVar3[0xc] = (long)plVar4;
  plVar3[3] = (long)(puVar2 + 0x168);
  plVar3[2] = (long)(puVar2 + 0x128);
  *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar3 + 7,this + 0x38);
  uVar5 = *(undefined8 *)(this + 0x7c);
  *(undefined8 *)((long)plVar3 + 0x84) = *(undefined8 *)(this + 0x84);
  *(undefined8 *)((long)plVar3 + 0x7c) = uVar5;
  *(undefined4 *)((long)plVar3 + 0x8c) = *(undefined4 *)(this + 0x8c);
  return plVar3;
}


