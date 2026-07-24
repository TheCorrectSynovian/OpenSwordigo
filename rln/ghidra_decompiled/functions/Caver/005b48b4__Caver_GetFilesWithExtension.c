/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b48b4
 * Function: Caver::GetFilesWithExtension
 * Signature: undefined __cdecl GetFilesWithExtension(string * param_1, string * param_2, vector * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GetFilesWithExtension(std::string const&, std::string const&, std::vector<std::string,
   std::allocator<std::string > >*) */

void Caver::GetFilesWithExtension(string *param_1,string *param_2,vector *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  DIR *__dirp;
  dirent *pdVar10;
  ulong uVar11;
  int *piVar12;
  size_t *psVar13;
  void *local_80;
  long local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
                    /* try { // try from 005b48b4 to 006b49e3 has its CatchHandler @ 005b4688 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __dirp = opendir(*(char **)param_2);
  if (__dirp == (DIR *)0x0) {
    perror("Couldn\'t open the directory");
  }
  else {
    pdVar10 = readdir(__dirp);
    puVar5 = PTR_DAT_007e5de8;
    while (pdVar10 != (dirent *)0x0) {
                    /* catch() { ... } // from try @ 005b46f0 with catch @ 005b49c0 */
      FUN_00666bb8(&local_78,pdVar10->d_name,&local_80);
      uVar8 = FUN_00668098(&local_78,0x2e,0xffffffffffffffff);
                    /* try { // try from 005b49e4 to 006b4a0b has its CatchHandler @ 005b4a14 */
      if (uVar8 == 0xffffffff) {
        FUN_00666bb8(&local_80,&DAT_0068fbeb,auStack_70);
      }
      else {
        uVar11 = (long)(((ulong)uVar8 << 0x20) + 0x100000000) >> 0x20;
                    /* try { // try from 005b4a0c to 006b4a17 has its CatchHandler @ 005b4688 */
        if (*(ulong *)(local_78 + -0x18) < uVar11) {
                    /* try { // try from 005b4afc to 006b4aff has its CatchHandler @ 005b4b84 */
                    /* try { // try from 005b4b00 to 006b4b37 has its CatchHandler @ 005b4a9c */
                    /* WARNING: Subroutine does not return */
          FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",&DAT_00695c42);
        }
                    /* catch() { ... } // from try @ 005b49e4 with catch @ 005b4a14 */
                    /* try { // try from 005b4a18 to 006b4a3f has its CatchHandler @ 005b4a18
                       catch(type#1 @ 00000000) { ... } // from try @ 005b4a18 with catch @ 005b4a18
                       catch(type#1 @ 00000000) { ... } // from try @ 005b4a58 with catch @ 005b4a18
                       catch(type#1 @ 00000000) { ... } // from try @ 005b4a90 with catch @ 005b4a18
                        */
        FUN_00666784(&local_80,&local_78,uVar11,0xffffffffffffffff);
      }
      pvVar6 = local_80;
      psVar13 = (size_t *)((long)local_80 + -0x18);
      if (*psVar13 == *(size_t *)((long)*(void **)param_1 + -0x18)) {
                    /* try { // try from 005b4a40 to 006b4a57 has its CatchHandler @ 005b4a84 */
        iVar9 = memcmp(local_80,*(void **)param_1,*psVar13);
        bVar7 = iVar9 == 0;
        if (psVar13 == (size_t *)puVar5) goto LAB_005b4a68;
LAB_005b4930:
        piVar12 = (int *)((long)pvVar6 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar12;
          *piVar12 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0 < iVar9) goto LAB_005b4a68;
        operator_delete(psVar13);
        if (bVar7) goto LAB_005b4a6c;
      }
      else {
        bVar7 = false;
        if (psVar13 != (size_t *)puVar5) goto LAB_005b4930;
LAB_005b4a68:
        if (bVar7) {
LAB_005b4a6c:
          lVar1 = *(long *)(param_3 + 8);
          if (lVar1 == *(long *)(param_3 + 0x10)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4a88 with catch @ 005b4a98
                        */
                    /* try { // try from 005b4a9c to 006b4afb has its CatchHandler @ 005b4a9c
                       catch() { ... } // from try @ 005b4a9c with catch @ 005b4a9c
                       catch() { ... } // from try @ 005b4b00 with catch @ 005b4a9c
                       catch() { ... } // from try @ 005b4b3c with catch @ 005b4a9c */
            std::vector<std::string,std::allocator<std::string>>::_M_insert_aux
                      ((vector<std::string,std::allocator<std::string>> *)param_3,lVar1,&local_78);
          }
          else {
            FUN_0066a528(lVar1,&local_78);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4a40 with catch @ 005b4a84
                        */
                    /* try { // try from 005b4a88 to 006b4a8f has its CatchHandler @ 005b4a98 */
            *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 8;
                    /* try { // try from 005b4a90 to 006b4a9b has its CatchHandler @ 005b4a18 */
          }
        }
      }
      if ((undefined *)(local_78 + -0x18) != puVar5) {
        piVar12 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 005b47f4 with catch @ 005b49a0 */
          iVar9 = *piVar12;
          *piVar12 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar12;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar7) {
              *piVar12 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
                    /* catch() { ... } // from try @ 005b46d4 with catch @ 005b49ac */
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
      pdVar10 = readdir(__dirp);
    }
    closedir(__dirp);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


