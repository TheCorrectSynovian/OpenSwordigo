/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527680
 * Function: Caver::MapView::AddPathSegmentToSprite
 * Signature: undefined __thiscall AddPathSegmentToSprite(MapView * this, Sprite * param_1, Vector2 * param_2, Vector2 * param_3, float param_4, intrusive_ptr * param_5, Color param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::AddPathSegmentToSprite(Caver::Sprite*, Caver::Vector2 const&, Caver::Vector2
   const&, float, boost::intrusive_ptr<Caver::Texture> const&, Caver::Color) */

void __thiscall
Caver::MapView::AddPathSegmentToSprite
          (float param_4,undefined8 param_2_00,Sprite *param_1,float *param_2,float *param_3,
          long *param_5,Color *param_7)

{
  long lVar1;
  long lVar2;
  float __x;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2;
  fVar5 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
          (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  local_110 = fVar4;
  fStack_10c = fVar5;
  Vector2::Normalize((Vector2 *)&local_110);
  local_a0 = fStack_10c;
  fVar3 = local_110;
  __x = fVar4 * fVar4 + fVar5 * fVar5;
  fVar5 = SQRT(__x);
  fVar4 = *(float *)(*param_5 + 0x54) * 0.5;
  if (NAN(fVar5)) {
    fVar5 = sqrtf(__x);
  }
  local_b0 = *param_2;
  fStack_ac = param_2[1];
  local_a0 = param_4 * 0.5 * local_a0;
  fVar3 = param_4 * 0.5 * fVar3;
  if (fVar5 * 0.5 <= fVar4) {
    fVar4 = fVar5 * 0.5;
  }
  local_c8 = local_b0 - local_a0;
  fStack_c4 = fVar3 + fStack_ac;
  local_c0 = local_a0 + local_b0;
  fStack_bc = fStack_ac - fVar3;
  local_b0 = local_b0 + fVar4 * local_110;
  fStack_ac = fStack_ac + fVar4 * fStack_10c;
  local_b8 = local_b0 - local_a0;
  fStack_b4 = fVar3 + fStack_ac;
  local_b0 = local_a0 + local_b0;
  fStack_ac = fStack_ac - fVar3;
  local_90 = *param_3;
  fStack_8c = param_3[1];
  fVar5 = local_90 - fVar4 * local_110;
  fStack_9c = fStack_8c - fVar4 * fStack_10c;
  local_98 = local_90 - local_a0;
  fStack_94 = fVar3 + fStack_8c;
  local_90 = local_a0 + local_90;
  fStack_8c = fStack_8c - fVar3;
  local_a8 = fVar5 - local_a0;
  local_a0 = local_a0 + fVar5;
  fStack_a4 = fVar3 + fStack_9c;
  fStack_9c = fStack_9c - fVar3;
  lVar2 = *param_5;
  local_108 = *(float *)(lVar2 + 0x5c);
  fStack_fc = *(float *)(lVar2 + 0x60);
  fStack_104 = fStack_fc + *(float *)(lVar2 + 0x68);
  local_e8 = *(float *)(lVar2 + 100) * DAT_006846c0;
  local_d8 = local_108 + *(float *)(lVar2 + 100);
  local_f8 = local_108 + local_e8;
  local_e8 = local_d8 - local_e8;
  local_100 = local_108;
  fStack_f4 = fStack_104;
  local_f0 = local_f8;
  fStack_ec = fStack_fc;
  fStack_e4 = fStack_104;
  local_e0 = local_e8;
  fStack_dc = fStack_fc;
  fStack_d4 = fStack_104;
  local_d0 = local_d8;
  fStack_cc = fStack_fc;
  Sprite::AddTriangleStrip(param_1,8,(Vector2 *)&local_c8,(Vector2 *)&local_108,param_7);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


