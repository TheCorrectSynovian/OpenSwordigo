/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055cfd4
 * Function: Caver::ObjectLibrary::Process
 * Signature: undefined __cdecl Process(SceneProcessingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::Process(Caver::SceneProcessingContext*) */

void Caver::ObjectLibrary::Process(SceneProcessingContext *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  SceneProcessingContext *pSVar4;
  long *local_50;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 0055cff0 to 0065d02b has its CatchHandler @ 0055d1b0 */
  lVar3 = *(long *)(lVar2 + 0x28);
  for (pSVar4 = *(SceneProcessingContext **)(param_1 + 0x20); pSVar4 != param_1 + 0x10;
      pSVar4 = (SceneProcessingContext *)FUN_0064c640(pSVar4)) {
                    /* try { // try from 0055d02c to 0065d113 has its CatchHandler @ 0055cf2c */
    TemplateForName((string *)param_1,(bool)((char)pSVar4 + ' '));
    ObjectTemplate::Process();
    if ((local_50 != (long *)0x0) &&
       (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_50 + 8))(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


