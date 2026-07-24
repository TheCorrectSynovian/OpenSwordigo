/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9704
 * Function: Caver::Proto::MusicPlaylist::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MusicPlaylist * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MusicPlaylist::MergePartialFromCodedStream
          (MusicPlaylist *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  string *psVar13;
  int iVar14;
  char *pcVar15;
  MusicTrack *this_00;
  uint local_6c;
  long local_68;
  
  puVar7 = PTR__default_resource_name__007e7358;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e54f8 + 0x10;
LAB_003d9760:
  do {
    pbVar3 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar3) || (bVar4 = *pbVar3, (char)bVar4 < '\0')) {
      uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar12 = uVar9 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar9;
      if ((int)uVar9 != 0) goto LAB_003d97a0;
LAB_003d9994:
      uVar10 = 1;
      goto LAB_003d9998;
    }
    uVar12 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar3 + 1;
    if (bVar4 == 0) goto LAB_003d9994;
LAB_003d97a0:
    puVar6 = PTR__default_name__007e5710;
    iVar8 = (int)(uVar12 >> 3);
    uVar11 = (uint)uVar12;
    if (iVar8 == 1) {
      if ((uVar11 & 7) == 2) {
        psVar13 = *(string **)(this + 0x10);
        *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 1;
        if (psVar13 == (string *)puVar6) {
          psVar13 = operator_new(8);
          *(undefined **)psVar13 = puVar1;
          *(string **)(this + 0x10) = psVar13;
        }
        uVar9 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
        if ((uVar9 & 1) == 0) goto LAB_003d998c;
        pcVar15 = *(char **)(param_1 + 8);
        if ((pcVar15 < *(char **)(param_1 + 0x10)) && (*pcVar15 == '\x12')) {
          do {
            *(char **)(param_1 + 8) = pcVar15 + 1;
LAB_003d9848:
            iVar8 = *(int *)(this + 0x20);
            iVar14 = *(int *)(this + 0x24);
            if (iVar8 < iVar14) {
              *(int *)(this + 0x20) = iVar8 + 1;
              this_00 = *(MusicTrack **)(*(long *)(this + 0x18) + (long)iVar8 * 8);
            }
            else {
              if (iVar14 == *(int *)(this + 0x28)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x18),iVar14 + 1);
                iVar8 = *(int *)(this + 0x20);
                iVar14 = *(int *)(this + 0x24);
              }
              *(int *)(this + 0x24) = iVar14 + 1;
              this_00 = operator_new(0x20);
              *(undefined **)this_00 = puVar2;
              *(undefined4 *)(this_00 + 8) = 0;
              *(undefined **)(this_00 + 0x10) = puVar7;
              *(long *)(this_00 + 0x18) = 0x3f800000;
              *(int *)(this + 0x20) = iVar8 + 1;
              *(MusicTrack **)(*(long *)(this + 0x18) + (long)iVar8 * 8) = this_00;
            }
            pbVar3 = *(byte **)(param_1 + 8);
            if ((pbVar3 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar3)) {
              local_6c = (uint)*pbVar3;
              *(byte **)(param_1 + 8) = pbVar3 + 1;
            }
            else {
              uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_6c);
              if ((uVar9 & 1) == 0) goto LAB_003d998c;
            }
            iVar8 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar8 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003d998c;
            iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
            uVar9 = MusicTrack::MergePartialFromCodedStream(this_00,param_1);
            if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d998c;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar15 = *(char **)(param_1 + 8);
          } while ((pcVar15 < *(char **)(param_1 + 0x10)) && (*pcVar15 == '\x12'));
          if ((pcVar15 == *(char **)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
            uVar10 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
            goto LAB_003d9998;
          }
        }
        goto LAB_003d9760;
      }
    }
    else if ((iVar8 == 2) && ((uVar11 & 7) == 2)) goto LAB_003d9848;
    if ((uVar11 & 7) == 4) goto LAB_003d9994;
    uVar9 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar11);
    if ((uVar9 & 1) == 0) {
LAB_003d998c:
      uVar10 = 0;
LAB_003d9998:
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar10);
      }
      return;
    }
  } while( true );
}


