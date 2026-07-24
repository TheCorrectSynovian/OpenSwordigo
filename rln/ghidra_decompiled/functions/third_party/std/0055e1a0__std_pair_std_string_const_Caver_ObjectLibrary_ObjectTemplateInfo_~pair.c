/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055e1a0
 * Function: std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair
 * Signature: undefined __thiscall ~pair(pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::pair<std::string const, Caver::ObjectLibrary::ObjectTemplateInfo>::~pair() */

void __thiscall
std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair
          (pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo> *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(this + 0x18);
                    /* catch() { ... } // from try @ 0055dff8 with catch @ 0055e1d4 */
                    /* try { // try from 0055e1d8 to 0065e1ff has its CatchHandler @ 0055e1d8
                       catch() { ... } // from try @ 0055e1d8 with catch @ 0055e1d8
                       catch() { ... } // from try @ 0055e25c with catch @ 0055e1d8
                       catch() { ... } // from try @ 0055e370 with catch @ 0055e1d8 */
  if ((plVar4 != (long *)0x0) &&
     (iVar9 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 0055e200 to 0065e213 has its CatchHandler @ 0055e3ec */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
                    /* try { // try from 0055e218 to 0065e223 has its CatchHandler @ 0055e378 */
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  puVar5 = (undefined *)(*(long *)this + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
  }
                    /* try { // try from 0055e250 to 0065e25b has its CatchHandler @ 0055e328 */
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0055e25c to 0065e347 has its CatchHandler @ 0055e1d8 */
  return;
}


