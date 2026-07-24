/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336664
 * Function: Caver::ShadowVolumeComponent::UpdateVolume
 * Signature: undefined __thiscall UpdateVolume(ShadowVolumeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShadowVolumeComponent::UpdateVolume() */

void __thiscall Caver::ShadowVolumeComponent::UpdateVolume(ShadowVolumeComponent *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uStack_78 = _LAB_00684728;
  local_80 = _DAT_00684720;
  uStack_68 = _UNK_00684738;
  uStack_70 = _DAT_00684730;
  uStack_58 = _UNK_00684748;
  local_60 = _DAT_00684740;
  *(undefined4 *)(this + 0x80) = 4;
  LightComponent::Direction();
  iVar10 = *(int *)(this + 0x80);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)iVar10 * 3;
  uVar7 = (long)iVar10 * 0x24;
  if (SUB168(auVar3 * ZEXT816(0xc),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  pvVar5 = operator_new__(uVar7);
  pvVar6 = *(void **)(this + 0x88);
  *(void **)(this + 0x88) = pvVar5;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
    iVar10 = *(int *)(this + 0x80);
  }
  if (0 < iVar10) {
    uVar7 = 0;
    fVar11 = local_88 * DAT_00684750;
    puVar8 = (undefined4 *)((ulong)&local_80 | 8);
    puVar9 = (undefined4 *)(*(long *)(this + 0x88) + 0x14);
    do {
      uVar7 = uVar7 + 1;
      lVar2 = (uVar7 & 3) * 0xc;
      *(undefined8 *)(puVar9 + -5) = *(undefined8 *)((long)&local_80 + lVar2);
      puVar9[-3] = *(undefined4 *)((long)&uStack_78 + lVar2);
      *(undefined8 *)(puVar9 + -2) = *(undefined8 *)(puVar8 + -2);
      uVar1 = *puVar8;
      *(ulong *)(puVar9 + 1) =
           CONCAT44((float)((ulong)local_90 >> 0x20) * 100000.0,(float)local_90 * 100000.0);
      puVar9[3] = fVar11;
      *puVar9 = uVar1;
      puVar8 = puVar8 + 3;
      puVar9 = puVar9 + 9;
    } while ((long)uVar7 < (long)iVar10);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


