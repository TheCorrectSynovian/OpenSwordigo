/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428918
 * Function: Caver::Proto::BouncingMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(BouncingMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::MergePartialFromCodedStream
          (BouncingMonsterControllerComponent *this,CodedInputStream *param_1)

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
  
                    /* catch() { ... } // from try @ 00428948 with catch @ 00428918 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00428934 to 00528947 has its CatchHandler @ 0042896c */
LAB_00428948:
                    /* try { // try from 00428948 to 0052896f has its CatchHandler @ 00428918 */
  pbVar8 = *(byte **)(param_1 + 8);
  if ((pbVar8 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar8, -1 < (char)bVar2)) {
    uVar6 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar8 + 1;
                    /* catch() { ... } // from try @ 00428934 with catch @ 0042896c */
    if (bVar2 == 0) goto LAB_00428b5c;
LAB_00428988:
    uVar4 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 0) break;
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar7 = *(byte **)(param_1 + 0x10);
      if ((pbVar7 <= pbVar9) || ((char)*pbVar9 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar6 & 1) != 0) {
          pbVar8 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
          goto LAB_00428a58;
        }
        goto LAB_00428b64;
      }
      pbVar8 = pbVar9 + 1;
      local_3c = (uint)*pbVar9;
      *(byte **)(param_1 + 8) = pbVar8;
LAB_00428a58:
      *(uint *)(this + 0xc) = local_3c;
                    /* try { // try from 00428a60 to 00528a67 has its CatchHandler @ 00428b28 */
                    /* try { // try from 00428a68 to 00528b97 has its CatchHandler @ 00428a04 */
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      if ((pbVar8 < pbVar7) && (*pbVar8 == 0x10)) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar7) goto LAB_00428a08;
        goto LAB_00428a8c;
      }
      goto LAB_00428948;
    case 2:
      if ((uVar6 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar7 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00428a04 to 00528a5f has its CatchHandler @ 00428a04
                       catch() { ... } // from try @ 00428a04 with catch @ 00428a04
                       catch() { ... } // from try @ 00428a68 with catch @ 00428a04 */
        if (pbVar8 < pbVar7) {
LAB_00428a08:
          if ((char)*pbVar8 < '\0') goto LAB_00428a8c;
          pbVar9 = pbVar8 + 1;
          local_3c = (uint)*pbVar8;
          *(byte **)(param_1 + 8) = pbVar9;
        }
        else {
LAB_00428a8c:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_00428b64;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar7 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_3c;
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
        if ((pbVar9 < pbVar7) && (*pbVar9 == 0x1d)) {
          *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_00428ad0:
          uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_00428b64;
          *(uint *)(this + 0x14) = local_3c;
          *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '%')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
            goto LAB_00428b14;
          }
        }
        goto LAB_00428948;
      }
      break;
    case 3:
      if ((uVar4 & 7) == 5) goto LAB_00428ad0;
      break;
    case 4:
      if ((uVar4 & 7) != 5) break;
LAB_00428b14:
      uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_3c);
      if ((uVar6 & 1) == 0) goto LAB_00428b64;
                    /* catch() { ... } // from try @ 00428a60 with catch @ 00428b28 */
      *(uint *)(this + 0x18) = local_3c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00428b68:
        if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
      goto LAB_00428948;
    }
    if ((uVar4 & 7) != 4) {
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar6 & 1) == 0) {
LAB_00428b64:
        uVar5 = 0;
        goto LAB_00428b68;
      }
      goto LAB_00428948;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar6 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_00428988;
  }
LAB_00428b5c:
  uVar5 = 1;
  goto LAB_00428b68;
}


