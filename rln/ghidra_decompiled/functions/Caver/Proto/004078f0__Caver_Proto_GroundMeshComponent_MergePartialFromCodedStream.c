/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004078f0
 * Function: Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GroundMeshComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream
          (GroundMeshComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  string *psVar12;
  ulong uVar13;
  int iVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  Rectangle *this_00;
  Mesh *pMVar19;
  FloatColor *this_01;
  uint local_7c;
  long local_78;
  
  puVar8 = PTR_vtable_007e6d30;
  puVar7 = PTR__default_index_data__007e6c48;
  puVar6 = PTR__default_vertex_data__007e5ae0;
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e6d30 + 0x10;
LAB_00408170:
  pbVar17 = *(byte **)(param_1 + 8);
  if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (bVar3 = *pbVar17, -1 < (char)bVar3)) {
    uVar13 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar17 + 1;
    if (bVar3 == 0) goto LAB_00408198;
LAB_004079b0:
    puVar5 = PTR__default_vertex_data__007e4e40;
    uVar9 = (uint)uVar13;
    switch((int)(uVar13 >> 3)) {
    case 4:
      if ((uVar9 & 7) != 2) break;
      psVar12 = *(string **)(this + 0x10);
      *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 1;
      if (psVar12 == (string *)puVar5) {
        psVar12 = operator_new(8);
        *(undefined **)psVar12 = puVar1;
        *(string **)(this + 0x10) = psVar12;
      }
      uVar13 = google::protobuf::internal::WireFormatLite::ReadBytes(param_1,psVar12);
      if ((uVar13 & 1) == 0) goto LAB_004081a0;
      pcVar16 = *(char **)(param_1 + 8);
      if ((pcVar16 < *(char **)(param_1 + 0x10)) && (*pcVar16 == '*')) {
        *(char **)(param_1 + 8) = pcVar16 + 1;
        goto LAB_00407aac;
      }
      goto LAB_00408170;
    case 5:
      if ((uVar9 & 7) == 2) {
LAB_00407aac:
        puVar5 = PTR__default_indices__007e67d8;
        psVar12 = *(string **)(this + 0x18);
        *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 2;
        if (psVar12 == (string *)puVar5) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = PTR_DAT_007e5de8 + 0x18;
          *(string **)(this + 0x18) = psVar12;
        }
        uVar13 = google::protobuf::internal::WireFormatLite::ReadBytes(param_1,psVar12);
        if ((uVar13 & 1) == 0) goto LAB_004081a0;
        pcVar16 = *(char **)(param_1 + 8);
        if ((pcVar16 < *(char **)(param_1 + 0x10)) && (*pcVar16 == '2')) {
          do {
            *(char **)(param_1 + 8) = pcVar16 + 1;
LAB_00407b50:
            iVar10 = *(int *)(this + 0x28);
            iVar14 = *(int *)(this + 0x2c);
            if (iVar10 < iVar14) {
              *(int *)(this + 0x28) = iVar10 + 1;
              pMVar19 = *(Mesh **)(*(long *)(this + 0x20) + (long)iVar10 * 8);
            }
            else {
              if (iVar14 == *(int *)(this + 0x30)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x20),iVar14 + 1);
                iVar10 = *(int *)(this + 0x28);
                iVar14 = *(int *)(this + 0x2c);
              }
              *(int *)(this + 0x2c) = iVar14 + 1;
              pMVar19 = operator_new(0xa8);
              *(undefined **)pMVar19 = puVar2;
              *(long *)(pMVar19 + 0x38) = 0;
              *(undefined4 *)(pMVar19 + 0x40) = 4;
              *(long *)(pMVar19 + 8) = 0;
              *(undefined4 *)(pMVar19 + 0x10) = 0;
              *(long *)(pMVar19 + 0x18) = 0;
              *(long *)(pMVar19 + 0x20) = 0;
              *(long *)(pMVar19 + 0x80) = 0;
              *(long *)(pMVar19 + 0x88) = 0;
              *(long *)(pMVar19 + 0x70) = 0;
              *(long *)(pMVar19 + 0x78) = 0;
              *(long *)(pMVar19 + 0x68) = 0;
              *(undefined **)(pMVar19 + 0x98) = puVar7;
              *(undefined **)(pMVar19 + 0x90) = puVar6;
              *(long *)(pMVar19 + 0x28) = 0;
              *(Mesh **)(pMVar19 + 0x30) = pMVar19 + 0x48;
              *(undefined4 *)(pMVar19 + 0xa0) = 0;
              *(int *)(this + 0x28) = iVar10 + 1;
              *(Mesh **)(*(long *)(this + 0x20) + (long)iVar10 * 8) = pMVar19;
            }
            pbVar17 = *(byte **)(param_1 + 8);
            if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
              local_7c = (uint)*pbVar17;
              *(byte **)(param_1 + 8) = pbVar17 + 1;
            }
            else {
              uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_7c);
              if ((uVar13 & 1) == 0) goto LAB_004081a0;
            }
            iVar10 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar10 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_004081a0;
            iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
            uVar13 = Mesh::MergePartialFromCodedStream(pMVar19,param_1);
            if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_004081a0;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar16 = *(char **)(param_1 + 8);
            if (*(char **)(param_1 + 0x10) <= pcVar16) goto LAB_00408170;
          } while (*pcVar16 == '2');
          if (*pcVar16 == ':') {
            *(char **)(param_1 + 8) = pcVar16 + 1;
            goto LAB_00407cb4;
          }
        }
        goto LAB_00408170;
      }
      break;
    case 6:
      if ((uVar9 & 7) == 2) goto LAB_00407b50;
      break;
    case 7:
      if ((uVar9 & 7) == 2) {
LAB_00407cb4:
        this_00 = *(Rectangle **)(this + 0x58);
        *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 8;
        if (this_00 == (Rectangle *)0x0) {
          this_00 = operator_new(0x20);
          Rectangle::Rectangle(this_00);
          *(Rectangle **)(this + 0x58) = this_00;
        }
        pbVar17 = *(byte **)(param_1 + 8);
        if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
          local_7c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar17 + 1;
        }
        else {
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar13 & 1) == 0) goto LAB_004081a0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        if (iVar10 < *(int *)(param_1 + 0x3c)) {
          iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
          uVar13 = Rectangle::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_004081a0;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar16 = *(char **)(param_1 + 8);
          if ((pcVar16 < *(char **)(param_1 + 0x10)) && (*pcVar16 == 'B')) {
            do {
              *(char **)(param_1 + 8) = pcVar16 + 1;
LAB_00407dd4:
              iVar10 = *(int *)(this + 0x68);
              iVar14 = *(int *)(this + 0x6c);
              if (iVar10 < iVar14) {
                *(int *)(this + 0x68) = iVar10 + 1;
                pMVar19 = *(Mesh **)(*(long *)(this + 0x60) + (long)iVar10 * 8);
              }
              else {
                if (iVar14 == *(int *)(this + 0x70)) {
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                            ((RepeatedPtrFieldBase *)(this + 0x60),iVar14 + 1);
                  iVar10 = *(int *)(this + 0x68);
                  iVar14 = *(int *)(this + 0x6c);
                }
                *(int *)(this + 0x6c) = iVar14 + 1;
                pMVar19 = operator_new(0xa8);
                *(long *)(pMVar19 + 0x38) = 0;
                *(undefined4 *)(pMVar19 + 0x40) = 4;
                *(long *)(pMVar19 + 8) = 0;
                *(undefined4 *)(pMVar19 + 0x10) = 0;
                *(long *)(pMVar19 + 0x18) = 0;
                *(long *)(pMVar19 + 0x20) = 0;
                *(long *)(pMVar19 + 0x80) = 0;
                *(long *)(pMVar19 + 0x88) = 0;
                *(long *)(pMVar19 + 0x70) = 0;
                *(long *)(pMVar19 + 0x78) = 0;
                *(long *)(pMVar19 + 0x68) = 0;
                *(undefined **)(pMVar19 + 0x98) = puVar7;
                *(undefined **)(pMVar19 + 0x90) = puVar6;
                *(undefined **)pMVar19 = puVar8 + 0x10;
                *(long *)(pMVar19 + 0x28) = 0;
                *(Mesh **)(pMVar19 + 0x30) = pMVar19 + 0x48;
                *(undefined4 *)(pMVar19 + 0xa0) = 0;
                *(int *)(this + 0x68) = iVar10 + 1;
                *(Mesh **)(*(long *)(this + 0x60) + (long)iVar10 * 8) = pMVar19;
              }
              pbVar17 = *(byte **)(param_1 + 8);
              if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
                local_7c = (uint)*pbVar17;
                *(byte **)(param_1 + 8) = pbVar17 + 1;
              }
              else {
                uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_7c);
                if ((uVar13 & 1) == 0) goto LAB_004081a0;
              }
              iVar10 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar10 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_004081a0;
              iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
              uVar13 = Mesh::MergePartialFromCodedStream(pMVar19,param_1);
              if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_004081a0;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar16 = *(char **)(param_1 + 8);
              if (*(char **)(param_1 + 0x10) <= pcVar16) goto LAB_00408170;
            } while (*pcVar16 == 'B');
            if (*pcVar16 == 'J') {
              do {
                *(char **)(param_1 + 8) = pcVar16 + 1;
LAB_00407f30:
                iVar10 = *(int *)(this + 0xa0);
                iVar14 = *(int *)(this + 0xa4);
                if (iVar10 < iVar14) {
                  *(int *)(this + 0xa0) = iVar10 + 1;
                  pMVar19 = *(Mesh **)(*(long *)(this + 0x98) + (long)iVar10 * 8);
                }
                else {
                  if (iVar14 == *(int *)(this + 0xa8)) {
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                              ((RepeatedPtrFieldBase *)(this + 0x98),iVar14 + 1);
                    iVar10 = *(int *)(this + 0xa0);
                    iVar14 = *(int *)(this + 0xa4);
                  }
                  *(int *)(this + 0xa4) = iVar14 + 1;
                  pMVar19 = operator_new(0xa8);
                  *(long *)(pMVar19 + 0x38) = 0;
                  *(undefined4 *)(pMVar19 + 0x40) = 4;
                  *(long *)(pMVar19 + 8) = 0;
                  *(undefined4 *)(pMVar19 + 0x10) = 0;
                  *(long *)(pMVar19 + 0x18) = 0;
                  *(long *)(pMVar19 + 0x20) = 0;
                  *(long *)(pMVar19 + 0x80) = 0;
                  *(long *)(pMVar19 + 0x88) = 0;
                  *(long *)(pMVar19 + 0x70) = 0;
                  *(long *)(pMVar19 + 0x78) = 0;
                  *(long *)(pMVar19 + 0x68) = 0;
                  *(undefined **)(pMVar19 + 0x98) = puVar7;
                  *(undefined **)(pMVar19 + 0x90) = puVar6;
                  *(undefined **)pMVar19 = puVar8 + 0x10;
                  *(long *)(pMVar19 + 0x28) = 0;
                  *(Mesh **)(pMVar19 + 0x30) = pMVar19 + 0x48;
                  *(undefined4 *)(pMVar19 + 0xa0) = 0;
                  *(int *)(this + 0xa0) = iVar10 + 1;
                  *(Mesh **)(*(long *)(this + 0x98) + (long)iVar10 * 8) = pMVar19;
                }
                pbVar17 = *(byte **)(param_1 + 8);
                if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
                  local_7c = (uint)*pbVar17;
                  *(byte **)(param_1 + 8) = pbVar17 + 1;
                }
                else {
                  uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_7c);
                  if ((uVar13 & 1) == 0) goto LAB_004081a0;
                }
                iVar10 = *(int *)(param_1 + 0x38);
                *(int *)(param_1 + 0x38) = iVar10 + 1;
                if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_004081a0;
                iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
                uVar13 = Mesh::MergePartialFromCodedStream(pMVar19,param_1);
                if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                goto LAB_004081a0;
                google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
                if (0 < *(int *)(param_1 + 0x38)) {
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                }
                pcVar16 = *(char **)(param_1 + 8);
                if (*(char **)(param_1 + 0x10) <= pcVar16) goto LAB_00408170;
              } while (*pcVar16 == 'J');
              if (*pcVar16 == 'R') {
                *(char **)(param_1 + 8) = pcVar16 + 1;
                goto LAB_0040808c;
              }
            }
          }
          goto LAB_00408170;
        }
        goto LAB_004081a0;
      }
      break;
    case 8:
      if ((uVar9 & 7) == 2) goto LAB_00407dd4;
      break;
    case 9:
      if ((uVar9 & 7) == 2) goto LAB_00407f30;
      break;
    case 10:
      if ((uVar9 & 7) == 2) {
LAB_0040808c:
        this_01 = *(FloatColor **)(this + 0xd0);
        *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 0x40;
        if (this_01 == (FloatColor *)0x0) {
          this_01 = operator_new(0x20);
          FloatColor::FloatColor(this_01);
          *(FloatColor **)(this + 0xd0) = this_01;
        }
        pbVar17 = *(byte **)(param_1 + 8);
        if ((pbVar17 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar17)) {
          local_7c = (uint)*pbVar17;
          *(byte **)(param_1 + 8) = pbVar17 + 1;
        }
        else {
          uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
          if ((uVar13 & 1) == 0) goto LAB_004081a0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        if (iVar10 < *(int *)(param_1 + 0x3c)) {
          iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_7c);
          uVar13 = FloatColor::MergePartialFromCodedStream(this_01,param_1);
          if (((uVar13 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_004081a0;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar17 = *(byte **)(param_1 + 8);
          pbVar15 = *(byte **)(param_1 + 0x10);
          if ((pbVar17 < pbVar15) && (*pbVar17 == 0x58)) {
            pbVar17 = pbVar17 + 1;
            *(byte **)(param_1 + 8) = pbVar17;
            if (pbVar17 < pbVar15) goto LAB_00407a84;
            goto LAB_00407d88;
          }
          goto LAB_00408170;
        }
        goto LAB_004081a0;
      }
      break;
    case 0xb:
      if ((uVar13 & 7) != 0) break;
      pbVar17 = *(byte **)(param_1 + 8);
      pbVar15 = *(byte **)(param_1 + 0x10);
      if (pbVar17 < pbVar15) {
LAB_00407a84:
        if ((char)*pbVar17 < '\0') goto LAB_00407d88;
        pbVar18 = pbVar17 + 1;
        local_7c = (uint)*pbVar17;
        *(byte **)(param_1 + 8) = pbVar18;
      }
      else {
LAB_00407d88:
        uVar13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_7c);
        if ((uVar13 & 1) == 0) goto LAB_004081a0;
        pbVar18 = *(byte **)(param_1 + 8);
        pbVar15 = *(byte **)(param_1 + 0x10);
      }
      this[0xd8] = (GroundMeshComponent)(local_7c != 0);
      *(uint *)(this + 0xdc) = *(uint *)(this + 0xdc) | 0x80;
      if ((pbVar18 == pbVar15) && (*(int *)(param_1 + 0x2c) != 0)) {
        uVar11 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_004081a4:
        if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar11);
        }
        return;
      }
      goto LAB_00408170;
    }
    if ((uVar9 & 7) != 4) {
      uVar13 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
      if ((uVar13 & 1) != 0) goto LAB_00408170;
LAB_004081a0:
      uVar11 = 0;
      goto LAB_004081a4;
    }
  }
  else {
    uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar13 = (ulong)uVar9;
    *(uint *)(param_1 + 0x20) = uVar9;
    if (uVar9 != 0) goto LAB_004079b0;
  }
LAB_00408198:
  uVar11 = 1;
  goto LAB_004081a4;
}


