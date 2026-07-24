/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042dac4
 * Function: Caver::Proto::SpawnPointComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SpawnPointComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SpawnPointComponent::MergePartialFromCodedStream
          (SpawnPointComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  Vector3 *this_00;
  uint local_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 0042d554 with catch @ 0042dadc */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_0042daf0:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar2 = *pbVar1, (char)bVar2 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar8 = uVar5 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar5;
      if ((int)uVar5 != 0) goto LAB_0042db30;
LAB_0042dcc0:
      uVar6 = 1;
      goto LAB_0042dccc;
    }
    uVar8 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
                    /* catch() { ... } // from try @ 0042d530 with catch @ 0042db14 */
    if (bVar2 == 0) goto LAB_0042dcc0;
LAB_0042db30:
    iVar4 = (int)(uVar8 >> 3);
    uVar7 = (uint)uVar8;
    if (iVar4 != 1) {
      if ((iVar4 == 2) && ((uVar7 & 7) == 2)) {
        uVar7 = *(uint *)(this + 0x18);
        goto LAB_0042dbe8;
      }
LAB_0042db8c:
      if ((uVar7 & 7) == 4) goto LAB_0042dcc0;
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar7);
      if ((uVar5 & 1) == 0) {
LAB_0042dcc8:
        uVar6 = 0;
        goto LAB_0042dccc;
      }
      goto LAB_0042daf0;
    }
    if ((uVar8 & 7) != 0) goto LAB_0042db8c;
    pbVar1 = *(byte **)(param_1 + 8);
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((pbVar1 < pbVar9) && (-1 < (char)*pbVar1)) {
                    /* catch() { ... } // from try @ 0042d4a8 with catch @ 0042db74 */
      pbVar10 = pbVar1 + 1;
      local_4c = (uint)*pbVar1;
      *(byte **)(param_1 + 8) = pbVar10;
    }
    else {
                    /* catch() { ... } // from try @ 0042d484 with catch @ 0042dbac */
      uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
                    /* catch() { ... } // from try @ 0042d428 with catch @ 0042dbb0 */
      if ((uVar5 & 1) == 0) goto LAB_0042dcc8;
      pbVar10 = *(byte **)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_4c;
    uVar7 = *(uint *)(this + 0x18) | 1;
    *(uint *)(this + 0x18) = uVar7;
    if ((pbVar10 < pbVar9) && (*pbVar10 == 0x12)) {
      *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_0042dbe8:
      this_00 = *(Vector3 **)(this + 0x10);
      *(uint *)(this + 0x18) = uVar7 | 2;
      if (this_00 == (Vector3 *)0x0) {
        this_00 = operator_new(0x20);
        Vector3::Vector3(this_00);
        *(Vector3 **)(this + 0x10) = this_00;
      }
                    /* catch() { ... } // from try @ 0042d3fc with catch @ 0042dc0c */
      pbVar1 = *(byte **)(param_1 + 8);
      if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
        local_4c = (uint)*pbVar1;
        *(byte **)(param_1 + 8) = pbVar1 + 1;
      }
      else {
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar5 & 1) == 0) goto LAB_0042dcc8;
      }
                    /* catch() { ... } // from try @ 0042d3d8 with catch @ 0042dc44 */
      iVar4 = *(int *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 0042d37c with catch @ 0042dc48 */
      *(int *)(param_1 + 0x38) = iVar4 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar4) goto LAB_0042dcc8;
      iVar4 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
      uVar5 = Vector3::MergePartialFromCodedStream(this_00,param_1);
      if (((uVar5 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0042dcc8;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar4);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
                    /* catch() { ... } // from try @ 0042d348 with catch @ 0042dca4 */
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0042dccc:
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6);
        }
                    /* catch() { ... } // from try @ 0042d324 with catch @ 0042dcdc */
                    /* catch() { ... } // from try @ 0042d2c0 with catch @ 0042dce0 */
        return;
      }
    }
  } while( true );
}


