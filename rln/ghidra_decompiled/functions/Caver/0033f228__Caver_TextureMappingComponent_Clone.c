/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033f228
 * Function: Caver::TextureMappingComponent::Clone
 * Signature: undefined __thiscall Clone(TextureMappingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::Clone() const */

long * __thiscall Caver::TextureMappingComponent::Clone(TextureMappingComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = operator_new(0x90);
  *(undefined4 *)(plVar6 + 1) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(undefined1 *)(plVar6 + 6) = 0;
  puVar5 = PTR_vtable_007e5960;
  puVar1 = PTR_vtable_007e5960 + 0x128;
  puVar2 = PTR_vtable_007e5960 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  plVar6[7] = (long)puVar3;
  plVar7 = plVar6 + 9;
  *plVar7 = 0;
  plVar6[3] = (long)puVar2;
  plVar6[2] = (long)puVar1;
  lVar4 = DAT_00684a10;
  *plVar6 = (long)(puVar5 + 0x10);
  plVar6[10] = 0;
  plVar6[0xb] = (long)plVar7;
  plVar6[0xc] = (long)plVar7;
  plVar6[0xd] = 0;
  plVar6[0xe] = (long)puVar3;
  plVar6[0xf] = 0;
  *(undefined4 *)(plVar6 + 0x11) = 0;
  plVar6[0x10] = lVar4;
  *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar6 + 7,this + 0x38);
  FUN_0066a6a8(plVar6 + 0xe,this + 0x70);
  plVar6[0x10] = *(long *)(this + 0x80);
  *(undefined4 *)(plVar6 + 0x11) = *(undefined4 *)(this + 0x88);
  return plVar6;
}


