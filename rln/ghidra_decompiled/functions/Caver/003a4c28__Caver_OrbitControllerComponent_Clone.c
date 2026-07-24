/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4c28
 * Function: Caver::OrbitControllerComponent::Clone
 * Signature: undefined __thiscall Clone(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OrbitControllerComponent::Clone() const */

long * __thiscall Caver::OrbitControllerComponent::Clone(OrbitControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = operator_new(0xc0);
  *(undefined4 *)(plVar6 + 1) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(undefined1 *)(plVar6 + 6) = 0;
  puVar5 = PTR_vtable_007e6428;
  puVar1 = PTR_vtable_007e6428 + 0x128;
  puVar2 = PTR_vtable_007e6428 + 0x168;
  plVar6[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar7 = plVar6 + 9;
  *plVar7 = 0;
  plVar6[3] = (long)puVar2;
  plVar6[2] = (long)puVar1;
  lVar4 = _UNK_00689658;
  lVar3 = _DAT_00689650;
  plVar6[10] = 0;
  plVar6[0xb] = (long)plVar7;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  *plVar6 = (long)(puVar5 + 0x10);
  plVar6[0xf] = 0;
  *(undefined4 *)((long)plVar6 + 0x9c) = 0;
  plVar6[0xc] = (long)plVar7;
  plVar6[0x11] = lVar4;
  plVar6[0x10] = lVar3;
  *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar6 + 7,this + 0x38);
  *(undefined8 *)((long)plVar6 + 0x7c) = *(undefined8 *)(this + 0x7c);
  *(undefined4 *)((long)plVar6 + 0x84) = *(undefined4 *)(this + 0x84);
  plVar6[0x11] = *(long *)(this + 0x88);
  return plVar6;
}


