/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d32dc
 * Function: Caver::RenderingProgramShader::AddUniformVariable
 * Signature: undefined __thiscall AddUniformVariable(RenderingProgramShader * this, int param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgramShader::AddUniformVariable(int, std::string const&) */

void __thiscall
Caver::RenderingProgramShader::AddUniformVariable
          (RenderingProgramShader *this,int param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int local_50 [2];
  undefined *local_48 [2];
  long local_38;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48[0] = PTR_DAT_007e5de8 + 0x18;
  local_50[0] = param_1;
                    /* catch() { ... } // from try @ 005d0924 with catch @ 005d3324
                       catch() { ... } // from try @ 005d09b0 with catch @ 005d3324 */
  FUN_0066a6a8(local_48,param_2);
  piVar5 = *(int **)(this + 0x28);
  if (piVar5 == *(int **)(this + 0x30)) {
    std::
    vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>
    ::_M_insert_aux((vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>
                     *)(this + 0x20),piVar5,local_50);
  }
  else {
    *piVar5 = local_50[0];
    FUN_0066a528(piVar5 + 2,local_48);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 0x10;
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
                    /* catch() { ... } // from try @ 005d080c with catch @ 005d3380
                       catch() { ... } // from try @ 005d0898 with catch @ 005d3380 */
  if (local_48[0] + -0x18 != puVar4) {
    piVar5 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 005d06e8 with catch @ 005d33dc
                       catch() { ... } // from try @ 005d0774 with catch @ 005d33dc */
    if (iVar6 < 1) {
      operator_delete(local_48[0] + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


