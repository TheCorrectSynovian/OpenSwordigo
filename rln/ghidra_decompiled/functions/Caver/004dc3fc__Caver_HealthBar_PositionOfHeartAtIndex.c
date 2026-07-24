/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc3fc
 * Function: Caver::HealthBar::PositionOfHeartAtIndex
 * Signature: undefined __cdecl PositionOfHeartAtIndex(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::PositionOfHeartAtIndex(int) */

void Caver::HealthBar::PositionOfHeartAtIndex(int param_1)

{
  int iVar1;
  ulong uVar2;
  int in_w1;
  int *in_x8;
  float fVar3;
  float fVar4;
  
  uVar2 = (ulong)(uint)param_1;
  fVar3 = *(float *)(uVar2 + 0x11c) * DAT_0068493c;
  if (*(char *)(uVar2 + 0x108) == '\0') {
    fVar4 = 0.0;
  }
  else {
    iVar1 = *(int *)(uVar2 + 0x10c);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    fVar4 = (*(float *)(uVar2 + 0x84) + *(float *)(uVar2 + 0x8c) * 0.5) -
            (*(float *)(uVar2 + 0x11c) + fVar3 * (float)((iVar1 >> 1) + -1)) * 0.5;
  }
  iVar1 = *(int *)(uVar2 + 0x88);
  *in_x8 = (int)(fVar3 * (float)in_w1 + fVar4);
  in_x8[1] = iVar1;
  return;
}


