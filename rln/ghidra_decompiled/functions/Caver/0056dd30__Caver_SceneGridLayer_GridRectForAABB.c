/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056dd30
 * Function: Caver::SceneGridLayer::GridRectForAABB
 * Signature: undefined __thiscall GridRectForAABB(SceneGridLayer * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&) const */

ulong __thiscall Caver::SceneGridLayer::GridRectForAABB(SceneGridLayer *this,Rectangle *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((*(float *)(param_1 + 8) < DAT_00683488) || (*(float *)(param_1 + 0xc) < DAT_00683488)) {
    uVar7 = 0;
    uVar4 = 0;
    uVar5 = 0xffff000000000000;
    uVar8 = 0xffff0000;
  }
  else {
    uVar2 = *(int *)(this + 0x28) - 1;
    uVar3 = *(int *)(this + 0x2c) - 1;
    uVar6 = (uint)((*(float *)param_1 - *(float *)(this + 8)) * *(float *)(this + 0x20));
    uVar9 = (uint)(((*(float *)(param_1 + 8) + *(float *)param_1) - *(float *)(this + 8)) *
                  *(float *)(this + 0x20));
    uVar1 = uVar2;
    if ((int)uVar6 <= (int)uVar2) {
      uVar1 = uVar6;
    }
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar9 <= (int)uVar2) {
      uVar2 = uVar9;
    }
    uVar6 = (uint)(short)uVar1;
    uVar9 = (uint)((*(float *)(param_1 + 4) - *(float *)(this + 0xc)) * *(float *)(this + 0x24));
    if ((int)uVar2 <= (int)uVar6) {
      uVar2 = uVar6;
    }
    uVar10 = (uint)(((*(float *)(param_1 + 0xc) + *(float *)(param_1 + 4)) - *(float *)(this + 0xc))
                   * *(float *)(this + 0x24));
    uVar6 = uVar3;
    if ((int)uVar9 <= (int)uVar3) {
      uVar6 = uVar9;
    }
    uVar8 = (ulong)(uVar2 << 0x10);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar10 <= (int)uVar3) {
      uVar3 = uVar10;
    }
    uVar2 = (uint)(short)uVar6;
    if ((int)uVar3 <= (int)uVar2) {
      uVar3 = uVar2;
    }
    uVar4 = (ulong)(uVar6 & 0xffff) << 0x20;
    uVar5 = (ulong)uVar3 << 0x30;
    uVar7 = (ulong)(uVar1 & 0xffff);
  }
  return uVar8 | uVar7 | uVar4 | uVar5;
}


