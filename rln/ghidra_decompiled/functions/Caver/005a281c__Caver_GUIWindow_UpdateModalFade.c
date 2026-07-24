/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a281c
 * Function: Caver::GUIWindow::UpdateModalFade
 * Signature: undefined __thiscall UpdateModalFade(GUIWindow * this, bool param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::UpdateModalFade(bool, float) */

void __thiscall Caver::GUIWindow::UpdateModalFade(GUIWindow *this,bool param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((*(long *)(this + 0x1d0) == 0) || (DAT_00683734 < *(float *)(this + 0x1fc))) {
    bVar1 = false;
  }
  else {
    bVar1 = this[0x1f8] == (GUIWindow)0x0;
  }
  if (param_1) {
    if (bVar1) {
      fVar4 = *(float *)(this + 0x1dc);
                    /* try { // try from 005a2850 to 006a2863 has its CatchHandler @ 005a29d8 */
      fVar2 = *(float *)(this + 0x1d8) + (fVar4 / DAT_00684318) * param_2;
                    /* try { // try from 005a2864 to 006a2937 has its CatchHandler @ 005a27cc */
      *(float *)(this + 0x1d8) = fVar2;
      if (fVar4 < fVar2) {
        *(float *)(this + 0x1d8) = fVar4;
        return;
      }
    }
    else {
      fVar2 = *(float *)(this + 0x1d8) + param_2 * -2.5;
      *(float *)(this + 0x1d8) = fVar2;
      if (fVar2 < 0.0) {
        *(undefined4 *)(this + 0x1d8) = 0;
        return;
      }
    }
  }
  else {
    uVar3 = 0;
    if (bVar1) {
      uVar3 = *(undefined4 *)(this + 0x1dc);
    }
    *(undefined4 *)(this + 0x1d8) = uVar3;
  }
  return;
}


