/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414ddc
 * Function: Caver::Proto::BushControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(BushControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::BushControllerComponent::MergePartialFromCodedStream
          (BushControllerComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_00414e04:
  do {
    pbVar8 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar8) || (bVar1 = *pbVar8, (char)bVar1 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar6 = uVar4 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar4;
      if ((int)uVar4 != 0) goto LAB_00414e44;
LAB_00414fec:
      uVar5 = 1;
      goto LAB_00414ff8;
    }
    uVar6 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    if (bVar1 == 0) goto LAB_00414fec;
LAB_00414e44:
    iVar3 = (int)(uVar6 >> 3);
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        if ((uVar6 & 7) != 0) goto LAB_00414ef4;
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00414ea0 to 00514ec7 has its CatchHandler @ 00414ed0 */
        if (pbVar9 < pbVar7) goto LAB_00414ea4;
        goto LAB_00414f58;
      }
      if ((iVar3 == 3) && ((uVar6 & 7) == 0)) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_00414e74;
        goto LAB_00414fa4;
      }
LAB_00414ef4:
      if (((uint)uVar6 & 7) == 4) goto LAB_00414fec;
      uVar4 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar6);
      if ((uVar4 & 1) == 0) {
LAB_00414ff4:
        uVar5 = 0;
        goto LAB_00414ff8;
      }
      goto LAB_00414e04;
    }
    if ((uVar6 & 7) != 0) goto LAB_00414ef4;
                    /* try { // try from 00414ec8 to 00514ed3 has its CatchHandler @ 00414c88 */
    pbVar8 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00414ea0 with catch @ 00414ed0
                        */
                    /* try { // try from 00414ed4 to 00514f1b has its CatchHandler @ 00414ed4
                       catch() { ... } // from try @ 00414ed4 with catch @ 00414ed4
                       catch() { ... } // from try @ 00414fac with catch @ 00414ed4
                       catch() { ... } // from try @ 00415078 with catch @ 00414ed4 */
    if ((pbVar8 < pbVar7) && (-1 < (char)*pbVar8)) {
      pbVar9 = pbVar8 + 1;
      local_3c = (uint)*pbVar8;
      *(byte **)(param_1 + 8) = pbVar9;
    }
    else {
      uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar4 & 1) == 0) goto LAB_00414ff4;
                    /* try { // try from 00414f1c to 00514f23 has its CatchHandler @ 00415084 */
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
    if ((pbVar9 < pbVar7) && (*pbVar9 == 0x10)) {
      pbVar9 = pbVar9 + 1;
      *(byte **)(param_1 + 8) = pbVar9;
      if (pbVar9 < pbVar7) {
LAB_00414ea4:
        if ((char)*pbVar9 < '\0') goto LAB_00414f58;
        pbVar8 = pbVar9 + 1;
        local_3c = (uint)*pbVar9;
        *(byte **)(param_1 + 8) = pbVar8;
      }
      else {
LAB_00414f58:
        uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar4 & 1) == 0) goto LAB_00414ff4;
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
                    /* try { // try from 00414f84 to 00514fab has its CatchHandler @ 0041502c */
      if ((pbVar8 < pbVar7) && (*pbVar8 == 0x18)) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar7) {
LAB_00414e74:
          if ((char)*pbVar8 < '\0') goto LAB_00414fa4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00414dc0 with catch @ 00414e7c
                        */
          pbVar9 = pbVar8 + 1;
          local_3c = (uint)*pbVar8;
          *(byte **)(param_1 + 8) = pbVar9;
        }
        else {
LAB_00414fa4:
                    /* try { // try from 00414fac to 0051504f has its CatchHandler @ 00414ed4 */
          uVar4 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar4 & 1) == 0) goto LAB_00414ff4;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x14) = local_3c;
        *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 4;
        if ((pbVar9 == pbVar7) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_00414ff8:
          if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar5);
          }
          return;
        }
      }
    }
  } while( true );
}


