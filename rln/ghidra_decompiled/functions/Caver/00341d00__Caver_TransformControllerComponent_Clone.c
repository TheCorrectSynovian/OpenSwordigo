/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341d00
 * Function: Caver::TransformControllerComponent::Clone
 * Signature: undefined __thiscall Clone(TransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TransformControllerComponent::Clone() const */

long * __thiscall Caver::TransformControllerComponent::Clone(TransformControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = operator_new(0xc0);
  *(undefined4 *)(plVar5 + 1) = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 6) = 0;
  puVar4 = PTR_vtable_007e6898;
  puVar1 = PTR_vtable_007e6898 + 0x128;
  puVar2 = PTR_vtable_007e6898 + 0x168;
  plVar5[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar6 = plVar5 + 9;
  *plVar6 = 0;
  plVar5[3] = (long)puVar2;
  plVar5[2] = (long)puVar1;
  lVar3 = _DAT_00683948;
  plVar5[10] = 0;
  plVar5[0xb] = (long)plVar6;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  *(undefined8 *)((long)plVar5 + 0x75) = 0;
  *(undefined8 *)((long)plVar5 + 0x85) = 0;
  plVar5[0x10] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  *(undefined8 *)((long)plVar5 + 0xa5) = 0;
  plVar5[0x14] = 0;
  plVar5[0x17] = 0;
  plVar5[0xc] = (long)plVar6;
  plVar5[0x16] = lVar3;
  *(undefined4 *)(plVar5 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar5 + 7,this + 0x38);
  return plVar5;
}


