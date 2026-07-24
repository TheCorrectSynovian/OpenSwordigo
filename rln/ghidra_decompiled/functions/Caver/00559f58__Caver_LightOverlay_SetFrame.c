/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559f58
 * Function: Caver::LightOverlay::SetFrame
 * Signature: undefined __thiscall SetFrame(LightOverlay * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightOverlay::SetFrame(Caver::Rectangle const&) */

void __thiscall Caver::LightOverlay::SetFrame(LightOverlay *this,Rectangle *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  
                    /* try { // try from 00559f90 to 00659fa3 has its CatchHandler @ 0055a568 */
                    /* try { // try from 00559fa8 to 00659faf has its CatchHandler @ 0055a4f8 */
                    /* try { // try from 00559fb0 to 00659fd3 has its CatchHandler @ 00559e6c */
  if ((((ABS(*(float *)param_1 - *(float *)this) <= DAT_00683944) &&
       (ABS(*(float *)(param_1 + 4) - *(float *)(this + 4)) <= DAT_00683944)) &&
      (ABS(*(float *)(param_1 + 8) - *(float *)(this + 8)) <= DAT_00683944)) &&
     (ABS(*(float *)(param_1 + 0xc) - *(float *)(this + 0xc)) <= DAT_00683944)) {
    return;
  }
  uVar6 = *(undefined8 *)param_1;
  iVar2 = 10;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar6;
                    /* try { // try from 00559fd4 to 00659fd7 has its CatchHandler @ 0055a4e4 */
  fVar5 = *(float *)(param_1 + 8) / *(float *)(param_1 + 0xc);
                    /* try { // try from 00559fd8 to 0065a00b has its CatchHandler @ 00559e6c */
  iVar3 = (int)(fVar5 * 10.0);
  *(undefined4 *)(this + 0x10) = 10;
  *(int *)(this + 0x14) = iVar3;
  if ((int)(fVar5 * 11.0) * 0xb < 0x1c3) {
    iVar2 = 10;
    iVar4 = (int)(fVar5 * 11.0);
    do {
      iVar3 = iVar4;
      iVar1 = iVar2 + 2;
                    /* try { // try from 0055a00c to 0065a017 has its CatchHandler @ 0055a448 */
      iVar4 = (int)(fVar5 * (float)iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar1 * iVar4 < 0x1c3);
    *(int *)(this + 0x10) = iVar2;
    *(int *)(this + 0x14) = iVar3;
  }
                    /* try { // try from 0055a038 to 0065a05f has its CatchHandler @ 0055a2d4 */
  *(int *)(this + 0x18) = (int)(*(float *)(this + 0xc) / (float)(iVar2 + -1));
  *(int *)(this + 0x1c) = (int)(*(float *)(this + 8) / (float)(iVar3 + -1));
  CreateVertices(this);
  return;
}


