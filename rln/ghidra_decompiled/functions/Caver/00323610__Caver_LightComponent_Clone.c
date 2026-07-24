/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323610
 * Function: Caver::LightComponent::Clone
 * Signature: undefined __thiscall Clone(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LightComponent::Clone() const */

long * __thiscall Caver::LightComponent::Clone(LightComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  plVar3 = operator_new(0xb0);
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined1 *)(plVar3 + 6) = 0;
  puVar2 = PTR_vtable_007e5ed0;
  uVar6 = DAT_00683ee8;
  auVar7 = NEON_fmov(0x3f800000,4);
  plVar3[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar4 = plVar3 + 9;
  *plVar4 = 0;
  *(long *)((long)plVar3 + 0x7c) = auVar7._8_8_;
  *(long *)((long)plVar3 + 0x74) = auVar7._0_8_;
  *(undefined8 *)((long)plVar3 + 0x94) = uVar6;
  uVar1 = _UNK_00683f08;
  uVar6 = _DAT_00683f00;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)plVar3 + 0x84) = 0x3f800000;
  plVar3[3] = (long)(puVar2 + 0x168);
  plVar3[2] = (long)(puVar2 + 0x128);
  plVar3[10] = 0;
  plVar3[0xb] = (long)plVar4;
  plVar3[0xc] = (long)plVar4;
  plVar3[0xd] = 0;
  *(undefined4 *)(plVar3 + 0xe) = 0;
  *(undefined1 *)(plVar3 + 0x12) = 0;
  *(undefined4 *)((long)plVar3 + 0xac) = 0xffffffff;
  *(undefined8 *)((long)plVar3 + 0xa4) = uVar1;
  *(undefined8 *)((long)plVar3 + 0x9c) = uVar6;
  *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar3 + 7,this + 0x38);
  plVar3[0xe] = *(long *)(this + 0x70);
  lVar5 = *(long *)(this + 0x78);
  plVar3[0x10] = *(long *)(this + 0x80);
  plVar3[0xf] = lVar5;
  uVar6 = *(undefined8 *)(this + 0x94);
  *(undefined8 *)((long)plVar3 + 0x9c) = *(undefined8 *)(this + 0x9c);
  *(undefined8 *)((long)plVar3 + 0x94) = uVar6;
  *(undefined4 *)((long)plVar3 + 0xa4) = *(undefined4 *)(this + 0xa4);
  *(undefined4 *)(plVar3 + 0x15) = *(undefined4 *)(this + 0xa8);
  return plVar3;
}


