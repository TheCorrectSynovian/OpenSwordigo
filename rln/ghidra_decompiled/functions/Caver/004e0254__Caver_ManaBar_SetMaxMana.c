/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e0254
 * Function: Caver::ManaBar::SetMaxMana
 * Signature: undefined __thiscall SetMaxMana(ManaBar * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaBar::SetMaxMana(int) */

void __thiscall Caver::ManaBar::SetMaxMana(ManaBar *this,int param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(this + 0x100) != param_1) {
    *(int *)(this + 0x100) = param_1;
    if (param_1 < *(int *)(this + 0x104)) {
      *(int *)(this + 0x104) = param_1;
    }
    lVar1 = *(long *)(this + 0xf0);
    fVar2 = (float)param_1;
    fVar3 = *(float *)(lVar1 + 0x124);
    *(float *)(lVar1 + 0x138) = fVar2;
    if (fVar3 <= fVar2) {
      fVar4 = *(float *)(lVar1 + 0x128);
    }
    else {
      fVar4 = fVar2;
      if (*(char *)(lVar1 + 0x16c) != '\0') {
        fVar4 = (float)(int)fVar2;
      }
      fVar3 = fVar2;
      if (fVar4 <= fVar2) {
        fVar3 = fVar4;
      }
      if (fVar3 <= *(float *)(lVar1 + 0x134)) {
        fVar3 = *(float *)(lVar1 + 0x134);
      }
      *(undefined4 *)(lVar1 + 300) = 0;
      *(float *)(lVar1 + 0x124) = fVar3;
      *(float *)(lVar1 + 0x128) = fVar3;
      *(undefined1 *)(lVar1 + 0x160) = 1;
      fVar4 = fVar3;
    }
    if (fVar2 < fVar4) {
      if (*(char *)(lVar1 + 0x16c) != '\0') {
        fVar3 = (float)(int)fVar3;
      }
      if (fVar3 <= fVar2) {
        fVar2 = fVar3;
      }
      if (fVar2 <= *(float *)(lVar1 + 0x134)) {
        fVar2 = *(float *)(lVar1 + 0x134);
      }
      *(undefined4 *)(lVar1 + 300) = 0;
      *(float *)(lVar1 + 0x124) = fVar2;
      *(float *)(lVar1 + 0x128) = fVar2;
      *(undefined1 *)(lVar1 + 0x160) = 1;
    }
    *(undefined1 *)(lVar1 + 0x160) = 1;
  }
  return;
}


