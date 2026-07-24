/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1680
 * Function: Caver::Rectangle::DistanceFromPoint
 * Signature: undefined __thiscall DistanceFromPoint(Rectangle * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::DistanceFromPoint(Caver::Vector2 const&) const */

undefined1  [16] __thiscall Caver::Rectangle::DistanceFromPoint(Rectangle *this,Vector2 *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  fVar1 = *(float *)param_1;
  fVar6 = *(float *)this;
  if (fVar6 <= fVar1) {
    fVar4 = *(float *)(this + 4);
    fVar3 = *(float *)(param_1 + 4);
    fVar6 = fVar6 + *(float *)(this + 8);
    fVar5 = fVar4;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
      if ((fVar4 <= fVar3) &&
         (fVar5 = fVar4 + *(float *)(this + 0xc), fVar3 <= fVar4 + *(float *)(this + 0xc))) {
        fVar5 = fVar3;
      }
      goto LAB_005b16f8;
    }
    if (fVar3 < fVar4) goto LAB_005b16f8;
  }
  else {
    fVar3 = *(float *)(param_1 + 4);
    fVar4 = *(float *)(this + 4);
    fVar5 = fVar4;
    if (fVar3 < fVar4) goto LAB_005b16f8;
  }
  fVar5 = fVar4 + *(float *)(this + 0xc);
  if (fVar3 <= fVar4 + *(float *)(this + 0xc)) {
    fVar5 = fVar3;
  }
LAB_005b16f8:
  fVar6 = (fVar5 - fVar3) * (fVar5 - fVar3) + (fVar6 - fVar1) * (fVar6 - fVar1);
  fVar1 = SQRT(fVar6);
  if (NAN(fVar1)) {
    auVar2._0_4_ = sqrtf(fVar6);
    auVar2._4_4_ = extraout_var;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b1870 with catch @ 005b171c
                       catch(type#1 @ 00000000) { ... } // from try @ 005b1aec with catch @ 005b171c
                        */
  return ZEXT416((uint)fVar1);
}


