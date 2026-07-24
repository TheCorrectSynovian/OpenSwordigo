/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c733c
 * Function: Caver::Sprite::AddRectangle
 * Signature: undefined __thiscall AddRectangle(Sprite * this, Rectangle * param_1, Rectangle * param_2, Color * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddRectangle(Caver::Rectangle const&, Caver::Rectangle const&, Caver::Color
   const&) */

void __thiscall
Caver::Sprite::AddRectangle(Sprite *this,Rectangle *param_1,Rectangle *param_2,Color *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Color local_98;
  Color local_97;
  Color local_96;
  Color local_95;
  Color local_94;
  Color local_93;
  Color local_92;
  Color local_91;
  Color local_90;
  Color local_8f;
  Color local_8e;
  Color local_8d;
  Color local_8c;
  Color local_8b;
  Color local_8a;
  Color local_89;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 005c6bc0 with catch @ 005c7354 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 005c6cf0 with catch @ 005c7358
                       catch() { ... } // from try @ 005c6d90 with catch @ 005c7358 */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005c6b94 with catch @ 005c7368 */
  if (DAT_00683734 <= *(float *)(this + 0x10)) {
    Rectangle::ExpandToincludeRectangle((Rectangle *)(this + 8),param_1);
  }
  else {
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 8) = uVar2;
  }
  local_68 = *(float *)param_1;
  fStack_64 = *(float *)(param_1 + 4);
  local_60 = *(float *)(param_1 + 8) + local_68;
                    /* catch() { ... } // from try @ 005c6b8c with catch @ 005c73c4 */
                    /* catch() { ... } // from try @ 005c6a4c with catch @ 005c73c8 */
                    /* catch() { ... } // from try @ 005c69a8 with catch @ 005c73cc */
  local_54 = *(float *)(param_1 + 0xc) + fStack_64;
  local_88 = *(float *)param_2;
  fStack_84 = *(float *)(param_2 + 4);
  local_80 = *(float *)(param_2 + 8) + local_88;
  local_74 = *(float *)(param_2 + 0xc) + fStack_84;
                    /* catch() { ... } // from try @ 005c6c94 with catch @ 005c741c
                       catch() { ... } // from try @ 005c6ca8 with catch @ 005c741c
                       catch() { ... } // from try @ 005c6f50 with catch @ 005c741c */
  local_98 = *param_3;
                    /* catch() { ... } // from try @ 005c692c with catch @ 005c7424 */
  local_97 = param_3[1];
  local_96 = param_3[2];
  local_95 = param_3[3];
  local_94 = local_98;
  local_93 = local_97;
  local_92 = local_96;
  local_91 = local_95;
  local_90 = local_98;
  local_8f = local_97;
  local_8e = local_96;
  local_8d = local_95;
  local_8c = local_98;
  local_8b = local_97;
  local_8a = local_96;
  local_89 = local_95;
  local_7c = fStack_84;
  local_78 = local_80;
  local_70 = local_88;
  local_6c = local_74;
  local_5c = fStack_64;
  local_58 = local_60;
  local_50 = local_68;
  local_4c = local_54;
  AddQuad(this,(Vector2 *)&local_68,(Vector2 *)&local_88,&local_98);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 005c6920 with catch @ 005c748c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


