/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d924
 * Function: Caver::SceneGridLayer::Init
 * Signature: undefined __thiscall Init(SceneGridLayer * this, Rectangle * param_1, float param_2, float param_3, float param_4, float param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::Init(Caver::Rectangle const&, float, float, float, float) */

void __thiscall
Caver::SceneGridLayer::Init
          (SceneGridLayer *this,Rectangle *param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
                    /* try { // try from 0056d940 to 0066d96f has its CatchHandler @ 0056e0ac */
  if (*(long *)(this + 0x30) != 0) {
    Reset(this);
  }
  uVar9 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar9;
  *(float *)(this + 0x20) = 1.0 / param_2;
  *(float *)(this + 0x24) = 1.0 / param_3;
                    /* try { // try from 0056d990 to 0066d9b7 has its CatchHandler @ 0056e418 */
  iVar2 = (int)(*(float *)(this + 0x14) / param_3) * (int)(*(float *)(this + 0x10) / param_2);
  uVar7 = (ulong)iVar2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar7;
  uVar1 = (long)iVar2 * 0x10 + 8;
  *(int *)(this + 0x28) = (int)(*(float *)(this + 0x10) / param_2);
  *(int *)(this + 0x2c) = (int)(*(float *)(this + 0x14) / param_3);
  if (SUB168(auVar3 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < (ulong)((long)iVar2 * 0x10)) {
    uVar1 = 0xffffffffffffffff;
  }
  *(float *)(this + 0x18) = param_2;
  *(float *)(this + 0x1c) = param_3;
  *(float *)this = param_4;
  *(float *)(this + 4) = param_5;
  puVar4 = operator_new__(uVar1);
  *puVar4 = uVar7;
  if (iVar2 != 0) {
    memset(puVar4 + 1,0,uVar7 << 4);
  }
  lVar8 = *(long *)(this + 0x30);
  *(ulong **)(this + 0x30) = puVar4 + 1;
  if (lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + -8);
    if (lVar6 != 0) {
      lVar6 = lVar6 << 4;
      do {
        pvVar5 = *(void **)(lVar8 + lVar6 + -0x10);
        if (pvVar5 != (void *)0x0) {
          operator_delete__(pvVar5);
        }
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
                    /* try { // try from 0056da20 to 0066da4f has its CatchHandler @ 0056e41c */
    operator_delete__((long *)(lVar8 + -8));
  }
  if (this[0x48] != (SceneGridLayer)0x0) {
    CreateVertexData(this);
    return;
  }
                    /* try { // try from 0056da50 to 0066da63 has its CatchHandler @ 0056e420 */
  return;
}


