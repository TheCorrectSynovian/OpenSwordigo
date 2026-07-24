/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9ca0
 * Function: Caver::GUIScrollLocationController::Update
 * Signature: undefined __thiscall Update(GUIScrollLocationController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIScrollLocationController::Update(float) */

void __thiscall
Caver::GUIScrollLocationController::Update(GUIScrollLocationController *this,float param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*this == (GUIScrollLocationController)0x0) {
    this[8] = (GUIScrollLocationController)0x0;
    *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
                    /* try { // try from 005a9d34 to 006a9d5b has its CatchHandler @ 005a9d60 */
    return;
  }
  fVar5 = *(float *)(this + 0x10);
  fVar4 = 0.0;
  fVar8 = ABS(fVar5);
  if (_DAT_00684434 < fVar8) {
    fVar4 = -(fVar5 * *(float *)(this + 0x18));
  }
  if (this[8] != (GUIScrollLocationController)0x0) {
    fVar6 = *(float *)(this + 0xc);
    fVar7 = fVar6 - *(float *)(this + 4);
    if (fVar8 <= DAT_00683944) {
      iVar2 = *(int *)(this + 0x28);
      iVar3 = *(int *)(this + 0x24);
    }
    else {
      iVar2 = *(int *)(this + 0x28);
      iVar3 = *(int *)(this + 0x24);
                    /* catch() { ... } // from try @ 005a9c70 with catch @ 005a9d10 */
      if (((DAT_00683944 < fVar7 / fVar5) && (iVar3 <= iVar2)) && (_DAT_00684434 < fVar8)) {
        fVar4 = fVar4 - fVar5 * *(float *)(this + 0x20);
      }
    }
                    /* try { // try from 005a9d5c to 006a9ddf has its CatchHandler @ 005a9a78 */
    if ((10.0 <= fVar8) || (2.0 <= ABS(fVar7))) {
      fVar4 = fVar4 + fVar7 * *(float *)(this + 0x1c);
                    /* try { // try from 005a9de0 to 006a9f33 has its CatchHandler @ 005a9de0
                       catch() { ... } // from try @ 005a9de0 with catch @ 005a9de0
                       catch() { ... } // from try @ 005a9f58 with catch @ 005a9de0
                       catch() { ... } // from try @ 005a9fdc with catch @ 005a9de0
                       catch() { ... } // from try @ 005aa0c4 with catch @ 005a9de0 */
      fVar8 = fVar5 + fVar4 * param_1;
      if ((iVar2 < iVar3) ||
         (((fVar9 = fVar6 - (*(float *)(this + 4) + fVar8 * param_1), 0.0 <= fVar7 * fVar9 &&
           (1.0 <= ABS(fVar7))) && (1.0 <= ABS(fVar9))))) {
        if (fVar5 * fVar8 < 0.0) {
          *(int *)(this + 0x28) = iVar2 + 1;
        }
        goto LAB_005a9d74;
      }
    }
                    /* catch() { ... } // from try @ 005a9d34 with catch @ 005a9d60 */
    *(float *)(this + 4) = fVar6;
                    /* catch() { ... } // from try @ 005a9be0 with catch @ 005a9d64 */
    *(undefined4 *)(this + 0x10) = 0;
    this[8] = (GUIScrollLocationController)0x0;
    fVar5 = 0.0;
    fVar4 = 0.0;
  }
LAB_005a9d74:
  fVar6 = *(float *)(this + 0x14);
  fVar5 = fVar5 + fVar4 * param_1;
  fVar8 = ABS(fVar5);
  *(float *)(this + 0x10) = fVar5;
  if (fVar6 < fVar8) {
    bVar1 = fVar5 <= 0.0;
    fVar5 = fVar6;
    if (bVar1) {
      fVar5 = -fVar6;
    }
    fVar8 = ABS(fVar5);
    *(float *)(this + 0x10) = fVar5;
  }
  fVar6 = *(float *)(this + 4);
  if ((ABS(fVar4) < 1.0) && (fVar8 < 1.0)) {
    fVar6 = (float)(int)fVar6;
    *(float *)(this + 4) = fVar6;
  }
  *(float *)(this + 4) = fVar5 * param_1 + fVar6;
                    /* catch() { ... } // from try @ 005a9bcc with catch @ 005a9dd4 */
  return;
}


