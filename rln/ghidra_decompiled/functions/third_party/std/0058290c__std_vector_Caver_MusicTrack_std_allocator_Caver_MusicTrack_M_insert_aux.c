/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058290c
 * Function: std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>> * this, __normal_iterator param_1, MusicTrack * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::MusicTrack, std::allocator<Caver::MusicTrack>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MusicTrack*, std::vector<Caver::MusicTrack,
   std::allocator<Caver::MusicTrack> > >, Caver::MusicTrack const&) */

void __thiscall
std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>::_M_insert_aux
          (vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>> *this,MusicTrack *param_2,
          long param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  MusicTrack *pMVar8;
  MusicTrack *pMVar9;
  undefined *puVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(this + 8);
  if (lVar16 == *(long *)(this + 0x10)) {
    lVar15 = *(long *)this;
    lVar16 = lVar16 - lVar15;
    uVar12 = lVar16 >> 4;
    uVar14 = uVar12;
    if (lVar16 == 0) {
      uVar14 = 1;
    }
                    /* catch() { ... } // from try @ 00581b4c with catch @ 00582a3c */
                    /* catch() { ... } // from try @ 00581b44 with catch @ 00582a40 */
                    /* catch() { ... } // from try @ 00581afc with catch @ 00582a44 */
    uVar1 = 0xfffffffffffffff;
    if (!CARRY8(uVar14,uVar12) && uVar14 + uVar12 >> 0x3c == 0) {
      uVar1 = uVar14 + uVar12;
    }
    if (uVar1 == 0) {
      pMVar8 = (MusicTrack *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      pMVar8 = operator_new(uVar1 << 4);
    }
                    /* catch() { ... } // from try @ 00581ad4 with catch @ 00582a74 */
                    /* catch() { ... } // from try @ 00581acc with catch @ 00582a78 */
                    /* catch() { ... } // from try @ 00581db8 with catch @ 00582a7c
                       catch() { ... } // from try @ 005820c4 with catch @ 00582a7c */
    FUN_0066a528(pMVar8 + ((long)param_2 - lVar15 >> 4) * 0x10,param_3);
                    /* catch() { ... } // from try @ 00581f94 with catch @ 00582a8c
                       catch() { ... } // from try @ 00581fd8 with catch @ 00582a8c */
    *(undefined4 *)(pMVar8 + ((long)param_2 - lVar15 >> 4) * 0x10 + 8) =
         *(undefined4 *)(param_3 + 8);
    pMVar9 = __uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>
                       (*(MusicTrack **)this,param_2,pMVar8);
    pMVar9 = __uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack*,Caver::MusicTrack*>
                       (param_2,*(MusicTrack **)(this + 8),pMVar9 + 0x10);
    puVar7 = PTR_DAT_007e5de8;
    puVar6 = PTR_pthread_create_007e4e78;
    plVar17 = *(long **)this;
    plVar2 = *(long **)(this + 8);
                    /* catch() { ... } // from try @ 00581f1c with catch @ 00582ac4
                       catch() { ... } // from try @ 00581f60 with catch @ 00582ac4 */
    if (plVar17 != plVar2) {
      do {
        puVar10 = (undefined *)(*plVar17 + -0x18);
                    /* catch() { ... } // from try @ 00581d78 with catch @ 00582b24
                       catch() { ... } // from try @ 005820e8 with catch @ 00582b24 */
        if (puVar10 != puVar7) {
          piVar11 = (int *)(*plVar17 + -8);
          if (puVar6 == (undefined *)0x0) {
            iVar13 = *piVar11;
            *piVar11 = iVar13 + -1;
          }
          else {
            do {
              iVar13 = *piVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar4) {
                *piVar11 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar13 < 1) {
            operator_delete(puVar10);
          }
        }
                    /* catch() { ... } // from try @ 00581b60 with catch @ 00582b28
                       catch() { ... } // from try @ 00581ba4 with catch @ 00582b28 */
        plVar17 = plVar17 + 2;
      } while (plVar17 != plVar2);
      plVar17 = *(long **)this;
    }
    if (plVar17 != (long *)0x0) {
      operator_delete(plVar17);
    }
    *(MusicTrack **)this = pMVar8;
    *(MusicTrack **)(this + 8) = pMVar9;
    *(MusicTrack **)(this + 0x10) = pMVar8 + uVar1 * 0x10;
  }
  else {
                    /* catch() { ... } // from try @ 00581d80 with catch @ 00582954 */
                    /* catch() { ... } // from try @ 00581d24 with catch @ 00582958 */
    FUN_0066a528(lVar16,lVar16 + -0x10);
    *(undefined4 *)(lVar16 + 8) = *(undefined4 *)(lVar16 + -8);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
    FUN_0066a528(&local_78,param_3);
    local_70 = *(undefined4 *)(param_3 + 8);
    uVar14 = (*(long *)(this + 8) + -0x20) - (long)param_2;
    if (0 < (long)uVar14) {
      lVar16 = (uVar14 >> 4) + 1;
      lVar15 = *(long *)(this + 8) + -0x30;
      do {
                    /* catch() { ... } // from try @ 00581cdc with catch @ 005829a8 */
                    /* catch() { ... } // from try @ 00581bd0 with catch @ 005829ac */
        FUN_0066a6a8(lVar15 + 0x10,lVar15);
        lVar16 = lVar16 + -1;
        *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(lVar15 + 8);
        lVar15 = lVar15 + -0x10;
      } while (1 < lVar16);
    }
    FUN_0066a6a8(param_2,&local_78);
    *(undefined4 *)(param_2 + 8) = local_70;
    if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
      piVar11 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = *piVar11;
        *piVar11 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *piVar11;
                    /* catch() { ... } // from try @ 00581bbc with catch @ 00582a08 */
                    /* catch() { ... } // from try @ 00581b74 with catch @ 00582a0c */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar13 < 1) {
                    /* catch() { ... } // from try @ 00581dfc with catch @ 00582b98
                       catch() { ... } // from try @ 00581e8c with catch @ 00582b98 */
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00581ae8 with catch @ 00582b60
                       catch() { ... } // from try @ 00581b2c with catch @ 00582b60 */
  return;
}


