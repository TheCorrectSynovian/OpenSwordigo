/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8ffc
 * Function: Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(PlayerProfile_Counter * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream
          (PlayerProfile_Counter *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  string *psVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_4c;
  long local_48;
  
  puVar5 = PTR__default_name__007e6560;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003e903c:
  do {
    pbVar12 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar12) || (bVar2 = *pbVar12, (char)bVar2 < '\0')) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar9 = uVar6 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar6;
      if ((int)uVar6 != 0) goto LAB_003e907c;
LAB_003e9188:
      uVar7 = 1;
      goto LAB_003e918c;
    }
    uVar9 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar12 + 1;
    if (bVar2 == 0) goto LAB_003e9188;
LAB_003e907c:
    iVar4 = (int)(uVar9 >> 3);
    uVar8 = (uint)uVar9;
    if (iVar4 != 1) {
      if ((iVar4 == 2) && ((uVar9 & 7) == 0)) {
        pbVar12 = *(byte **)(param_1 + 8);
        pbVar11 = *(byte **)(param_1 + 0x10);
        if (pbVar12 < pbVar11) {
LAB_003e90a4:
          if ((char)*pbVar12 < '\0') goto LAB_003e912c;
          pbVar13 = pbVar12 + 1;
          local_4c = (uint)*pbVar12;
          *(byte **)(param_1 + 8) = pbVar13;
        }
        else {
LAB_003e912c:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar6 & 1) == 0) goto LAB_003e9180;
          pbVar13 = *(byte **)(param_1 + 8);
          pbVar11 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x18) = local_4c;
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
        if ((pbVar13 == pbVar11) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_003e918c:
          if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar7);
          }
          return;
        }
      }
      else {
LAB_003e916c:
        if ((uVar8 & 7) == 4) goto LAB_003e9188;
        uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
        if ((uVar6 & 1) == 0) goto LAB_003e9180;
      }
      goto LAB_003e903c;
    }
    if ((uVar8 & 7) != 2) goto LAB_003e916c;
    psVar10 = *(string **)(this + 0x10);
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
    if (psVar10 == (string *)puVar5) {
      psVar10 = operator_new(8);
      *(undefined **)psVar10 = puVar1;
      *(string **)(this + 0x10) = psVar10;
    }
    uVar6 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar10);
    if ((uVar6 & 1) == 0) {
LAB_003e9180:
      uVar7 = 0;
      goto LAB_003e918c;
    }
    pbVar12 = *(byte **)(param_1 + 8);
    pbVar11 = *(byte **)(param_1 + 0x10);
    if ((pbVar12 < pbVar11) && (*pbVar12 == 0x10)) {
      pbVar12 = pbVar12 + 1;
      *(byte **)(param_1 + 8) = pbVar12;
      if (pbVar12 < pbVar11) goto LAB_003e90a4;
      goto LAB_003e912c;
    }
  } while( true );
}


