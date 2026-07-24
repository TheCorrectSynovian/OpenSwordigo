/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042b5d0
 * Function: Caver::Proto::SwingComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SwingComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SwingComponent::MergePartialFromCodedStream
          (SwingComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 0042b500 with catch @ 0042b5d4 */
                    /* catch() { ... } // from try @ 0042b4dc with catch @ 0042b5dc */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0042b4a0 with catch @ 0042b5ec */
                    /* catch() { ... } // from try @ 0042b47c with catch @ 0042b5f4 */
LAB_0042b600:
  pbVar8 = *(byte **)(param_1 + 8);
  if ((pbVar8 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar8, -1 < (char)bVar2)) {
    uVar6 = (ulong)bVar2;
                    /* try { // try from 0042b618 to 0052b6cf has its CatchHandler @ 0042b73c */
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
    if (bVar2 == 0) goto LAB_0042b8a8;
LAB_0042b640:
    uVar4 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 0) break;
      pbVar8 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      if ((pbVar7 <= pbVar8) || ((char)*pbVar8 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
                    /* catch() { ... } // from try @ 0042b618 with catch @ 0042b73c */
        if ((uVar6 & 1) != 0) {
                    /* catch() { ... } // from try @ 0042b754 with catch @ 0042b740 */
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
          goto LAB_0042b748;
        }
        goto LAB_0042b8b0;
      }
      pbVar9 = pbVar8 + 1;
      local_3c = (uint)*pbVar8;
      *(byte **)(param_1 + 8) = pbVar9;
LAB_0042b748:
      *(uint *)(this + 0xc) = local_3c;
                    /* try { // try from 0042b750 to 0052b753 has its CatchHandler @ 0042b764 */
                    /* try { // try from 0042b754 to 0052b777 has its CatchHandler @ 0042b740 */
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
                    /* catch() { ... } // from try @ 0042b750 with catch @ 0042b764 */
      if ((pbVar9 < pbVar7) && (*pbVar9 == 0x10)) {
        pbVar9 = pbVar9 + 1;
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < pbVar7) goto LAB_0042b6e0;
        goto LAB_0042b77c;
      }
      goto LAB_0042b600;
    case 2:
                    /* try { // try from 0042b6d0 to 0052b73f has its CatchHandler @ 0042b414 */
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar7) {
LAB_0042b6e0:
          if ((char)*pbVar9 < '\0') goto LAB_0042b77c;
          pbVar8 = pbVar9 + 1;
          local_3c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar8;
        }
        else {
LAB_0042b77c:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_0042b8b0;
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
        }
        this[0x10] = (SwingComponent)(local_3c != 0);
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
        if ((pbVar8 < pbVar7) && (*pbVar8 == 0x18)) {
          pbVar8 = pbVar8 + 1;
          *(byte **)(param_1 + 8) = pbVar8;
          if (pbVar8 < pbVar7) {
LAB_0042b6b0:
            if ((char)*pbVar8 < '\0') goto LAB_0042b7d0;
            pbVar9 = pbVar8 + 1;
            local_3c = (uint)*pbVar8;
            *(byte **)(param_1 + 8) = pbVar9;
          }
          else {
LAB_0042b7d0:
            uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar6 & 1) == 0) goto LAB_0042b8b0;
            pbVar9 = *(byte **)(param_1 + 8);
            pbVar7 = *(byte **)(param_1 + 0x10);
          }
          this[0x11] = (SwingComponent)(local_3c != 0);
          *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
          if ((pbVar9 < pbVar7) && (*pbVar9 == 0x35)) {
            *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_0042b81c:
            uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_3c);
            if ((uVar6 & 1) == 0) goto LAB_0042b8b0;
            *(uint *)(this + 0x14) = local_3c;
            *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
            pcVar1 = *(char **)(param_1 + 8);
            if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '=')) {
              *(char **)(param_1 + 8) = pcVar1 + 1;
              goto LAB_0042b860;
            }
          }
        }
        goto LAB_0042b600;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar7) goto LAB_0042b6b0;
        goto LAB_0042b7d0;
      }
      break;
    default:
      break;
    case 6:
      if ((uVar4 & 7) == 5) goto LAB_0042b81c;
      break;
    case 7:
      if ((uVar4 & 7) != 5) break;
LAB_0042b860:
      uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_3c);
      if ((uVar6 & 1) == 0) goto LAB_0042b8b0;
      *(uint *)(this + 0x18) = local_3c;
                    /* catch() { ... } // from try @ 0042b8b0 with catch @ 0042b880 */
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 0x10;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar5 = 1;
                    /* try { // try from 0042b89c to 0052b8af has its CatchHandler @ 0042b8d4 */
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_0042b8b4:
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0042b89c with catch @ 0042b8d4 */
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar5);
      }
      goto LAB_0042b600;
    }
    if ((uVar4 & 7) != 4) {
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar6 & 1) == 0) {
LAB_0042b8b0:
                    /* try { // try from 0042b8b0 to 0052b8d7 has its CatchHandler @ 0042b880 */
        uVar5 = 0;
        goto LAB_0042b8b4;
      }
      goto LAB_0042b600;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar6 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_0042b640;
  }
LAB_0042b8a8:
  uVar5 = 1;
  goto LAB_0042b8b4;
}


