/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005834ec
 * Function: Caver::MusicPlaylist::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MusicPlaylist * this, MusicPlaylist * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlaylist::SaveToProtobufMessage(Caver::Proto::MusicPlaylist*) */

void __thiscall
Caver::MusicPlaylist::SaveToProtobufMessage(MusicPlaylist *this,MusicPlaylist *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  MusicTrack *this_00;
  long local_78 [2];
  long local_68;
  
  puVar7 = PTR__default_name__007e5710;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar10 = *(long **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00580d9c with catch @ 0058352c */
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 1;
                    /* catch() { ... } // from try @ 00581094 with catch @ 00583538
                       catch() { ... } // from try @ 005810d8 with catch @ 00583538 */
  if (plVar10 == (long *)puVar7) {
    plVar10 = operator_new(8);
    *plVar10 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar10;
  }
  FUN_0066a6a8(plVar10,this);
  puVar9 = PTR__default_resource_name__007e7358;
  puVar8 = PTR_DAT_007e5de8;
  puVar7 = PTR_pthread_create_007e4e78;
  lVar14 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 0x18);
  if (lVar14 != lVar3) {
                    /* catch() { ... } // from try @ 00580ea8 with catch @ 00583570
                       catch() { ... } // from try @ 00580f3c with catch @ 00583570 */
    puVar2 = PTR_DAT_007e5de8 + 0x18;
    do {
      iVar13 = *(int *)(param_1 + 0x20);
      iVar11 = *(int *)(param_1 + 0x24);
                    /* catch() { ... } // from try @ 00580d90 with catch @ 005835d8
                       catch() { ... } // from try @ 00580da4 with catch @ 005835d8
                       catch() { ... } // from try @ 00580ff8 with catch @ 005835d8
                       catch() { ... } // from try @ 0058100c with catch @ 005835d8 */
                    /* catch() { ... } // from try @ 00581370 with catch @ 005835dc */
      if (iVar13 < iVar11) {
                    /* catch() { ... } // from try @ 00581284 with catch @ 005835e0 */
        *(int *)(param_1 + 0x20) = iVar13 + 1;
        this_00 = *(MusicTrack **)(*(long *)(param_1 + 0x18) + (long)iVar13 * 8);
      }
      else {
        if (iVar11 == *(int *)(param_1 + 0x28)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x18),iVar11 + 1);
          iVar11 = *(int *)(param_1 + 0x24);
        }
                    /* catch() { ... } // from try @ 00581278 with catch @ 00583618 */
        *(int *)(param_1 + 0x24) = iVar11 + 1;
                    /* catch() { ... } // from try @ 00581258 with catch @ 0058361c */
        this_00 = operator_new(0x20);
                    /* catch() { ... } // from try @ 00581214 with catch @ 00583620 */
        Proto::MusicTrack::MusicTrack(this_00);
        iVar13 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar13 + 1;
        *(MusicTrack **)(*(long *)(param_1 + 0x18) + (long)iVar13 * 8) = this_00;
      }
      FUN_0066a528(local_78,lVar14);
      plVar10 = *(long **)(this_00 + 0x10);
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 1;
      if (plVar10 == (long *)puVar9) {
        plVar10 = operator_new(8);
        *plVar10 = (long)puVar2;
        *(long **)(this_00 + 0x10) = plVar10;
      }
      FUN_0066a6a8(plVar10,local_78);
                    /* catch() { ... } // from try @ 0058120c with catch @ 00583684 */
      if ((undefined *)(local_78[0] + -0x18) != puVar8) {
        piVar12 = (int *)(local_78[0] + -8);
        if (puVar7 == (undefined *)0x0) {
          iVar13 = *piVar12;
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete((undefined *)(local_78[0] + -0x18));
        }
      }
      puVar1 = (undefined4 *)(lVar14 + 8);
      lVar14 = lVar14 + 0x10;
                    /* catch() { ... } // from try @ 00581348 with catch @ 00583694 */
      *(undefined4 *)(this_00 + 0x18) = *puVar1;
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 2;
    } while (lVar14 != lVar3);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


