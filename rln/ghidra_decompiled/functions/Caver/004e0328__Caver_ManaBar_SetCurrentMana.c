/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e0328
 * Function: Caver::ManaBar::SetCurrentMana
 * Signature: undefined __thiscall SetCurrentMana(ManaBar * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaBar::SetCurrentMana(int) */

void __thiscall Caver::ManaBar::SetCurrentMana(ManaBar *this,int param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x104) != param_1) {
    lVar1 = *(long *)(this + 0xf0);
    *(int *)(this + 0x104) = param_1;
    fVar3 = (float)param_1;
    if (*(char *)(lVar1 + 0x16c) != '\0') {
      fVar3 = (float)(int)fVar3;
    }
    fVar2 = *(float *)(lVar1 + 0x138);
    if (fVar3 <= *(float *)(lVar1 + 0x138)) {
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
  return;
}


