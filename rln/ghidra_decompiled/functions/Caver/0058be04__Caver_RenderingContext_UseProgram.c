/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058be04
 * Function: Caver::RenderingContext::UseProgram
 * Signature: undefined __thiscall UseProgram(RenderingContext * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::UseProgram(boost::shared_ptr<Caver::RenderingProgram> const&) */

void __thiscall Caver::RenderingContext::UseProgram(RenderingContext *this,shared_ptr *param_1)

{
  RenderingContext RVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint auStack_60 [10];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)param_1;
  if (lVar4 != *(long *)(this + 0x38)) {
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    }
    plVar6 = *(long **)(this + 0x40);
    *(long *)(this + 0x38) = lVar4;
    *(long *)(this + 0x40) = lVar5;
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    RVar1 = *(RenderingContext *)(*(long *)param_1 + 0x14);
    if ((RVar1 != this[0x71]) && (this[0x71] = RVar1, *(int *)this == 0)) {
      if (RVar1 == (RenderingContext)0x0) {
        glDisable(0xde1);
      }
      else {
        glEnable(0xde1);
      }
    }
    iVar2 = *(int *)(*(long *)param_1 + 0x18);
                    /* try { // try from 0058bee0 to 0068beeb has its CatchHandler @ 0058bb3c */
                    /* catch() { ... } // from try @ 0058bd90 with catch @ 0058bee8 */
    memcpy(auStack_60,*(void **)(*(long *)param_1 + 0x20),(long)iVar2 << 2);
                    /* catch() { ... } // from try @ 0058bf00 with catch @ 0058beec */
    SetEnabledVertexAttribArraysImpl(this,auStack_60,iVar2);
                    /* try { // try from 0058befc to 0068beff has its CatchHandler @ 0058bf10 */
                    /* try { // try from 0058bf00 to 0068bf23 has its CatchHandler @ 0058beec */
    if (*(int *)this == 1) {
      this[0x76] = (RenderingContext)0x1;
      this[0x80] = (RenderingContext)0x1;
    }
  }
                    /* catch() { ... } // from try @ 0058befc with catch @ 0058bf10 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


