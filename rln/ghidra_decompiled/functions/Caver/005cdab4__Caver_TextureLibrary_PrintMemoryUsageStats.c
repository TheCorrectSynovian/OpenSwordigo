/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cdab4
 * Function: Caver::TextureLibrary::PrintMemoryUsageStats
 * Signature: undefined __thiscall PrintMemoryUsageStats(TextureLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::PrintMemoryUsageStats() */

void __thiscall Caver::TextureLibrary::PrintMemoryUsageStats(TextureLibrary *this)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  size_t sVar7;
  long lVar8;
  float fVar9;
  undefined *puVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  TextureLibrary *pTVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined *local_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long local_78;
  
                    /* try { // try from 005cdac8 to 006cdad3 has its CatchHandler @ 005cdb14 */
                    /* try { // try from 005cdad4 to 006cdb03 has its CatchHandler @ 005cd860 */
  lVar8 = tpidr_el0;
                    /* catch() { ... } // from try @ 005cda50 with catch @ 005cdadc */
  local_78 = *(long *)(lVar8 + 0x28);
                    /* catch() { ... } // from try @ 005cdaa4 with catch @ 005cdae0 */
  local_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_98 = (long *)0x0;
  pTVar14 = *(TextureLibrary **)(this + 0x20);
  if (pTVar14 != this + 0x10) {
    do {
      local_a0 = *(undefined **)(pTVar14 + 0x28);
                    /* catch() { ... } // from try @ 005cdb04 with catch @ 005cdb10 */
                    /* catch() { ... } // from try @ 005cdac8 with catch @ 005cdb14 */
      if (local_90 == plStack_88) {
                    /* try { // try from 005cdb30 to 006cdb33 has its CatchHandler @ 005cdb44 */
                    /* try { // try from 005cdb34 to 006cdb57 has its CatchHandler @ 005cdb20 */
        std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>::_M_insert_aux
                  ((vector<Caver::Texture*,std::allocator<Caver::Texture*>> *)&local_98,plStack_88,
                   &local_a0);
      }
      else {
        *local_90 = (long)local_a0;
                    /* catch() { ... } // from try @ 005cdb34 with catch @ 005cdb20 */
        local_90 = local_90 + 1;
      }
      pTVar14 = (TextureLibrary *)FUN_0064c640(pTVar14);
      plVar15 = local_90;
      plVar1 = local_98;
                    /* catch() { ... } // from try @ 005cdb30 with catch @ 005cdb44 */
    } while (pTVar14 != this + 0x10);
                    /* try { // try from 005cdb58 to 006cdd2b has its CatchHandler @ 005cdb58
                       catch() { ... } // from try @ 005cdb58 with catch @ 005cdb58
                       catch() { ... } // from try @ 005ce138 with catch @ 005cdb58
                       catch() { ... } // from try @ 005ce51c with catch @ 005cdb58 */
    if (local_98 != local_90) {
      lVar18 = (long)local_90 - (long)local_98;
      std::
      __introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
                (local_98,local_90,LZCOUNT(lVar18 >> 3) * -2 + 0x7e,
                 PTR_TextureSizeSortPredicate_007e49a0);
      plVar16 = plVar1;
      if (lVar18 < 0x81) {
        while (plVar3 = plVar16 + 1, plVar3 != plVar15) {
          lVar18 = *plVar3;
          iVar12 = *(int *)(lVar18 + 0x48);
          if (*(int *)(*plVar1 + 0x48) < iVar12) {
            sVar7 = (long)plVar3 - (long)plVar1;
            plVar13 = plVar1;
            if (sVar7 != 0) {
              memmove((void *)((long)plVar16 + (0x10 - sVar7)),plVar1,sVar7);
            }
          }
          else {
            iVar4 = *(int *)(*plVar16 + 0x48);
            plVar13 = plVar3;
            while (iVar4 < iVar12) {
              *plVar13 = *plVar16;
              iVar4 = *(int *)(plVar16[-1] + 0x48);
              plVar13 = plVar16;
              plVar16 = plVar16 + -1;
            }
          }
          *plVar13 = lVar18;
          plVar16 = plVar3;
        }
      }
      else {
        lVar18 = 1;
        do {
          plVar3 = plVar1 + lVar18;
          lVar17 = *plVar3;
          iVar12 = *(int *)(lVar17 + 0x48);
          if (*(int *)(*plVar1 + 0x48) < iVar12) {
            sVar7 = (long)plVar3 - (long)plVar1;
            plVar13 = plVar1;
            if (sVar7 != 0) {
              memmove((void *)((long)plVar16 + (0x10 - sVar7)),plVar1,sVar7);
            }
          }
          else {
            iVar4 = *(int *)(*plVar16 + 0x48);
            plVar13 = plVar3;
            while (iVar4 < iVar12) {
              *plVar13 = *plVar16;
              iVar4 = *(int *)(plVar16[-1] + 0x48);
              plVar13 = plVar16;
              plVar16 = plVar16 + -1;
            }
          }
          lVar18 = lVar18 + 1;
          *plVar13 = lVar17;
          plVar16 = plVar3;
        } while (lVar18 != 0x10);
        for (plVar1 = plVar1 + 0x10; plVar1 != plVar15; plVar1 = plVar1 + 1) {
          lVar18 = *plVar1;
          iVar12 = *(int *)(lVar18 + 0x48);
          iVar4 = *(int *)(plVar1[-1] + 0x48);
          plVar16 = plVar1;
          while (iVar4 < iVar12) {
            *plVar16 = plVar16[-1];
            iVar4 = *(int *)(plVar16[-2] + 0x48);
            plVar16 = plVar16 + -1;
          }
          *plVar16 = lVar18;
        }
      }
    }
  }
                    /* try { // try from 005cdd2c to 006cdd33 has its CatchHandler @ 005ce3b8 */
                    /* try { // try from 005cdd34 to 006cdd47 has its CatchHandler @ 005ce3a4 */
  puts("== Texture memory usage ==");
  plVar1 = local_90;
  puVar10 = PTR_DAT_007e5de8;
  fVar9 = DAT_00687978;
  if (local_98 != local_90) {
                    /* try { // try from 005cdd48 to 006cdd5b has its CatchHandler @ 005ce330 */
                    /* try { // try from 005cdd74 to 006cdd7b has its CatchHandler @ 005ce3a8 */
    puVar2 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 005cdd7c to 006cdd8f has its CatchHandler @ 005ce32c */
    plVar15 = local_98;
    do {
      lVar18 = *plVar15;
      if (*(int *)(lVar18 + 0x48) == 0) break;
                    /* try { // try from 005cdd90 to 006cdda3 has its CatchHandler @ 005ce2c0 */
      iVar12 = *(int *)(lVar18 + 0x28);
      local_a0 = puVar2;
      if (iVar12 == 1) {
        FUN_0066918c(&local_a0,&DAT_00697e1c,3);
      }
      else if (iVar12 == 3) {
                    /* try { // try from 005cddc8 to 006cde4b has its CatchHandler @ 005ce3d8 */
        FUN_0066918c(&local_a0,&DAT_00697e24,3);
      }
      else if (iVar12 == 2) {
                    /* try { // try from 005cddb4 to 006cddbf has its CatchHandler @ 005ce3d8 */
        FUN_0066918c(&local_a0,&DAT_00697e20,3);
                    /* try { // try from 005cddc0 to 006cddc7 has its CatchHandler @ 005ce2a8 */
      }
      else {
        FUN_0066918c(&local_a0,"unknown",7);
      }
      printf("%8.2f kB - %4dx%4d - %s (%s)\n",(double)((float)*(int *)(lVar18 + 0x48) / fVar9),
             (ulong)*(uint *)(lVar18 + 0x3c),(ulong)*(uint *)(lVar18 + 0x40),
             *(undefined8 *)(lVar18 + 0x30),local_a0);
      if (local_a0 + -0x18 != puVar10) {
        piVar11 = (int *)(local_a0 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar12 = *piVar11;
          *piVar11 = iVar12 + -1;
        }
        else {
          do {
            iVar12 = *piVar11;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar6) {
              *piVar11 = iVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
                    /* try { // try from 005cde74 to 006cde7f has its CatchHandler @ 005ce258 */
        if (iVar12 < 1) {
          operator_delete(local_a0 + -0x18);
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar1);
  }
  if (local_98 != (long *)0x0) {
    operator_delete(local_98);
  }
                    /* try { // try from 005cdea0 to 006cdec7 has its CatchHandler @ 005ce1f4 */
  if (*(long *)(lVar8 + 0x28) == local_78) {
                    /* try { // try from 005cdec8 to 006cded3 has its CatchHandler @ 005ce3c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


