/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058331c
 * Function: Caver::MusicPlaylist::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MusicPlaylist * this, MusicPlaylist * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&) */

void __thiscall
Caver::MusicPlaylist::LoadFromProtobufMessage(MusicPlaylist *this,MusicPlaylist *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
                    /* catch() { ... } // from try @ 00581154 with catch @ 00583360 */
  if (0 < *(int *)(param_1 + 0x20)) {
                    /* catch() { ... } // from try @ 00580fd0 with catch @ 00583364 */
                    /* catch() { ... } // from try @ 00580ef4 with catch @ 00583368 */
    lVar10 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      local_70 = 0x3f800000;
      local_78 = puVar1;
      FUN_0066a6a8(&local_78,
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + lVar10 * 8) + 0x10));
      lVar8 = *(long *)(*(long *)(param_1 + 0x18) + lVar10 * 8);
      if ((*(byte *)(lVar8 + 0x1c) >> 1 & 1) != 0) {
        local_70 = *(undefined4 *)(lVar8 + 0x18);
                    /* catch() { ... } // from try @ 0058117c with catch @ 005833f4 */
      }
                    /* catch() { ... } // from try @ 0058112c with catch @ 005833f8 */
      lVar8 = *(long *)(this + 0x18);
      if (lVar8 == *(long *)(this + 0x20)) {
        std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>::_M_insert_aux
                  ((vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>> *)(this + 0x10),
                   lVar8,&local_78);
      }
      else {
        FUN_0066a528(lVar8,&local_78);
        *(undefined4 *)(lVar8 + 8) = local_70;
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x10;
      }
      if (local_78 + -0x18 != puVar6) {
        piVar7 = (int *)(local_78 + -8);
        if (puVar5 == (undefined *)0x0) {
          iVar9 = *piVar7;
          *piVar7 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar9 < 1) {
                    /* catch() { ... } // from try @ 00580e60 with catch @ 005833b8 */
                    /* catch() { ... } // from try @ 005815fc with catch @ 005833bc
                       catch() { ... } // from try @ 005819ac with catch @ 005833bc */
          operator_delete(local_78 + -0x18);
        }
      }
                    /* catch() { ... } // from try @ 005810f8 with catch @ 00583448 */
                    /* catch() { ... } // from try @ 005810a8 with catch @ 0058344c */
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00580fa8 with catch @ 00583488 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00581080 with catch @ 0058347c */
                    /* catch() { ... } // from try @ 00581078 with catch @ 00583480 */
                    /* catch() { ... } // from try @ 00581004 with catch @ 00583484 */
  return;
}


