/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00456bac
 * Function: Caver::GameViewController::ProfileManagerDidDownloadProfile
 * Signature: undefined __thiscall ProfileManagerDidDownloadProfile(GameViewController * this, ProfileManager * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager*, std::string
   const&) */

void __thiscall
Caver::GameViewController::ProfileManagerDidDownloadProfile
          (GameViewController *this,ProfileManager *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  size_t __n;
  long lVar7;
  int *piVar8;
  long *plVar9;
  size_t *psVar10;
  void *local_70;
  long *local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 00456bcc to 00556c0b has its CatchHandler @ 00456bcc
                       catch() { ... } // from try @ 00456bcc with catch @ 00456bcc
                       catch() { ... } // from try @ 00456d40 with catch @ 00456bcc
                       catch() { ... } // from try @ 00456e88 with catch @ 00456bcc
                       catch() { ... } // from try @ 00456f60 with catch @ 00456bcc
                       catch() { ... } // from try @ 004570c4 with catch @ 00456bcc */
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0066a528(&local_70,*(long *)(this + 0x88) + 0x18);
  pvVar4 = local_70;
  __n = *(size_t *)((long)*(void **)param_2 + -0x18);
  psVar10 = (size_t *)((long)local_70 + -0x18);
  if (__n == *psVar10) {
                    /* try { // try from 00456c0c to 00556c2b has its CatchHandler @ 00457068 */
    iVar6 = memcmp(*(void **)param_2,local_70,__n);
    bVar5 = iVar6 == 0;
  }
  else {
    bVar5 = false;
  }
  if (psVar10 != (size_t *)PTR_DAT_007e5de8) {
    piVar8 = (int *)((long)pvVar4 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 00456d40 to 00556d57 has its CatchHandler @ 00456bcc */
      iVar6 = *piVar8;
      *piVar8 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
                    /* try { // try from 00456d58 to 00556d77 has its CatchHandler @ 00457030 */
      operator_delete(psVar10);
    }
  }
  if (bVar5) {
    ProfileManager::ProfileWithIdentifier((string *)param_1);
    if (local_68 != (long *)0x0) {
                    /* try { // try from 00456c50 to 00556c83 has its CatchHandler @ 0045709c */
      local_68[1] = local_68[1] + 1;
    }
    plVar9 = *(long **)(this + 0x108);
    *(void **)(this + 0x100) = local_70;
    *(long **)(this + 0x108) = local_68;
    if ((plVar9 != (long *)0x0) && (lVar7 = plVar9[1], plVar9[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar7 = plVar9[2];
      plVar9[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
                    /* try { // try from 00456c9c to 00556cf3 has its CatchHandler @ 00457038 */
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    if ((local_68 != (long *)0x0) &&
       (lVar7 = local_68[1], local_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar7 = local_68[2];
      local_68[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00456d14 to 00556d1b has its CatchHandler @ 0045709c */
  return;
}


