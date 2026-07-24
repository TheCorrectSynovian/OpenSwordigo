/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040fdc4
 * Function: Caver::Proto::LightComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(LightComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::LightComponent::MergePartialFromCodedStream
          (LightComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  FloatColor *this_00;
  Vector3 *this_01;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
LAB_004101ec:
  pbVar2 = *(byte **)(param_1 + 8);
  if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar3 = *pbVar2, (char)bVar3 < '\0')) {
    uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
                    /* catch() { ... } // from try @ 0040eeec with catch @ 0040fe04 */
    uVar8 = (ulong)uVar5;
    *(uint *)(param_1 + 0x20) = uVar5;
    if (uVar5 != 0) goto LAB_0040fe10;
LAB_00410214:
                    /* catch() { ... } // from try @ 0040e690 with catch @ 00410214 */
    uVar7 = 1;
    goto LAB_00410220;
  }
  uVar8 = (ulong)bVar3;
  *(uint *)(param_1 + 0x20) = (uint)bVar3;
                    /* catch() { ... } // from try @ 0040e734 with catch @ 0041020c */
  *(byte **)(param_1 + 8) = pbVar2 + 1;
  if (bVar3 == 0) goto LAB_00410214;
LAB_0040fe10:
  uVar5 = (uint)uVar8;
  switch((int)(uVar8 >> 3)) {
  case 1:
    if ((uVar8 & 7) != 0) {
LAB_0040ff94:
      if ((uVar5 & 7) != 4) goto LAB_0040ff9c;
      goto LAB_00410214;
    }
    pbVar2 = *(byte **)(param_1 + 8);
    if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
      local_4c = (uint)*pbVar2;
      *(byte **)(param_1 + 8) = pbVar2 + 1;
    }
    else {
      uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
      if ((uVar8 & 1) == 0) goto LAB_0041021c;
    }
    if (local_4c < 5) {
      *(uint *)(this + 0xc) = local_4c;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
    }
    pcVar1 = *(char **)(param_1 + 8);
    if ((*(char **)(param_1 + 0x10) <= pcVar1) || (*pcVar1 != '\x15')) goto LAB_004101ec;
    *(char **)(param_1 + 8) = pcVar1 + 1;
    break;
  case 2:
    if ((uVar5 & 7) != 5) goto LAB_0040ff94;
    break;
  case 3:
    if ((uVar5 & 7) != 2) goto LAB_0040ff94;
    uVar5 = *(uint *)(this + 0x38);
                    /* catch() { ... } // from try @ 0040edc0 with catch @ 0040feb4 */
    goto LAB_0040ff28;
  case 4:
    if ((uVar5 & 7) != 5) goto LAB_0040ff94;
    goto LAB_00410034;
  case 5:
                    /* catch() { ... } // from try @ 0040ee50 with catch @ 0040fe9c */
    if ((uVar5 & 7) != 5) goto LAB_0040ff94;
    goto LAB_00410078;
  case 6:
    if ((uVar5 & 7) != 2) goto LAB_0040ff94;
    uVar5 = *(uint *)(this + 0x38);
    goto LAB_004100bc;
  case 7:
    if ((uVar5 & 7) != 5) goto LAB_0040ff94;
    goto LAB_00410190;
  default:
    if ((uVar5 & 7) == 4) goto LAB_00410214;
