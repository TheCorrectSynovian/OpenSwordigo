/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040f038
 * Function: Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ObjectLinkControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::MergePartialFromCodedStream
          (ObjectLinkControllerComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  string *psVar13;
  Vector3 *pVVar14;
  uint local_6c;
  long local_68;
  
  puVar8 = PTR__default_target_bone_identifier__007e7b50;
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR__default_target_object_identifier__007e4c30;
                    /* try { // try from 0040f044 to 0050f06b has its CatchHandler @ 0040fc00 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 0040f08c to 0050f0b3 has its CatchHandler @ 004100f0 */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_0040f090:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar12 = (ulong)uVar9;
      *(uint *)(param_1 + 0x20) = uVar9;
      if (uVar9 != 0) goto LAB_0040f0d0;
LAB_0040f49c:
      uVar11 = 1;
      goto LAB_0040f4a0;
    }
    uVar12 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_0040f49c;
LAB_0040f0d0:
                    /* try { // try from 0040f0d4 to 0050f0fb has its CatchHandler @ 00410848 */
    uVar9 = (uint)uVar12;
    switch((int)(uVar12 >> 3)) {
    case 1:
      if ((uVar9 & 7) == 2) {
                    /* try { // try from 0040f0fc to 0050f103 has its CatchHandler @ 00410850 */
        psVar13 = *(string **)(this + 0x10);
        *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
        if (psVar13 == (string *)puVar6) {
          psVar13 = operator_new(8);
          *(undefined **)psVar13 = puVar1;
          *(string **)(this + 0x10) = psVar13;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
        if ((uVar12 & 1) == 0) goto LAB_0040f494;
        pcVar3 = *(char **)(param_1 + 8);
        if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
          *(char **)(param_1 + 8) = pcVar3 + 1;
                    /* try { // try from 0040f150 to 0050f157 has its CatchHandler @ 0040fd0c */
LAB_0040f190:
          psVar13 = *(string **)(this + 0x18);
          *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
                    /* try { // try from 0040f1a4 to 0050f1b7 has its CatchHandler @ 0040fce0 */
          if (psVar13 == (string *)puVar8) {
            psVar13 = operator_new(8);
                    /* try { // try from 0040f1b8 to 0050f1cb has its CatchHandler @ 0040fc80 */
            *(undefined **)psVar13 = puVar7 + 0x18;
            *(string **)(this + 0x18) = psVar13;
          }
          uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
          if ((uVar12 & 1) == 0) goto LAB_0040f494;
                    /* try { // try from 0040f1cc to 0050f1db has its CatchHandler @ 0040fc24 */
          pcVar3 = *(char **)(param_1 + 8);
          if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
            *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_0040f1ec:
            pVVar14 = *(Vector3 **)(this + 0x20);
            *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
            if (pVVar14 == (Vector3 *)0x0) {
              pVVar14 = operator_new(0x20);
                    /* try { // try from 0040f208 to 0050f243 has its CatchHandler @ 004100a0 */
              Vector3::Vector3(pVVar14);
              *(Vector3 **)(this + 0x20) = pVVar14;
            }
            pbVar2 = *(byte **)(param_1 + 8);
            if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
              local_6c = (uint)*pbVar2;
              *(byte **)(param_1 + 8) = pbVar2 + 1;
            }
            else {
                    /* try { // try from 0040f25c to 0050f26f has its CatchHandler @ 0040fba8 */
              uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                 (param_1,&local_6c);
              if ((uVar12 & 1) == 0) goto LAB_0040f494;
            }
            iVar10 = *(int *)(param_1 + 0x38);
                    /* try { // try from 0040f270 to 0050f27f has its CatchHandler @ 0040fb50 */
            *(int *)(param_1 + 0x38) = iVar10 + 1;
            if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_0040f494;
                    /* try { // try from 0040f280 to 0050f28b has its CatchHandler @ 0040faf4 */
            iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
            uVar12 = Vector3::MergePartialFromCodedStream(pVVar14,param_1);
            if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0040f494;
            google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
            if (0 < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
            }
            pcVar3 = *(char **)(param_1 + 8);
            if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\"')) {
                    /* try { // try from 0040f2dc to 0050f303 has its CatchHandler @ 0040fd0c */
              *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_0040f2e0:
              pVVar14 = *(Vector3 **)(this + 0x30);
              *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
              if (pVVar14 == (Vector3 *)0x0) {
                pVVar14 = operator_new(0x20);
                Vector3::Vector3(pVVar14);
                    /* try { // try from 0040f304 to 0050fcf3 has its CatchHandler @ 0040e548 */
                *(Vector3 **)(this + 0x30) = pVVar14;
              }
              pbVar2 = *(byte **)(param_1 + 8);
              if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
                local_6c = (uint)*pbVar2;
                *(byte **)(param_1 + 8) = pbVar2 + 1;
              }
              else {
                uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                   (param_1,&local_6c);
                if ((uVar12 & 1) == 0) goto LAB_0040f494;
              }
              iVar10 = *(int *)(param_1 + 0x38);
              *(int *)(param_1 + 0x38) = iVar10 + 1;
              if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_0040f494;
              iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
              uVar12 = Vector3::MergePartialFromCodedStream(pVVar14,param_1);
              if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
              goto LAB_0040f494;
              google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
              if (0 < *(int *)(param_1 + 0x38)) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              }
              pcVar3 = *(char **)(param_1 + 8);
              if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '*')) {
                *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_0040f3b8:
                pVVar14 = *(Vector3 **)(this + 0x28);
                *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
                if (pVVar14 == (Vector3 *)0x0) {
                  pVVar14 = operator_new(0x20);
                  Vector3::Vector3(pVVar14);
                  *(Vector3 **)(this + 0x28) = pVVar14;
                }
                pbVar2 = *(byte **)(param_1 + 8);
                if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar2)) {
                  local_6c = (uint)*pbVar2;
                  *(byte **)(param_1 + 8) = pbVar2 + 1;
                }
                else {
                  uVar12 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                     (param_1,&local_6c);
                  if ((uVar12 & 1) == 0) goto LAB_0040f494;
                }
                iVar10 = *(int *)(param_1 + 0x38);
                *(int *)(param_1 + 0x38) = iVar10 + 1;
                if (*(int *)(param_1 + 0x3c) <= iVar10) goto LAB_0040f494;
                iVar10 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_6c);
                uVar12 = Vector3::MergePartialFromCodedStream(pVVar14,param_1);
                if (((uVar12 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0))
                goto LAB_0040f494;
                google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar10);
                if (0 < *(int *)(param_1 + 0x38)) {
                  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                }
                if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                   (*(int *)(param_1 + 0x2c) != 0)) {
                  uVar11 = 1;
                  *(undefined4 *)(param_1 + 0x20) = 0;
                  param_1[0x24] = (CodedInputStream)0x1;
                  goto LAB_0040f4a0;
                }
              }
            }
          }
        }
        goto LAB_0040f090;
      }
      break;
    case 2:
      if ((uVar9 & 7) == 2) goto LAB_0040f190;
      break;
    case 3:
      if ((uVar9 & 7) == 2) goto LAB_0040f1ec;
      break;
    case 4:
      if ((uVar9 & 7) == 2) goto LAB_0040f2e0;
      break;
    case 5:
                    /* try { // try from 0040f15c to 0050f163 has its CatchHandler @ 0040fce4 */
      if ((uVar9 & 7) == 2) goto LAB_0040f3b8;
    }
    if ((uVar9 & 7) == 4) goto LAB_0040f49c;
                    /* try { // try from 0040f248 to 0050f25b has its CatchHandler @ 0040fbfc */
    uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar9);
    if ((uVar12 & 1) == 0) {
LAB_0040f494:
      uVar11 = 0;
LAB_0040f4a0:
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
      return;
    }
  } while( true );
}


