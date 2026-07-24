/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7614
 * Function: Caver::Sprite::AddTransformedRectangle
 * Signature: undefined __thiscall AddTransformedRectangle(Sprite * this, Rectangle * param_1, Rectangle * param_2, Matrix4 * param_3, Color * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&, Caver::Rectangle const&,
   Caver::Matrix4 const&, Caver::Color const&) */

void __thiscall
Caver::Sprite::AddTransformedRectangle
          (Sprite *this,Rectangle *param_1,Rectangle *param_2,Matrix4 *param_3,Color *param_4)

{
  Rectangle *this_00;
  long lVar1;
  undefined8 uVar2;
  undefined8 local_e0;
  undefined8 local_d8;
  Vector4 aVStack_d0 [16];
  Vector3 aVStack_c0 [16];
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
  uVar2 = DAT_006840e0;
                    /* try { // try from 005c7630 to 006c7653 has its CatchHandler @ 005c6574 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_78 = *(float *)param_1;
  fStack_74 = *(float *)(param_1 + 4);
  local_e0 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 005c7108 with catch @ 005c7650
                       catch() { ... } // from try @ 005c71ac with catch @ 005c7650
                       catch() { ... } // from try @ 005c7288 with catch @ 005c7650
                       catch() { ... } // from try @ 005c7580 with catch @ 005c7650 */
                    /* catch() { ... } // from try @ 005c7704 with catch @ 005c7654 */
  this_00 = (Rectangle *)(this + 8);
                    /* try { // try from 005c766c to 006c7673 has its CatchHandler @ 005c7710 */
  local_70 = *(float *)(param_1 + 8) + local_78;
  fStack_64 = *(float *)(param_1 + 0xc) + fStack_74;
  local_98 = *(float *)param_2;
  fStack_94 = *(float *)(param_2 + 4);
                    /* try { // try from 005c76a0 to 006c76ab has its CatchHandler @ 005c76b8 */
  local_90 = *(float *)(param_2 + 8) + local_98;
                    /* catch() { ... } // from try @ 005c76a0 with catch @ 005c76b8 */
  local_84 = *(float *)(param_2 + 0xc) + fStack_94;
  local_a8 = *param_4;
  local_a7 = param_4[1];
                    /* try { // try from 005c76dc to 006c7703 has its CatchHandler @ 005c770c */
  local_a6 = param_4[2];
  local_a5 = param_4[3];
                    /* try { // try from 005c7704 to 006c771f has its CatchHandler @ 005c7654 */
                    /* catch() { ... } // from try @ 005c76dc with catch @ 005c770c */
                    /* catch() { ... } // from try @ 005c766c with catch @ 005c7710 */
                    /* try { // try from 005c7720 to 006c772b has its CatchHandler @ 005c772c */
  local_d8 = DAT_006840e0;
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
  fStack_6c = fStack_74;
  local_68 = local_70;
  local_60 = local_78;
  fStack_5c = fStack_64;
  C_Matrix4Vector4Mul((float *)param_3,(float *)&local_e0,(float *)aVStack_d0);
                    /* catch() { ... } // from try @ 005c7720 with catch @ 005c772c */
                    /* try { // try from 005c7730 to 006c7733 has its CatchHandler @ 005c7738 */
  Vector3::Vector3(aVStack_c0,aVStack_d0);
                    /* catch() { ... } // from try @ 005c7730 with catch @ 005c7738 */
                    /* try { // try from 005c773c to 006c785f has its CatchHandler @ 005c773c
                       catch(type#1 @ 00000000) { ... } // from try @ 005c773c with catch @ 005c773c
                       catch(type#1 @ 00000000) { ... } // from try @ 005c7888 with catch @ 005c773c
                       catch(type#1 @ 00000000) { ... } // from try @ 005c7998 with catch @ 005c773c
                        */
  Vector2::Vector2((Vector2 *)&local_b0,aVStack_c0);
  local_78 = (float)local_b0;
  fStack_74 = (float)uStack_ac;
  if (DAT_00683734 <= *(float *)(this + 0x10)) {
    Rectangle::ExpandToIncludePoint(this_00,(Vector2 *)&local_78);
  }
  else {
    *(undefined4 *)(this + 8) = local_b0;
    *(undefined4 *)(this + 0xc) = uStack_ac;
    *(undefined8 *)(this + 0x10) = 0;
  }
  local_e0 = CONCAT44(fStack_6c,local_70);
  local_d8 = uVar2;
  C_Matrix4Vector4Mul((float *)param_3,(float *)&local_e0,(float *)aVStack_d0);
  Vector3::Vector3(aVStack_c0,aVStack_d0);
  Vector2::Vector2((Vector2 *)&local_b0,aVStack_c0);
  local_70 = (float)local_b0;
  fStack_6c = (float)uStack_ac;
  Rectangle::ExpandToIncludePoint(this_00,(Vector2 *)&local_70);
  local_e0 = CONCAT44(fStack_64,local_68);
  local_d8 = uVar2;
  C_Matrix4Vector4Mul((float *)param_3,(float *)&local_e0,(float *)aVStack_d0);
  Vector3::Vector3(aVStack_c0,aVStack_d0);
  Vector2::Vector2((Vector2 *)&local_b0,aVStack_c0);
  local_68 = (float)local_b0;
  fStack_64 = (float)uStack_ac;
  Rectangle::ExpandToIncludePoint(this_00,(Vector2 *)&local_68);
  local_e0 = CONCAT44(fStack_5c,local_60);
  local_d8 = uVar2;
  C_Matrix4Vector4Mul((float *)param_3,(float *)&local_e0,(float *)aVStack_d0);
  Vector3::Vector3(aVStack_c0,aVStack_d0);
  Vector2::Vector2((Vector2 *)&local_b0,aVStack_c0);
  local_60 = (float)local_b0;
  fStack_5c = (float)uStack_ac;
  Rectangle::ExpandToIncludePoint(this_00,(Vector2 *)&local_60);
                    /* try { // try from 005c7860 to 006c7887 has its CatchHandler @ 005c794c */
  AddQuad(this,(Vector2 *)&local_78,(Vector2 *)&local_98,&local_a8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005c7888 to 006c796f has its CatchHandler @ 005c773c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


