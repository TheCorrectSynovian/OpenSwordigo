/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d25c8
 * Function: Caver::Image::SetPixel
 * Signature: undefined __thiscall SetPixel(Image * this, int param_1, int param_2, FloatColor * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x005d26a4) */
/* WARNING: Removing unreachable block (ram,0x005d2784) */
/* Caver::Image::SetPixel(int, int, Caver::FloatColor const&) */

void __thiscall Caver::Image::SetPixel(Image *this,int param_1,int param_2,FloatColor *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = DAT_00683ffc;
  if (7 < *(int *)(this + 0xc) - 1U) {
    return;
  }
  puVar1 = (ushort *)
           (*(long *)(this + 0x18) +
           (long)((param_1 + *(int *)(this + 4) * param_2) * *(int *)(this + 0x10)));
  switch(*(int *)(this + 0xc)) {
  case 1:
    fVar4 = *(float *)param_3;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)puVar1 = (char)(int)(fVar4 * DAT_00683ffc + 0.5);
    fVar4 = *(float *)(param_3 + 4);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)((long)puVar1 + 1) = (char)(int)(fVar4 * fVar3 + 0.5);
    fVar4 = *(float *)(param_3 + 8);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)(puVar1 + 1) = (char)(int)(fVar4 * fVar3 + 0.5);
    fVar4 = *(float *)(param_3 + 0xc);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)((long)puVar1 + 3) = (char)(int)(fVar4 * fVar3 + 0.5);
    return;
  case 2:
    fVar4 = *(float *)param_3;
    fVar6 = *(float *)(param_3 + 4);
    fVar5 = *(float *)(param_3 + 8);
    fVar3 = *(float *)(param_3 + 0xc);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = fVar3 * 15.0;
    uVar2 = (ushort)((int)(fVar6 * 15.0 + 0.5) << 8) | (ushort)((int)(fVar4 * 15.0 + 0.5) << 0xc) |
            (ushort)((int)(fVar5 * 15.0 + 0.5) << 4);
    goto LAB_005d27cc;
  case 3:
    goto switchD_005d2600_caseD_3;
  case 4:
    fVar4 = *(float *)param_3;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)puVar1 = (char)(int)(fVar4 * DAT_00683ffc + 0.5);
    fVar4 = *(float *)(param_3 + 4);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)((long)puVar1 + 1) = (char)(int)(fVar4 * fVar3 + 0.5);
    fVar4 = *(float *)(param_3 + 8);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)(puVar1 + 1) = (char)(int)(fVar4 * fVar3 + 0.5);
    return;
  case 5:
    fVar4 = *(float *)param_3;
    fVar6 = *(float *)(param_3 + 4);
    fVar3 = *(float *)(param_3 + 8);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = fVar3 * 31.0;
    uVar2 = (ushort)((int)(fVar6 * DAT_006980f8 + 0.5) << 5) |
            (ushort)((int)(fVar4 * 31.0 + 0.5) << 0xb);
LAB_005d27cc:
    *puVar1 = uVar2 | (ushort)(int)(fVar3 + 0.5);
    return;
  case 6:
    fVar3 = *(float *)param_3;
    break;
  case 7:
    fVar3 = *(float *)(param_3 + 0xc);
    break;
  case 8:
    fVar4 = *(float *)param_3;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)puVar1 = (char)(int)(fVar4 * DAT_00683ffc + 0.5);
    fVar4 = *(float *)(param_3 + 0xc);
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(char *)((long)puVar1 + 1) = (char)(int)(fVar4 * fVar3 + 0.5);
    return;
  }
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(char *)puVar1 = (char)(int)(fVar3 * DAT_00683ffc + 0.5);
switchD_005d2600_caseD_3:
  return;
}


