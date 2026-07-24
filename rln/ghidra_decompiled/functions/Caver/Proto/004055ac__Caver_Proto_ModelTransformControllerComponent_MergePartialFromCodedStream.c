/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004055ac
 * Function: Caver::Proto::ModelTransformControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ModelTransformControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::MergePartialFromCodedStream
          (ModelTransformControllerComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  Vector3 *pVVar11;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
LAB_004055e0:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar8 = (ulong)uVar5;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (uVar5 != 0) goto LAB_00405620;
LAB_00405950:
      uVar7 = 1;
      goto LAB_00405954;
    }
    uVar8 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar3 == 0) goto LAB_00405950;
LAB_00405620:
    uVar5 = (uint)uVar8;
    switch((int)(uVar8 >> 3)) {
    case 1:
      if ((uVar8 & 7) == 0) {
        pbVar1 = *(byte **)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
        if ((pbVar1 < pbVar9) && (-1 < (char)*pbVar1)) {
          pbVar10 = pbVar1 + 1;
          local_4c = (uint)*pbVar1;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
          uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar8 & 1) == 0) goto LAB_00405948;
                    /* try { // try from 004056dc to 005056f7 has its CatchHandler @ 004057bc */
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar9 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_4c;
        uVar5 = *(uint *)(this + 0x28) | 1;
        *(uint *)(this + 0x28) = uVar5;
                    /* try { // try from 004056f8 to 0050570b has its CatchHandler @ 00405748 */
        if ((pbVar10 < pbVar9) && (*pbVar10 == 0x12)) {
                    /* try { // try from 0040570c to 005057bf has its CatchHandler @ 00405698 */
          *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_00405710:
          pVVar11 = *(Vector3 **)(this + 0x10);
          *(uint *)(this + 0x28) = uVar5 | 2;
          if (pVVar11 == (Vector3 *)0x0) {
            pVVar11 = operator_new(0x20);
            Vector3::Vector3(pVVar11);
            *(Vector3 **)(this + 0x10) = pVVar11;
          }
          pbVar1 = *(byte **)(param_1 + 8);
          if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                    /* catch() { ... } // from try @ 004056f8 with catch @ 00405748 */
            local_4c = (uint)*pbVar1;
            *(byte **)(param_1 + 8) = pbVar1 + 1;
          }
          else {
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar8 & 1) == 0) goto LAB_00405948;
          }
          iVar6 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar6 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_00405948;
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar8 = Vector3::MergePartialFromCodedStream(pVVar11,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00405948;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
                    /* catch() { ... } // from try @ 004056dc with catch @ 004057bc */
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_004057e4:
            pVVar11 = *(Vector3 **)(this + 0x18);
            *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
            if (pVVar11 == (Vector3 *)0x0) {
              pVVar11 = operator_new(0x20);
              Vector3::Vector3(pVVar11);
              *(Vector3 **)(this + 0x18) = pVVar11;
            }
            pbVar1 = *(byte **)(param_1 + 8);
            if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
              local_4c = (uint)*pbVar1;
              *(byte **)(param_1 + 8) = pbVar1 + 1;
            }
            else {
              uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_4c);
              if ((uVar8 & 1) == 0) goto LAB_00405948;
            }
            iVar6 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar6 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_00405948;
            iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
            uVar8 = Vector3::MergePartialFromCodedStream(pVVar11,param_1);
            if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00405948;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar2 = *(char **)(param_1 + 8);
            if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '%')) {
              *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_004058bc:
              uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_4c);
              if ((uVar8 & 1) == 0) goto LAB_00405948;
              *(uint *)(this + 0x20) = local_4c;
              *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
              pcVar2 = *(char **)(param_1 + 8);
              if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '-')) {
                *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_00405900:
                uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_4c);
                if ((uVar8 & 1) == 0) goto LAB_00405948;
                *(uint *)(this + 0x24) = local_4c;
                *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 0x10;
                if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                   (*(int *)(param_1 + 0x2c) != 0)) {
                  uVar7 = 1;
                  *(undefined4 *)(param_1 + 0x20) = 0;
                  param_1[0x24] = (CodedInputStream)0x1;
                  goto LAB_00405954;
                }
              }
            }
          }
        }
        goto LAB_004055e0;
      }
      break;
    case 2:
      if ((uVar5 & 7) == 2) {
        uVar5 = *(uint *)(this + 0x28);
        goto LAB_00405710;
      }
      break;
    case 3:
      if ((uVar5 & 7) == 2) goto LAB_004057e4;
      break;
    case 4:
      if ((uVar5 & 7) == 5) goto LAB_004058bc;
      break;
    case 5:
      if ((uVar5 & 7) == 5) goto LAB_00405900;
    }
    if ((uVar5 & 7) == 4) goto LAB_00405950;
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar8 & 1) == 0) {
LAB_00405948:
      uVar7 = 0;
LAB_00405954:
      if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}


