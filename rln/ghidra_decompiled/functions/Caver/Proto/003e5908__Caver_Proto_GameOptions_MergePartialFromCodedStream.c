/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e5908
 * Function: Caver::Proto::GameOptions::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GameOptions * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::GameOptions::MergePartialFromCodedStream(GameOptions *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  MusicPlaylist *this_00;
  GUIViewLayout *pGVar12;
  uint local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
LAB_003e5944:
  do {
    pbVar11 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar11) || (bVar2 = *pbVar11, (char)bVar2 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 0) goto LAB_003e5984;
LAB_003e6020:
      uVar6 = 1;
      goto LAB_003e6024;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar11 + 1;
    if (bVar2 == 0) goto LAB_003e6020;
LAB_003e5984:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar4 & 7) == 2) {
        while( true ) {
          iVar5 = *(int *)(this + 0x18);
          iVar8 = *(int *)(this + 0x1c);
          if (iVar5 < iVar8) {
            *(int *)(this + 0x18) = iVar5 + 1;
            this_00 = *(MusicPlaylist **)(*(long *)(this + 0x10) + (long)iVar5 * 8);
          }
          else {
            if (iVar8 == *(int *)(this + 0x20)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x10),iVar8 + 1);
              iVar8 = *(int *)(this + 0x1c);
            }
            *(int *)(this + 0x1c) = iVar8 + 1;
            this_00 = operator_new(0x58);
            MusicPlaylist::MusicPlaylist(this_00);
            iVar5 = *(int *)(this + 0x18);
            *(int *)(this + 0x18) = iVar5 + 1;
            *(MusicPlaylist **)(*(long *)(this + 0x10) + (long)iVar5 * 8) = this_00;
          }
          pbVar11 = *(byte **)(param_1 + 8);
          if ((pbVar11 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar11)) {
            local_5c = (uint)*pbVar11;
            *(byte **)(param_1 + 8) = pbVar11 + 1;
          }
          else {
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
            if ((uVar7 & 1) == 0) goto LAB_003e6018;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_003e6018;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
          uVar7 = MusicPlaylist::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003e6018;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
          if (pbVar9 <= pbVar10) goto LAB_003e5944;
          if (*pbVar10 != 10) break;
          *(byte **)(param_1 + 8) = pbVar10 + 1;
        }
        if (*pbVar10 == 0x10) {
          pbVar10 = pbVar10 + 1;
          *(byte **)(param_1 + 8) = pbVar10;
          if (pbVar10 < pbVar9) {
LAB_003e5ae8:
            if ((char)*pbVar10 < '\0') goto LAB_003e5bc8;
            pbVar11 = pbVar10 + 1;
            local_5c = (uint)*pbVar10;
            *(byte **)(param_1 + 8) = pbVar11;
          }
          else {
LAB_003e5bc8:
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
            if ((uVar7 & 1) == 0) goto LAB_003e6018;
            pbVar11 = *(byte **)(param_1 + 8);
            pbVar9 = *(byte **)(param_1 + 0x10);
          }
          this[0x48] = (GameOptions)(local_5c != 0);
          *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 2;
          if ((pbVar11 < pbVar9) && (*pbVar11 == 0x18)) {
            pbVar11 = pbVar11 + 1;
            *(byte **)(param_1 + 8) = pbVar11;
            if (pbVar11 < pbVar9) {
LAB_003e5b58:
              if ((char)*pbVar11 < '\0') goto LAB_003e5c1c;
              pbVar10 = pbVar11 + 1;
              local_5c = (uint)*pbVar11;
              *(byte **)(param_1 + 8) = pbVar10;
            }
            else {
LAB_003e5c1c:
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_5c);
              if ((uVar7 & 1) == 0) goto LAB_003e6018;
              pbVar10 = *(byte **)(param_1 + 8);
              pbVar9 = *(byte **)(param_1 + 0x10);
            }
            this[0x49] = (GameOptions)(local_5c != 0);
            *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 4;
            if ((pbVar10 < pbVar9) && (*pbVar10 == 0x25)) {
              *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_003e5c68:
              uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_5c);
              if ((uVar7 & 1) == 0) goto LAB_003e6018;
              *(uint *)(this + 0x4c) = local_5c;
              *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 8;
              pcVar1 = *(char **)(param_1 + 8);
              if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
                *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_003e5cac:
                uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_5c);
                if ((uVar7 & 1) == 0) goto LAB_003e6018;
                *(uint *)(this + 0x50) = local_5c;
                uVar4 = *(uint *)(this + 0x6c) | 0x10;
                *(uint *)(this + 0x6c) = uVar4;
                pcVar1 = *(char **)(param_1 + 8);
                if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '2')) {
                  *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_003e5d04:
                  pGVar12 = *(GUIViewLayout **)(this + 0x58);
                  *(uint *)(this + 0x6c) = uVar4 | 0x20;
                  if (pGVar12 == (GUIViewLayout *)0x0) {
                    pGVar12 = operator_new(0x60);
                    GUIViewLayout::GUIViewLayout(pGVar12);
                    *(GUIViewLayout **)(this + 0x58) = pGVar12;
                  }
                  pbVar11 = *(byte **)(param_1 + 8);
                  if ((pbVar11 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar11)) {
                    local_5c = (uint)*pbVar11;
                    *(byte **)(param_1 + 8) = pbVar11 + 1;
                  }
                  else {
                    uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                      (param_1,&local_5c);
                    if ((uVar7 & 1) == 0) goto LAB_003e6018;
                  }
                  iVar5 = *(int *)(param_1 + 0x38);
                  *(int *)(param_1 + 0x38) = iVar5 + 1;
                  if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_003e6018;
                  iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
                  uVar7 = GUIViewLayout::MergePartialFromCodedStream(pGVar12,param_1);
                  if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                  goto LAB_003e6018;
                  google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                  if (0 < *(int *)(param_1 + 0x38)) {
                    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                  }
                  pcVar1 = *(char **)(param_1 + 8);
                  if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == ':')) {
                    *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_003e5e40:
                    pGVar12 = *(GUIViewLayout **)(this + 0x60);
                    *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x40;
                    if (pGVar12 == (GUIViewLayout *)0x0) {
                      pGVar12 = operator_new(0x60);
                      GUIViewLayout::GUIViewLayout(pGVar12);
                      *(GUIViewLayout **)(this + 0x60) = pGVar12;
                    }
                    pbVar11 = *(byte **)(param_1 + 8);
                    if ((pbVar11 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar11)) {
                      local_5c = (uint)*pbVar11;
                      *(byte **)(param_1 + 8) = pbVar11 + 1;
                    }
                    else {
                      uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                        (param_1,&local_5c);
                      if ((uVar7 & 1) == 0) goto LAB_003e6018;
                    }
                    iVar5 = *(int *)(param_1 + 0x38);
                    *(int *)(param_1 + 0x38) = iVar5 + 1;
                    if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_003e6018;
                    iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_5c);
                    uVar7 = GUIViewLayout::MergePartialFromCodedStream(pGVar12,param_1);
                    if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                    goto LAB_003e6018;
                    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                    if (0 < *(int *)(param_1 + 0x38)) {
                      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                    }
                    pbVar11 = *(byte **)(param_1 + 8);
                    pbVar9 = *(byte **)(param_1 + 0x10);
                    if ((pbVar11 < pbVar9) && (*pbVar11 == 0x40)) {
                      pbVar11 = pbVar11 + 1;
                      *(byte **)(param_1 + 8) = pbVar11;
                      if (pbVar11 < pbVar9) {
LAB_003e5b98:
                        if ((char)*pbVar11 < '\0') goto LAB_003e5f20;
                        pbVar10 = pbVar11 + 1;
                        local_5c = (uint)*pbVar11;
                        *(byte **)(param_1 + 8) = pbVar10;
                      }
                      else {
LAB_003e5f20:
                        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                          (param_1,&local_5c);
                        if ((uVar7 & 1) == 0) goto LAB_003e6018;
                        pbVar10 = *(byte **)(param_1 + 8);
                        pbVar9 = *(byte **)(param_1 + 0x10);
                      }
                      this[0x68] = (GameOptions)(local_5c != 0);
                      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x80;
                      if ((pbVar10 < pbVar9) && (*pbVar10 == 0x48)) {
                        pbVar10 = pbVar10 + 1;
                        *(byte **)(param_1 + 8) = pbVar10;
                        if (pbVar10 < pbVar9) {
LAB_003e5d9c:
                          if ((char)*pbVar10 < '\0') goto LAB_003e5f74;
                          pbVar11 = pbVar10 + 1;
                          local_5c = (uint)*pbVar10;
                          *(byte **)(param_1 + 8) = pbVar11;
                        }
                        else {
LAB_003e5f74:
                          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                            (param_1,&local_5c);
                          if ((uVar7 & 1) == 0) goto LAB_003e6018;
                          pbVar11 = *(byte **)(param_1 + 8);
                          pbVar9 = *(byte **)(param_1 + 0x10);
                        }
                        this[0x69] = (GameOptions)(local_5c != 0);
                        *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x100;
                        if ((pbVar11 < pbVar9) && (*pbVar11 == 0x50)) {
                          pbVar11 = pbVar11 + 1;
                          *(byte **)(param_1 + 8) = pbVar11;
                          if (pbVar11 < pbVar9) {
LAB_003e5b28:
                            if ((char)*pbVar11 < '\0') goto LAB_003e5fc8;
                            pbVar10 = pbVar11 + 1;
                            local_5c = (uint)*pbVar11;
                            *(byte **)(param_1 + 8) = pbVar10;
                          }
                          else {
LAB_003e5fc8:
                            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                              (param_1,&local_5c);
                            if ((uVar7 & 1) == 0) goto LAB_003e6018;
                            pbVar10 = *(byte **)(param_1 + 8);
                            pbVar9 = *(byte **)(param_1 + 0x10);
                          }
                          this[0x6a] = (GameOptions)(local_5c != 0);
                          *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) | 0x200;
                          if ((pbVar10 == pbVar9) && (*(int *)(param_1 + 0x2c) != 0)) {
                            uVar6 = 1;
                            *(undefined4 *)(param_1 + 0x20) = 0;
                            param_1[0x24] = (CodedInputStream)0x1;
                            goto LAB_003e6024;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_003e5944;
      }
      break;
    case 2:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar9) goto LAB_003e5ae8;
        goto LAB_003e5bc8;
      }
      break;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar11 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar11 < pbVar9) goto LAB_003e5b58;
        goto LAB_003e5c1c;
      }
      break;
    case 4:
      if ((uVar4 & 7) == 5) goto LAB_003e5c68;
      break;
    case 5:
      if ((uVar4 & 7) == 5) goto LAB_003e5cac;
      break;
    case 6:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x6c);
        goto LAB_003e5d04;
      }
      break;
    case 7:
      if ((uVar4 & 7) == 2) goto LAB_003e5e40;
      break;
    case 8:
      if ((uVar7 & 7) == 0) {
        pbVar11 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar11 < pbVar9) goto LAB_003e5b98;
        goto LAB_003e5f20;
      }
      break;
    case 9:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar9) goto LAB_003e5d9c;
        goto LAB_003e5f74;
      }
      break;
    case 10:
      if ((uVar7 & 7) == 0) {
        pbVar11 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if (pbVar11 < pbVar9) goto LAB_003e5b28;
        goto LAB_003e5fc8;
      }
      break;
    default:
    }
    if ((uVar4 & 7) == 4) goto LAB_003e6020;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
    if ((uVar7 & 1) == 0) {
LAB_003e6018:
      uVar6 = 0;
LAB_003e6024:
      if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


