/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5be4
 * Function: Caver::Proto::Program::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Program * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

undefined8 __thiscall
Caver::Proto::Program::MergePartialFromCodedStream(Program *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  string *psVar13;
  
  puVar9 = PTR__default_name__007e7d20;
  puVar8 = PTR__default_bytes__007e7070;
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR__default_string__007e54d8;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  do {
    while( true ) {
      pbVar2 = *(byte **)(param_1 + 8);
      if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar2, -1 < (char)bVar4)) {
        uVar12 = (ulong)bVar4;
        uVar11 = (uint)bVar4;
        *(uint *)(param_1 + 0x20) = uVar11;
        *(byte **)(param_1 + 8) = pbVar2 + 1;
      }
      else {
        uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
        uVar12 = uVar10 & 0xffffffff;
        uVar11 = (uint)uVar10;
        *(uint *)(param_1 + 0x20) = uVar11;
      }
      if (uVar11 == 0) {
        return 1;
      }
      iVar5 = (int)(uVar12 >> 3);
      uVar11 = (uint)uVar12;
      if (iVar5 == 1) break;
      if (iVar5 == 2) {
        if ((uVar11 & 7) == 2) goto LAB_003d5d08;
      }
      else if ((iVar5 == 3) && ((uVar11 & 7) == 2)) goto LAB_003d5d64;
LAB_003d5dbc:
      if ((uVar11 & 7) == 4) {
        return 1;
      }
      uVar12 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar11);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
    }
    if ((uVar11 & 7) != 2) goto LAB_003d5dbc;
    psVar13 = *(string **)(this + 0x18);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
    if (psVar13 == (string *)puVar6) {
      psVar13 = operator_new(8);
      *(undefined **)psVar13 = puVar1;
      *(string **)(this + 0x18) = psVar13;
    }
    uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    pcVar3 = *(char **)(param_1 + 8);
    if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x12')) {
      *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003d5d08:
      psVar13 = *(string **)(this + 0x20);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
      if (psVar13 == (string *)puVar8) {
        psVar13 = operator_new(8);
        *(undefined **)psVar13 = puVar7 + 0x18;
        *(string **)(this + 0x20) = psVar13;
      }
      uVar12 = google::protobuf::internal::WireFormatLite::ReadBytes(param_1,psVar13);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_003d5d64:
        psVar13 = *(string **)(this + 0x10);
        *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
        if (psVar13 == (string *)puVar9) {
          psVar13 = operator_new(8);
          *(undefined **)psVar13 = puVar7 + 0x18;
          *(string **)(this + 0x10) = psVar13;
        }
        uVar12 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar13);
        if ((uVar12 & 1) == 0) {
          return 0;
        }
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
          return 1;
        }
      }
    }
  } while( true );
}


