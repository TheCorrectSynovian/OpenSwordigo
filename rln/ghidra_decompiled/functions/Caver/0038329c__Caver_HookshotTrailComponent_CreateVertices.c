/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038329c
 * Function: Caver::HookshotTrailComponent::CreateVertices
 * Signature: undefined __thiscall CreateVertices(HookshotTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HookshotTrailComponent::CreateVertices() */

void __thiscall Caver::HookshotTrailComponent::CreateVertices(HookshotTrailComponent *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  void *pvVar11;
  
  *(undefined4 *)(this + 0x90) = 0xc;
  pvVar9 = operator_new__(0xc0);
  pvVar11 = *(void **)(this + 0x88);
  *(void **)(this + 0x88) = pvVar9;
  if (pvVar11 != (void *)0x0) {
    operator_delete__(pvVar11);
  }
  *(undefined4 *)(this + 0xa0) = 0xc;
  puVar10 = operator_new__(0x48);
  pvVar9 = *(void **)(this + 0x98);
  *(undefined8 **)(this + 0x98) = puVar10;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
    puVar10 = *(undefined8 **)(this + 0x98);
  }
  uVar8 = DAT_00688ae0;
  uVar7 = _UNK_00688ad8;
  uVar6 = _DAT_00688ad0;
  uVar5 = _UNK_00688ac8;
  uVar4 = _DAT_00688ac0;
  uVar3 = _UNK_00688ab8;
  uVar2 = _DAT_00688ab0;
  uVar1 = _DAT_00688aa0;
  puVar10[1] = _UNK_00688aa8;
  *puVar10 = uVar1;
  puVar10[3] = uVar3;
  puVar10[2] = uVar2;
  puVar10[5] = uVar5;
  puVar10[4] = uVar4;
  puVar10[7] = uVar7;
  puVar10[6] = uVar6;
  puVar10[8] = uVar8;
  return;
}


