/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed3f0
 * Function: Caver::Proto::QuestText::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(QuestText * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::QuestText::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

undefined8 __thiscall
Caver::Proto::QuestText::MergePartialFromCodedStream(QuestText *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  string *psVar9;
  int iVar10;
  char *pcVar11;
  
  puVar5 = PTR__default_quest_name__007e6638;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  do {
    while( true ) {
      pbVar3 = *(byte **)(param_1 + 8);
      if ((pbVar3 < *(byte **)(param_1 + 0x10)) && (bVar4 = *pbVar3, -1 < (char)bVar4)) {
        uVar8 = (ulong)bVar4;
        uVar7 = (uint)bVar4;
        *(uint *)(param_1 + 0x20) = uVar7;
        *(byte **)(param_1 + 8) = pbVar3 + 1;
      }
      else {
        uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
        uVar8 = uVar6 & 0xffffffff;
        uVar7 = (uint)uVar6;
        *(uint *)(param_1 + 0x20) = uVar7;
      }
      if (uVar7 == 0) {
        return 1;
      }
      iVar2 = (int)(uVar8 >> 3);
      uVar7 = (uint)uVar8;
      if (iVar2 != 1) break;
      if ((uVar7 & 7) != 2) goto LAB_003ed4ec;
      psVar9 = *(string **)(this + 0x10);
      *(uint *)(this + 0x50) = *(uint *)(this + 0x50) | 1;
      if (psVar9 == (string *)puVar5) {
        psVar9 = operator_new(8);
        *(undefined **)psVar9 = puVar1;
        *(string **)(this + 0x10) = psVar9;
      }
      uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar9);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      pcVar11 = *(char **)(param_1 + 8);
      if ((pcVar11 < *(char **)(param_1 + 0x10)) && (*pcVar11 == '\x12')) {
        do {
          *(char **)(param_1 + 8) = pcVar11 + 1;
LAB_003ed504:
          iVar2 = *(int *)(this + 0x20);
          iVar10 = *(int *)(this + 0x24);
          if (iVar2 < iVar10) {
            *(int *)(this + 0x20) = iVar2 + 1;
            psVar9 = *(string **)(*(long *)(this + 0x18) + (long)iVar2 * 8);
          }
          else {
            if (iVar10 == *(int *)(this + 0x28)) {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                        ((RepeatedPtrFieldBase *)(this + 0x18),iVar10 + 1);
              iVar10 = *(int *)(this + 0x24);
            }
            *(int *)(this + 0x24) = iVar10 + 1;
            psVar9 = (string *)google::protobuf::internal::StringTypeHandlerBase::New();
            iVar2 = *(int *)(this + 0x20);
            *(int *)(this + 0x20) = iVar2 + 1;
            *(string **)(*(long *)(this + 0x18) + (long)iVar2 * 8) = psVar9;
          }
          uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar9);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          pcVar11 = *(char **)(param_1 + 8);
        } while ((pcVar11 < *(char **)(param_1 + 0x10)) && (*pcVar11 == '\x12'));
        if ((pcVar11 == *(char **)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
          return 1;
        }
      }
    }
    if ((iVar2 == 2) && ((uVar7 & 7) == 2)) goto LAB_003ed504;
LAB_003ed4ec:
    if ((uVar7 & 7) == 4) {
      return 1;
    }
    uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar7);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  } while( true );
}


