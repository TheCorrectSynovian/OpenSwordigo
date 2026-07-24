/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058bf38
 * Function: Caver::RenderingContext::SetEnabledVertexAttribArrays
 * Signature: undefined __thiscall SetEnabledVertexAttribArrays(RenderingContext * this, uint * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetEnabledVertexAttribArrays(unsigned int const*, int) */

void __thiscall
Caver::RenderingContext::SetEnabledVertexAttribArrays
          (RenderingContext *this,uint *param_1,int param_2)

{
  long lVar1;
  uint auStack_60 [10];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memcpy(auStack_60,param_1,
         -(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_2 << 2);
  SetEnabledVertexAttribArraysImpl(this,auStack_60,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


