/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6ec8
 * Function: Caver::Proto::GUIViewLayout::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GUIViewLayout * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::GUIViewLayout::MergePartialFromCodedStream
          (GUIViewLayout *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  string *psVar13;
  int iVar14;
  char *pcVar15;
  GUIViewLayout *this_00;
  GUIMargins *this_01;
  uint local_6c;
  long local_68;
  
  puVar7 = PTR__default_identifier__007e4ab0;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e5978 + 0x10;
  puVar3 = PTR_vtable_007e4930 + 0x10;
LAB_003d6f2c:
  do {
    pbVar4 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar4) || (bVar5 = *pbVar4, (char)bVar5 < '\0')) {
      uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar12 = uVar9 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar9;
      if ((int)uVar9 != 0) goto LAB_003d6f6c;
LAB_003d725c:
      uVar10 = 1;
      goto LAB_003d7260;
    }
    uVar12 = (ulong)bVar5;
    *(uint *)(param_1 + 0x20) = (uint)bVar5;
    *(byte **)(param_1 + 8) = pbVar4 + 1;
    if (bVar5 == 0) goto LAB_003d725c;
LAB_003d6f6c:
    iVar8 = (int)(uVar12 >> 3);
    uVar11 = (uint)uVar12;
    if (iVar8 == 1) {
      if ((uVar11 & 7) == 2) {
        psVar13 = *(string **)(this + 0x10);
        *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 1;
        if (psVar13 == (string *)puVar7) {
          psVar13 = operator_new(8);
          *(undefined **)psVar13 = puVar1;
          *(string **)(this + 0x10) = psVar13;
        }
        uVar9 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
        if ((uVar9 & 1) == 0) goto LAB_003d7254;
        pcVar15 = *(char **)(param_1 + 8);
        if ((pcVar15 < *(char **)(param_1 + 0x10)) && (*pcVar15 == '\x12')) {
          do {
            *(char **)(param_1 + 8) = pcVar15 + 1;
LAB_003d7024:
            iVar8 = *(int *)(this + 0x20);
            iVar14 = *(int *)(this + 0x24);
            if (iVar8 < iVar14) {
              *(int *)(this + 0x20) = iVar8 + 1;
              this_00 = *(GUIViewLayout **)(*(long *)(this + 0x18) + (long)iVar8 * 8);
            }
            else {
              if (iVar14 == *(int *)(this + 0x28)) {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                          ((RepeatedPtrFieldBase *)(this + 0x18),iVar14 + 1);
                iVar8 = *(int *)(this + 0x20);
                iVar14 = *(int *)(this + 0x24);
              }
              *(int *)(this + 0x24) = iVar14 + 1;
              this_00 = operator_new(0x60);
              *(undefined **)this_00 = puVar2;
              *(GUIViewLayout **)(this_00 + 0x18) = this_00 + 0x30;
              *(long *)(this_00 + 0x20) = 0;
              *(undefined4 *)(this_00 + 0x28) = 4;
              *(undefined4 *)(this_00 + 8) = 0;
              *(long *)(this_00 + 0x50) = 0;
              *(undefined **)(this_00 + 0x10) = puVar7;
              *(undefined4 *)(this_00 + 0x58) = 0;
              *(int *)(this + 0x20) = iVar8 + 1;
              *(GUIViewLayout **)(*(long *)(this + 0x18) + (long)iVar8 * 8) = this_00;
            }
            pbVar4 = *(byte **)(param_1 + 8);
            if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar4)) {
              local_6c = (uint)*pbVar4;
              *(byte **)(param_1 + 8) = pbVar4 + 1;
            }
            else {
              uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_6c);
              if ((uVar9 & 1) == 0) goto LAB_003d7254;
            }
            iVar8 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar8 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003d7254;
            iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
            uVar9 = MergePartialFromCodedStream(this_00,param_1);
            if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d7254;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar15 = *(char **)(param_1 + 8);
            if (*(char **)(param_1 + 0x10) <= pcVar15) goto LAB_003d6f2c;
          } while (*pcVar15 == '\x12');
          if (*pcVar15 == '\x1a') {
            *(char **)(param_1 + 8) = pcVar15 + 1;
LAB_003d7174:
            this_01 = *(GUIMargins **)(this + 0x50);
            *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 4;
            if (this_01 == (GUIMargins *)0x0) {
              this_01 = operator_new(0x20);
              *(long *)(this_01 + 0x10) = 0;
              *(long *)(this_01 + 0x18) = 0;
              *(undefined **)this_01 = puVar3;
              *(long *)(this_01 + 8) = 0;
              *(GUIMargins **)(this + 0x50) = this_01;
            }
            pbVar4 = *(byte **)(param_1 + 8);
            if ((pbVar4 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar4)) {
              local_6c = (uint)*pbVar4;
              *(byte **)(param_1 + 8) = pbVar4 + 1;
            }
            else {
              uVar9 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_6c);
              if ((uVar9 & 1) == 0) goto LAB_003d7254;
            }
            iVar8 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar8 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar8) goto LAB_003d7254;
            iVar8 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
            uVar9 = GUIMargins::MergePartialFromCodedStream(this_01,param_1);
            if (((uVar9 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_003d7254;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar8);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
               (*(int *)(param_1 + 0x2c) != 0)) {
              uVar10 = 1;
              *(undefined4 *)(param_1 + 0x20) = 0;
              param_1[0x24] = (CodedInputStream)0x1;
              goto LAB_003d7260;
            }
          }
        }
        goto LAB_003d6f2c;
      }
    }
    else if (iVar8 == 2) {
      if ((uVar11 & 7) == 2) goto LAB_003d7024;
    }
    else if ((iVar8 == 3) && ((uVar11 & 7) == 2)) goto LAB_003d7174;
    if ((uVar11 & 7) == 4) goto LAB_003d725c;
    uVar9 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar11);
    if ((uVar9 & 1) == 0) {
LAB_003d7254:
      uVar10 = 0;
LAB_003d7260:
      if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar10);
      }
      return;
    }
  } while( true );
}


