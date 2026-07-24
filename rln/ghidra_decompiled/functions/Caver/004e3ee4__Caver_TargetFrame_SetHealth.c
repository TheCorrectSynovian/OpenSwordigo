/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e3ee4
 * Function: Caver::TargetFrame::SetHealth
 * Signature: undefined __thiscall SetHealth(TargetFrame * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::SetHealth(float) */

void __thiscall Caver::TargetFrame::SetHealth(TargetFrame *this,float param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (ABS(param_1 - *(float *)(this + 0x108)) <= DAT_00683734) {
    return;
  }
  lVar2 = *(long *)(this + 0x110);
  *(float *)(this + 0x108) = param_1;
  if (this[0xe4] == (TargetFrame)0x0) {
    fVar3 = *(float *)(lVar2 + 0x134);
    fVar5 = param_1 - *(float *)(lVar2 + 0x128);
    fVar4 = *(float *)(lVar2 + 0x138);
    fVar6 = ABS(fVar5);
    if (DAT_00683944 < fVar6) {
      if (param_1 <= fVar4) {
        fVar4 = param_1;
      }
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      *(float *)(lVar2 + 0x124) = fVar4;
      *(float *)(lVar2 + 300) = fVar5 / fVar6;
      UpdateHealthText(this);
      return;
    }
    cVar1 = *(char *)(lVar2 + 0x16c);
  }
  else {
    fVar3 = *(float *)(lVar2 + 0x134);
    cVar1 = *(char *)(lVar2 + 0x16c);
    fVar4 = *(float *)(lVar2 + 0x138);
  }
  if (cVar1 != '\0') {
    param_1 = (float)(int)param_1;
  }
  if (param_1 <= fVar4) {
    fVar4 = param_1;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  *(undefined4 *)(lVar2 + 300) = 0;
  *(float *)(lVar2 + 0x124) = fVar4;
  *(float *)(lVar2 + 0x128) = fVar4;
  *(undefined1 *)(lVar2 + 0x160) = 1;
  UpdateHealthText(this);
  return;
}


