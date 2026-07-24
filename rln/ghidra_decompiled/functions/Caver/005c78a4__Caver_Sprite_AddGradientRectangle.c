/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c78a4
 * Function: Caver::Sprite::AddGradientRectangle
 * Signature: undefined __thiscall AddGradientRectangle(Sprite * this, Rectangle * param_1, Rectangle * param_2, shared_ptr * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&, Caver::Rectangle const&,
   boost::shared_ptr<Caver::GradientColor> const&) */

int __thiscall
Caver::Sprite::AddGradientRectangle
          (Sprite *this,Rectangle *param_1,Rectangle *param_2,shared_ptr *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Color local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  Color local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  float local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (DAT_00683734 <= *(float *)(this + 0x10)) {
    Rectangle::ExpandToincludeRectangle((Rectangle *)(this + 8),param_1);
  }
  else {
    uVar8 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 8) = uVar8;
  }
  piVar3 = *(int **)param_3;
  if (*piVar3 < 2) {
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = 0;
    iVar4 = 0;
    do {
      local_78 = *(float *)param_1;
      fVar7 = *(float *)(param_1 + 4);
      local_98 = *(float *)param_2;
      fVar9 = *(float *)(param_1 + 0xc);
      fVar10 = *(float *)(param_2 + 4);
      fVar12 = *(float *)(*(long *)(piVar3 + 2) + lVar5);
      fVar13 = ((float *)(*(long *)(piVar3 + 2) + lVar5))[1];
      fVar11 = *(float *)(param_2 + 0xc);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c7860 with catch @ 005c794c
                        */
      fStack_70 = *(float *)(param_1 + 8) + local_78;
      fStack_90 = *(float *)(param_2 + 8) + local_98;
      local_74 = (fVar7 + fVar9) - fVar13 * fVar9;
                    /* try { // try from 005c7970 to 006c7997 has its CatchHandler @ 005c79a0 */
      puVar1 = (undefined1 *)(*(long *)(piVar3 + 4) + lVar5);
      local_a0 = *puVar1;
      local_9f = puVar1[1];
      local_9e = puVar1[2];
      local_9d = puVar1[3];
      local_a8 = *(Color *)(puVar1 + 4);
      local_a7 = puVar1[5];
                    /* try { // try from 005c7998 to 006c79a3 has its CatchHandler @ 005c773c */
      local_a6 = puVar1[6];
      local_a5 = puVar1[7];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c7970 with catch @ 005c79a0
                        */
                    /* try { // try from 005c79a4 to 006c79e7 has its CatchHandler @ 005c79a4
                       catch() { ... } // from try @ 005c79a4 with catch @ 005c79a4
                       catch() { ... } // from try @ 005c7b00 with catch @ 005c79a4
                       catch() { ... } // from try @ 005c7d98 with catch @ 005c79a4 */
      local_94 = (fVar10 + fVar11) - fVar13 * fVar11;
      local_64 = local_74 + ((fVar7 + (((fVar7 + fVar9) - fVar12 * fVar9) - fVar7)) - local_74);
      local_84 = local_94 + ((fVar10 + (((fVar10 + fVar11) - fVar12 * fVar11) - fVar10)) - local_94)
      ;
      lVar6 = lVar6 + 1;
      local_a4 = local_a8;
      local_a3 = local_a7;
      local_a2 = local_a6;
      local_a1 = local_a5;
      local_9c = local_a0;
      local_9b = local_9f;
      local_9a = local_9e;
      local_99 = local_9d;
      local_8c = local_94;
      fStack_88 = fStack_90;
      local_80 = local_98;
      local_7c = local_84;
      local_6c = local_74;
      fStack_68 = fStack_70;
      local_60 = local_78;
      local_5c = local_64;
                    /* try { // try from 005c79e8 to 006c79f7 has its CatchHandler @ 005c7c98 */
                    /* try { // try from 005c7a18 to 006c7a23 has its CatchHandler @ 005c7c88 */
                    /* try { // try from 005c7a24 to 006c7a43 has its CatchHandler @ 005c7d08 */
      AddQuad(this,(Vector2 *)&local_78,(Vector2 *)&local_98,&local_a8);
      piVar3 = *(int **)param_3;
      iVar4 = iVar4 + 2;
                    /* try { // try from 005c7a54 to 006c7a5f has its CatchHandler @ 005c7c84 */
      lVar5 = lVar5 + 4;
                    /* try { // try from 005c7a64 to 006c7a6f has its CatchHandler @ 005c7c80 */
    } while (lVar6 < (long)*piVar3 + -1);
  }
                    /* try { // try from 005c7a70 to 006c7a7f has its CatchHandler @ 005c7c48 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


