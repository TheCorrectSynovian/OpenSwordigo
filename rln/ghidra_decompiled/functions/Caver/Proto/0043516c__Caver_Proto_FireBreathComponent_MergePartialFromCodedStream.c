/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043516c
 * Function: Caver::Proto::FireBreathComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(FireBreathComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::FireBreathComponent::MergePartialFromCodedStream
          (FireBreathComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  FloatColor *this_00;
  uint local_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 00434ec8 with catch @ 0043517c */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
LAB_00435198:
  do {
    pbVar10 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar10) || (bVar1 = *pbVar10, (char)bVar1 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = uVar4 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar4;
      if ((int)uVar4 != 0) goto LAB_004351d8;
LAB_004353ec:
      uVar5 = 1;
      goto LAB_004353f8;
    }
    uVar7 = (ulong)bVar1;
                    /* catch() { ... } // from try @ 00434ea4 with catch @ 004351b4 */
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
                    /* catch() { ... } // from try @ 00434e48 with catch @ 004351b8 */
    *(byte **)(param_1 + 8) = pbVar10 + 1;
    if (bVar1 == 0) goto LAB_004353ec;
LAB_004351d8:
    iVar3 = (int)(uVar7 >> 3);
    uVar6 = (uint)uVar7;
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        if ((uVar7 & 7) != 0) goto LAB_0043526c;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00434e1c with catch @ 00435214 */
        if (pbVar9 < pbVar8) goto LAB_0043521c;
        goto LAB_004352d0;
      }
      if ((iVar3 == 3) && ((uVar6 & 7) == 2)) {
        uVar6 = *(uint *)(this + 0x20);
        goto LAB_00435314;
      }
LAB_0043526c:
      if ((uVar6 & 7) == 4) goto LAB_004353ec;
      uVar4 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar6);
      if ((uVar4 & 1) == 0) {
LAB_004353f4:
        uVar5 = 0;
        goto LAB_004353f8;
      }
      goto LAB_00435198;
    }
    if ((uVar7 & 7) != 0) goto LAB_0043526c;
    pbVar10 = *(byte **)(param_1 + 8);
    pbVar8 = *(byte **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00434df8 with catch @ 0043524c */
                    /* catch() { ... } // from try @ 00434d94 with catch @ 00435250 */
    if ((pbVar10 < pbVar8) && (-1 < (char)*pbVar10)) {
      pbVar9 = pbVar10 + 1;
      local_4c = (uint)*pbVar10;
      *(byte **)(param_1 + 8) = pbVar9;
    }
    else {
      uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
      if ((uVar4 & 1) == 0) goto LAB_004353f4;
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_4c;
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
                    /* catch() { ... } // from try @ 00434d60 with catch @ 004352b4 */
    if ((pbVar9 < pbVar8) && (*pbVar9 == 0x10)) {
      pbVar9 = pbVar9 + 1;
      *(byte **)(param_1 + 8) = pbVar9;
      if (pbVar9 < pbVar8) {
LAB_0043521c:
        if ((char)*pbVar9 < '\0') goto LAB_004352d0;
        pbVar10 = pbVar9 + 1;
        local_4c = (uint)*pbVar9;
        *(byte **)(param_1 + 8) = pbVar10;
      }
      else {
LAB_004352d0:
        uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar4 & 1) == 0) goto LAB_004353f4;
        pbVar10 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_4c;
      uVar6 = *(uint *)(this + 0x20) | 2;
      *(uint *)(this + 0x20) = uVar6;
      if ((pbVar10 < pbVar8) && (*pbVar10 == 0x1a)) {
        *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_00435314:
        this_00 = *(FloatColor **)(this + 0x18);
        *(uint *)(this + 0x20) = uVar6 | 4;
                    /* catch() { ... } // from try @ 00434d40 with catch @ 00435320 */
        if (this_00 == (FloatColor *)0x0) {
          this_00 = operator_new(0x20);
          FloatColor::FloatColor(this_00);
          *(FloatColor **)(this + 0x18) = this_00;
        }
        pbVar10 = *(byte **)(param_1 + 8);
        if ((pbVar10 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar10)) {
          local_4c = (uint)*pbVar10;
          *(byte **)(param_1 + 8) = pbVar10 + 1;
        }
        else {
          uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar4 & 1) == 0) goto LAB_004353f4;
        }
        iVar3 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar3 + 1;
        if (*(int *)(param_1 + 0x3c) <= iVar3) goto LAB_004353f4;
        iVar3 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
        uVar4 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
        if (((uVar4 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_004353f4;
        google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar3);
        if (0 < *(int *)(param_1 + 0x38)) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_004353f8:
          if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar5);
          }
          return;
        }
      }
    }
  } while( true );
}


