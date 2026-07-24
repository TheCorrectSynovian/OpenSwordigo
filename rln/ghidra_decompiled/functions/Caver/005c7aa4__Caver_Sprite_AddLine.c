/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7aa4
 * Function: Caver::Sprite::AddLine
 * Signature: undefined __thiscall AddLine(Sprite * this, Vector2 * param_1, Vector2 * param_2, float param_3, Rectangle * param_4, Color * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddLine(Caver::Vector2 const&, Caver::Vector2 const&, float, Caver::Rectangle
   const&, Caver::Color const&) */

void __thiscall
Caver::Sprite::AddLine
          (Sprite *this,Vector2 *param_1,Vector2 *param_2,float param_3,Rectangle *param_4,
          Color *param_5)

{
  long lVar1;
  float local_b0;
  float fStack_ac;
  Color local_a8;
  Color local_a7;
  Color local_a6;
  Color local_a5;
  Color local_a4;
  Color local_a3;
  Color local_a2;
  Color local_a1;
  Color local_a0;
  Color local_9f;
  Color local_9e;
  Color local_9d;
  Color local_9c;
  Color local_9b;
  Color local_9a;
  Color local_99;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005c7ad8 to 006c7aff has its CatchHandler @ 005c7c44 */
  local_b0 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fStack_ac = -(*(float *)param_2 - *(float *)param_1);
                    /* try { // try from 005c7b00 to 006c7d6f has its CatchHandler @ 005c79a4 */
  Vector2::Normalize((Vector2 *)&local_b0);
  local_60 = local_b0 * param_3;
  fStack_5c = fStack_ac * param_3;
  local_78 = *(float *)param_1 - local_60;
  fStack_74 = *(float *)(param_1 + 4) - fStack_5c;
  local_70 = local_60 + *(float *)param_1;
  fStack_6c = fStack_5c + *(float *)(param_1 + 4);
  local_68 = local_60 + *(float *)param_2;
  fStack_64 = fStack_5c + *(float *)(param_2 + 4);
  local_60 = *(float *)param_2 - local_60;
  fStack_5c = *(float *)(param_2 + 4) - fStack_5c;
  local_98 = *(float *)param_4;
  fStack_94 = *(float *)(param_4 + 4);
  local_90 = *(float *)(param_4 + 8) + local_98;
  local_84 = *(float *)(param_4 + 0xc) + fStack_94;
  local_a8 = *param_5;
  local_a7 = param_5[1];
  local_a6 = param_5[2];
  local_a5 = param_5[3];
  local_a4 = local_a8;
  local_a3 = local_a7;
  local_a2 = local_a6;
  local_a1 = local_a5;
  local_a0 = local_a8;
  local_9f = local_a7;
  local_9e = local_a6;
  local_9d = local_a5;
  local_9c = local_a8;
  local_9b = local_a7;
  local_9a = local_a6;
  local_99 = local_a5;
  local_8c = fStack_94;
  local_88 = local_90;
  local_80 = local_98;
  local_7c = local_84;
  AddQuad(this,(Vector2 *)&local_78,(Vector2 *)&local_98,&local_a8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


