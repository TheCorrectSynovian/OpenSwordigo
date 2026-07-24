/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058c004
 * Function: Caver::RenderingContext::SetEnabledVertexAttribArrays
 * Signature: undefined __thiscall SetEnabledVertexAttribArrays(RenderingContext * this, uint param_1, ...)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetEnabledVertexAttribArrays(unsigned int, ...) */

void __thiscall
Caver::RenderingContext::SetEnabledVertexAttribArrays(RenderingContext *this,uint param_1,...)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  uint auStack_80 [10];
  long local_58;
  
                    /* try { // try from 0058c02c to 0068c037 has its CatchHandler @ 0058ccd0 */
                    /* try { // try from 0058c038 to 0068c03f has its CatchHandler @ 0058cbb8 */
  lVar3 = tpidr_el0;
                    /* try { // try from 0058c040 to 0068c04b has its CatchHandler @ 0058ccd0 */
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) {
    if (0 < *(int *)(this + 0x130)) {
      lVar4 = 0;
      do {
        uVar2 = *(uint *)(this + lVar4 * 4 + 0x108);
        VertexArrayObject::SetVertexAttribArrayEnabled(this,uVar2,false);
        *(undefined4 *)(this + lVar4 * 4 + 0x108) = 0;
        if ((uVar2 == 0x8076) && (*(int *)this == 0)) {
          this[0x76] = (RenderingContext)0x1;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(this + 0x130));
    }
    *(undefined4 *)(this + 0x130) = 0;
LAB_0058c148:
    if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* try { // try from 0058c050 to 0068c063 has its CatchHandler @ 0058cbb4 */
                    /* try { // try from 0058c064 to 0068c077 has its CatchHandler @ 0058cb44 */
  lVar4 = 1;
  iVar5 = -0x30;
  puVar6 = (uint *)register0x00000008;
                    /* try { // try from 0058c078 to 0068c087 has its CatchHandler @ 0058cae4 */
                    /* try { // try from 0058c088 to 0068c093 has its CatchHandler @ 0058ca80 */
  do {
    iVar1 = iVar5 + 8;
    if (0 < iVar1) goto LAB_0058c0b4;
                    /* try { // try from 0058c0cc to 0068c0d7 has its CatchHandler @ 0058cd30 */
    uVar2 = *(uint *)(&stack0xffffffffffffff60 + iVar5);
    while( true ) {
                    /* try { // try from 0058c0d8 to 0068c0df has its CatchHandler @ 0058ca68 */
      if (uVar2 == 0) {
        auStack_80[0] = param_1;
                    /* try { // try from 0058c0e0 to 0068c19f has its CatchHandler @ 0058cd30 */
        SetEnabledVertexAttribArraysImpl(this,auStack_80,(int)lVar4);
        goto LAB_0058c148;
      }
      auStack_80[lVar4] = uVar2;
      lVar4 = lVar4 + 1;
      iVar5 = iVar1;
      if (iVar1 < 0) break;
LAB_0058c0b4:
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
    }
  } while( true );
}


