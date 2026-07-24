/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e38e0
 * Function: Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(GuideTarget_LevelObject * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::GuideTarget_LevelObject::MergePartialFromCodedStream
          (GuideTarget_LevelObject *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  string *psVar12;
  
  puVar8 = PTR__default_object_identifier__007e7308;
  puVar7 = PTR__default_level_name__007e6158;
  puVar6 = PTR_DAT_007e5de8;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003e3918:
  do {
    while( true ) {
      pbVar2 = *(byte **)(param_1 + 8);
      if ((pbVar2 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar2, -1 < (char)bVar4)) {
        uVar11 = (ulong)bVar4;
        uVar10 = (uint)bVar4;
        *(uint *)(param_1 + 0x20) = uVar10;
        *(byte **)(param_1 + 8) = pbVar2 + 1;
      }
      else {
        uVar9 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
        uVar11 = uVar9 & 0xffffffff;
        uVar10 = (uint)uVar9;
        *(uint *)(param_1 + 0x20) = uVar10;
      }
      if (uVar10 == 0) {
        return 1;
      }
      iVar5 = (int)(uVar11 >> 3);
      uVar10 = (uint)uVar11;
      if (iVar5 == 1) break;
      if ((iVar5 != 2) || ((uVar10 & 7) != 2)) goto LAB_003e3a38;
LAB_003e39e0:
      psVar12 = *(string **)(this + 0x18);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      if (psVar12 == (string *)puVar8) {
        psVar12 = operator_new(8);
        *(undefined **)psVar12 = puVar6 + 0x18;
        *(string **)(this + 0x18) = psVar12;
      }
      uVar11 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
        return 1;
      }
    }
    if ((uVar10 & 7) == 2) {
      psVar12 = *(string **)(this + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
      if (psVar12 == (string *)puVar7) {
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
        goto LAB_003e39e0;
      }
      goto LAB_003e3918;
    }
LAB_003e3a38:
    if ((uVar10 & 7) == 4) {
      return 1;
    }
    uVar11 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  } while( true );
}


