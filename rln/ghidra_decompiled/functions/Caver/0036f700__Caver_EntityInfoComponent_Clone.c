/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f700
 * Function: Caver::EntityInfoComponent::Clone
 * Signature: undefined __thiscall Clone(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::Clone() const */

long * __thiscall Caver::EntityInfoComponent::Clone(EntityInfoComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = operator_new(0x98);
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined1 *)(plVar3 + 6) = 0;
  puVar2 = PTR_vtable_007e6d08;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  plVar3[7] = (long)puVar1;
  plVar4 = plVar3 + 9;
  *plVar4 = 0;
  plVar3[0xb] = (long)plVar4;
  plVar3[0xc] = (long)plVar4;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  *(undefined1 *)(plVar3 + 0xe) = 0;
  plVar3[3] = (long)(puVar2 + 0x168);
  plVar3[2] = (long)(puVar2 + 0x128);
  plVar3[0xf] = (long)puVar1;
  *(undefined4 *)(plVar3 + 0x12) = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar3 + 7,this + 0x38);
  FUN_0066a6a8(plVar3 + 0xf,this + 0x78);
  return plVar3;
}


