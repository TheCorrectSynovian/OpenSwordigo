/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c3fc
 * Function: Caver::ObjectModifierComponent::Clone
 * Signature: undefined __thiscall Clone(ObjectModifierComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectModifierComponent::Clone() const */

long * __thiscall Caver::ObjectModifierComponent::Clone(ObjectModifierComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = operator_new(0x88);
  *(undefined4 *)(plVar5 + 1) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 6) = 0;
  puVar4 = PTR_vtable_007e4d90;
  puVar1 = PTR_vtable_007e4d90 + 0x128;
  puVar2 = PTR_vtable_007e4d90 + 0x168;
  plVar5[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar6 = plVar5 + 9;
  *plVar6 = 0;
  plVar5[3] = (long)puVar2;
  plVar5[2] = (long)puVar1;
  uVar3 = DAT_006840e0;
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[10] = 0;
  plVar5[0xb] = (long)plVar6;
  plVar5[0xc] = (long)plVar6;
  plVar5[0xd] = 0;
  *(undefined4 *)(plVar5 + 0xe) = 0;
  *(undefined4 *)((long)plVar5 + 0x7c) = 0x3e99999a;
  plVar5[0x10] = 0;
  *(undefined8 *)((long)plVar5 + 0x74) = uVar3;
  *(undefined4 *)(plVar5 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar5 + 7,this + 0x38);
  return plVar5;
}


