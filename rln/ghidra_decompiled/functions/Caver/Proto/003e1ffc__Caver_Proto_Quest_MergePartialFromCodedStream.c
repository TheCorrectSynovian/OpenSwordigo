/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1ffc
 * Function: Caver::Proto::Quest::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Quest * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

undefined8 __thiscall
Caver::Proto::Quest::MergePartialFromCodedStream(Quest *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  string *psVar12;
  
  puVar9 = PTR__default_title__007e6d70;
  puVar8 = PTR__default_name__007e5e30;
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR__default_follow_up_quest__007e5bb8;
  puVar5 = PTR__default_map_location__007e4c80;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003e2054:
  pbVar2 = *(byte **)(param_1 + 8);
  if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar2, -1 < (char)bVar4)) {
    uVar11 = (ulong)bVar4;
    uVar10 = (uint)bVar4;
    *(uint *)(param_1 + 0x20) = uVar10;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
  }
  else {
    uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar11 = (ulong)uVar10;
    *(uint *)(param_1 + 0x20) = uVar10;
  }
  if (uVar10 == 0) {
    return 1;
  }
  uVar10 = (uint)uVar11;
  switch((int)(uVar11 >> 3)) {
  case 1:
    if ((uVar10 & 7) != 2) break;
    psVar12 = *(string **)(this + 0x10);
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
    if (psVar12 == (string *)puVar8) {
      psVar12 = operator_new(8);
      *(undefined **)psVar12 = puVar1;
      *(string **)(this + 0x10) = psVar12;
    }
    uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    pcVar3 = *(char **)(param_1 + 8);
    if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
      *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003e212c:
      psVar12 = *(string **)(this + 0x18);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
      if (psVar12 == (string *)puVar9) {
        psVar12 = operator_new(8);
        *(undefined **)psVar12 = puVar7 + 0x18;
        *(string **)(this + 0x18) = psVar12;
      }
      uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003e2198:
        psVar12 = *(string **)(this + 0x20);
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
        if (psVar12 == (string *)puVar6) {
          psVar12 = operator_new(8);
          *(undefined **)psVar12 = puVar7 + 0x18;
          *(string **)(this + 0x20) = psVar12;
        }
        uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        pcVar3 = *(char **)(param_1 + 8);
        if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\"')) {
          *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003e2204:
          psVar12 = *(string **)(this + 0x28);
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
          if (psVar12 == (string *)puVar5) {
            psVar12 = operator_new(8);
            *(undefined **)psVar12 = puVar7 + 0x18;
            *(string **)(this + 0x28) = psVar12;
          }
          uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
             (*(int *)(param_1 + 0x2c) != 0)) {
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
            return 1;
          }
        }
      }
    }
    goto LAB_003e2054;
  case 2:
    if ((uVar10 & 7) == 2) goto LAB_003e212c;
    break;
  case 3:
    if ((uVar10 & 7) == 2) goto LAB_003e2198;
    break;
  case 4:
    if ((uVar10 & 7) == 2) goto LAB_003e2204;
  }
  if ((uVar10 & 7) == 4) {
    return 1;
  }
  uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  goto LAB_003e2054;
}


