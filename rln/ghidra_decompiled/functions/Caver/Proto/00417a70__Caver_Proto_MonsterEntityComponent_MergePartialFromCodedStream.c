/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417a70
 * Function: Caver::Proto::MonsterEntityComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MonsterEntityComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MonsterEntityComponent::MergePartialFromCodedStream
          (MonsterEntityComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  Program *pPVar11;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_00417aa4:
  do {
    pbVar10 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar10) || (bVar2 = *pbVar10, (char)bVar2 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 0) goto LAB_00417ae4;
LAB_00417df4:
      uVar6 = 1;
      goto LAB_00417e00;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar10 + 1;
    if (bVar2 == 0) goto LAB_00417df4;
LAB_00417ae4:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar4 & 7) == 2) {
        pPVar11 = *(Program **)(this + 0x18);
        *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
        if (pPVar11 == (Program *)0x0) {
          pPVar11 = operator_new(0x30);
          Program::Program(pPVar11);
          *(Program **)(this + 0x18) = pPVar11;
        }
        pbVar10 = *(byte **)(param_1 + 8);
        if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
          local_4c = (uint)*pbVar10;
          *(byte **)(param_1 + 8) = pbVar10 + 1;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00417dfc;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00417dfc;
        iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
        uVar7 = Program::MergePartialFromCodedStream(pPVar11,param_1);
        if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00417dfc;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00417c70:
          pPVar11 = *(Program **)(this + 0x10);
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
          if (pPVar11 == (Program *)0x0) {
            pPVar11 = operator_new(0x30);
            Program::Program(pPVar11);
            *(Program **)(this + 0x10) = pPVar11;
          }
          pbVar10 = *(byte **)(param_1 + 8);
          if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
            local_4c = (uint)*pbVar10;
            *(byte **)(param_1 + 8) = pbVar10 + 1;
          }
          else {
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_00417dfc;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_00417dfc;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar7 = Program::MergePartialFromCodedStream(pPVar11,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00417dfc;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          if ((pbVar9 < pbVar8) && (*pbVar9 == 0x18)) {
            pbVar9 = pbVar9 + 1;
            *(byte **)(param_1 + 8) = pbVar9;
            if (pbVar9 < pbVar8) {
LAB_00417b70:
              if ((char)*pbVar9 < '\0') goto LAB_00417d50;
              pbVar10 = pbVar9 + 1;
              local_4c = (uint)*pbVar9;
              *(byte **)(param_1 + 8) = pbVar10;
            }
            else {
LAB_00417d50:
              uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_00417dfc;
              pbVar10 = *(byte **)(param_1 + 8);
              pbVar8 = *(byte **)(param_1 + 0x10);
            }
            this[0x20] = (MonsterEntityComponent)(local_4c != 0);
            *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
            if ((pbVar10 < pbVar8) && (*pbVar10 == 0x20)) {
              pbVar10 = pbVar10 + 1;
              *(byte **)(param_1 + 8) = pbVar10;
              if (pbVar10 < pbVar8) {
LAB_00417ba0:
                if ((char)*pbVar10 < '\0') goto LAB_00417da4;
                pbVar9 = pbVar10 + 1;
                local_4c = (uint)*pbVar10;
                *(byte **)(param_1 + 8) = pbVar9;
              }
              else {
LAB_00417da4:
                uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_4c);
                if ((uVar7 & 1) == 0) goto LAB_00417dfc;
                pbVar9 = *(byte **)(param_1 + 8);
                pbVar8 = *(byte **)(param_1 + 0x10);
              }
                    /* try { // try from 00417dc4 to 00517f3b has its CatchHandler @ 00417dc4
                       catch() { ... } // from try @ 00417dc4 with catch @ 00417dc4
                       catch() { ... } // from try @ 00417f40 with catch @ 00417dc4
                       catch() { ... } // from try @ 00417f94 with catch @ 00417dc4
                       catch() { ... } // from try @ 00417fe8 with catch @ 00417dc4 */
              this[0x21] = (MonsterEntityComponent)(local_4c != 0);
              *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
              if ((pbVar9 == pbVar8) && (*(int *)(param_1 + 0x2c) != 0)) {
                uVar6 = 1;
                *(undefined4 *)(param_1 + 0x20) = 0;
                param_1[0x24] = (CodedInputStream)0x1;
                goto LAB_00417e00;
              }
            }
          }
        }
        goto LAB_00417aa4;
      }
      break;
    case 2:
      if ((uVar4 & 7) == 2) goto LAB_00417c70;
      break;
    case 3:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_00417b70;
        goto LAB_00417d50;
      }
      break;
    case 4:
      if ((uVar7 & 7) == 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar10 < pbVar8) goto LAB_00417ba0;
        goto LAB_00417da4;
      }
    }
    if ((uVar4 & 7) == 4) goto LAB_00417df4;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
    if ((uVar7 & 1) == 0) {
LAB_00417dfc:
      uVar6 = 0;
LAB_00417e00:
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


