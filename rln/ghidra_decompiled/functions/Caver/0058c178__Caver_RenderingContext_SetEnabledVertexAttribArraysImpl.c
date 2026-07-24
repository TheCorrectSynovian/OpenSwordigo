/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c178
 * Function: Caver::RenderingContext::SetEnabledVertexAttribArraysImpl
 * Signature: undefined __thiscall SetEnabledVertexAttribArraysImpl(RenderingContext * this, uint * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(unsigned int*, int) */

void __thiscall
Caver::RenderingContext::SetEnabledVertexAttribArraysImpl
          (RenderingContext *this,uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = (ulong)(uint)param_2;
                    /* try { // try from 0058c1a0 to 0068c1ab has its CatchHandler @ 0058ccc0 */
  if (*(int *)(this + 0x130) < 1) {
    uVar4 = 0;
    if (param_2 < 1) goto LAB_0058c28c;
  }
  else {
                    /* try { // try from 0058c1ac to 0068c1b3 has its CatchHandler @ 0058ca64 */
    uVar5 = 0;
    uVar4 = 0;
                    /* try { // try from 0058c1b4 to 0068c1bf has its CatchHandler @ 0058ccc0 */
    do {
      uVar1 = *(uint *)(this + uVar5 * 4 + 0x108);
                    /* try { // try from 0058c1c8 to 0068c21f has its CatchHandler @ 0058cce0 */
      if (0 < param_2) {
        lVar2 = 0;
        do {
          if (uVar5 == param_1[lVar2]) {
            param_1[lVar2] = 0;
            if (uVar5 != uVar4) {
              *(undefined4 *)(this + (long)(int)uVar4 * 4 + 0x108) =
                   *(undefined4 *)(this + uVar5 * 4 + 0x108);
            }
            uVar4 = uVar4 + 1;
            goto LAB_0058c238;
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < param_2);
      }
      VertexArrayObject::SetVertexAttribArrayEnabled(this,uVar1,false);
      *(undefined4 *)(this + uVar5 * 4 + 0x108) = 0;
      if ((uVar1 == 0x8076) && (*(int *)this == 0)) {
        this[0x76] = (RenderingContext)0x1;
      }
LAB_0058c238:
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(this + 0x130));
                    /* try { // try from 0058c248 to 0068c24f has its CatchHandler @ 0058ca14 */
    if (param_2 <= (int)uVar4) goto LAB_0058c28c;
  }
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      if (uVar1 != 0) {
                    /* try { // try from 0058c270 to 0068c297 has its CatchHandler @ 0058c8f0 */
        VertexArrayObject::SetVertexAttribArrayEnabled(this,uVar1,true);
        lVar2 = (long)(int)uVar4;
        uVar4 = uVar4 + 1;
        *(uint *)(this + lVar2 * 4 + 0x108) = uVar1;
      }
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
LAB_0058c28c:
  *(uint *)(this + 0x130) = uVar4;
                    /* try { // try from 0058c2a0 to 0068c2af has its CatchHandler @ 0058cc70 */
  return;
}


