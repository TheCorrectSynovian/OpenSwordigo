/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d93a8
 * Function: Caver::Proto::MusicPlaylist::~MusicPlaylist
 * Signature: undefined __thiscall ~MusicPlaylist(MusicPlaylist * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::~MusicPlaylist() */

void __thiscall Caver::Proto::MusicPlaylist::~MusicPlaylist(MusicPlaylist *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  MusicPlaylist *pMVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
  bVar3 = plVar4 != (long *)PTR__default_name__007e5710;
  *(undefined **)this = PTR_vtable_007e5468 + 0x10;
  if ((bVar3) && (plVar4 != (long *)0x0)) {
    puVar7 = (undefined *)(*plVar4 + -0x18);
    if (puVar7 != PTR_DAT_007e5de8) {
      piVar9 = (int *)(*plVar4 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar9;
        *piVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(puVar7);
      }
    }
    operator_delete(plVar4);
  }
  iVar8 = *(int *)(this + 0x24);
  pMVar5 = *(MusicPlaylist **)(this + 0x18);
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      plVar4 = *(long **)(pMVar5 + lVar10 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        iVar8 = *(int *)(this + 0x24);
        pMVar5 = *(MusicPlaylist **)(this + 0x18);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if ((pMVar5 != this + 0x30) && (pMVar5 != (MusicPlaylist *)0x0)) {
    operator_delete__(pMVar5);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