LAB_0040ff9c:
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar5);
    if ((uVar8 & 1) == 0) {
LAB_0041021c:
      uVar7 = 0;
LAB_00410220:
      if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
    goto LAB_004101ec;
  }
  uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
  if ((uVar8 & 1) == 0) goto LAB_0041021c;
  *(uint *)(this + 0x10) = local_4c;
  uVar5 = *(uint *)(this + 0x38) | 2;
  *(uint *)(this + 0x38) = uVar5;
  pcVar1 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 0040edb0 with catch @ 0040ff10 */
  if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\x1a')) {
    *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_0040ff28:
    this_00 = *(FloatColor **)(this + 0x18);
    *(uint *)(this + 0x38) = uVar5 | 4;
    if (this_00 == (FloatColor *)0x0) {
      this_00 = operator_new(0x20);
      FloatColor::FloatColor(this_00);
      *(FloatColor **)(this + 0x18) = this_00;
    }
    pbVar2 = *(byte **)(param_1 + 8);
    if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
      local_4c = (uint)*pbVar2;
                    /* catch() { ... } // from try @ 0040eda4 with catch @ 0040ff6c */
      *(byte **)(param_1 + 8) = pbVar2 + 1;
    }
    else {
      uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
                    /* catch() { ... } // from try @ 0040ed70 with catch @ 0040ffb8 */
      if ((uVar8 & 1) == 0) goto LAB_0041021c;
    }
    iVar6 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar6 + 1;
    if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_0041021c;
    iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
    uVar8 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
                    /* catch() { ... } // from try @ 0040ed5c with catch @ 0040fff0 */
                    /* catch() { ... } // from try @ 0040ed3c with catch @ 0040fff4 */
    if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041021c;
    google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
    if (0 < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    }
    pcVar1 = *(char **)(param_1 + 8);
    if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '%')) {
      *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00410034:
      uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
      if ((uVar8 & 1) == 0) goto LAB_0041021c;
      *(uint *)(this + 0x20) = local_4c;
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
                    /* catch() { ... } // from try @ 0040ed28 with catch @ 00410058 */
      pcVar1 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 0040ecf8 with catch @ 0041005c */
                    /* catch() { ... } // from try @ 0040e794 with catch @ 00410068 */
      if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
        *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00410078:
        uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar8 & 1) == 0) goto LAB_0041021c;
        *(uint *)(this + 0x24) = local_4c;
        uVar5 = *(uint *)(this + 0x38) | 0x10;
        *(uint *)(this + 0x38) = uVar5;
        pcVar1 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 0040f208 with catch @ 004100a0 */
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '2')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_004100bc:
          this_01 = *(Vector3 **)(this + 0x30);
          *(uint *)(this + 0x38) = uVar5 | 0x40;
          if (this_01 == (Vector3 *)0x0) {
            this_01 = operator_new(0x20);
            Vector3::Vector3(this_01);
            *(Vector3 **)(this + 0x30) = this_01;
          }
          pbVar2 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 0040efe0 with catch @ 004100f0
                       catch() { ... } // from try @ 0040eff4 with catch @ 004100f0
                       catch() { ... } // from try @ 0040f08c with catch @ 004100f0 */
          if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
                    /* catch() { ... } // from try @ 0040ec98 with catch @ 004100f4 */
            local_4c = (uint)*pbVar2;
            *(byte **)(param_1 + 8) = pbVar2 + 1;
          }
          else {
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar8 & 1) == 0) goto LAB_0041021c;
          }
          iVar6 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar6 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar6) goto LAB_0041021c;
          iVar6 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* catch() { ... } // from try @ 0040ec04 with catch @ 00410144 */
          uVar8 = Vector3::MergePartialFromCodedStream(this_01,param_1);
          if (((uVar8 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0041021c;
                    /* catch() { ... } // from try @ 0040e754 with catch @ 0041015c */
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar6);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '=')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00410190:
            uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_4c);
            if ((uVar8 & 1) == 0) goto LAB_0041021c;
            *(uint *)(this + 0x28) = local_4c;
            *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x20;
                    /* catch() { ... } // from try @ 0040e748 with catch @ 004101b8 */
            if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
               (*(int *)(param_1 + 0x2c) != 0)) {
              uVar7 = 1;
                    /* catch() { ... } // from try @ 0040e67c with catch @ 0041024c */
              *(undefined4 *)(param_1 + 0x20) = 0;
              param_1[0x24] = (CodedInputStream)0x1;
              goto LAB_00410220;
            }
          }
        }
      }
    }
  }
  goto LAB_004101ec;
}


