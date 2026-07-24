/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8e1c
 * Function: Caver::Proto::MusicTrack::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MusicTrack * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicTrack::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::MusicTrack::MergePartialFromCodedStream(MusicTrack *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  string *psVar12;
  uint local_4c;
  long local_48;
  
  puVar7 = PTR__default_resource_name__007e7358;
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_003d8e5c:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar11 = uVar8 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar8;
      if ((int)uVar8 != 0) goto LAB_003d8e9c;
LAB_003d8f80:
      uVar9 = 1;
      goto LAB_003d8f84;
    }
    uVar11 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_003d8f80;
LAB_003d8e9c:
    iVar6 = (int)(uVar11 >> 3);
    uVar10 = (uint)uVar11;
    if (iVar6 != 1) {
      if ((iVar6 != 2) || ((uVar10 & 7) != 5)) goto LAB_003d8f64;
LAB_003d8f24:
      uVar8 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
      if ((uVar8 & 1) == 0) goto LAB_003d8f78;
      *(uint *)(this + 0x18) = local_4c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar9 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
        goto LAB_003d8f84;
      }
      goto LAB_003d8e5c;
    }
    if ((uVar10 & 7) == 2) {
      psVar12 = *(string **)(this + 0x10);
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
      if (psVar12 == (string *)puVar7) {
        psVar12 = operator_new(8);
        *(undefined **)psVar12 = puVar1;
        *(string **)(this + 0x10) = psVar12;
      }
      uVar8 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar12);
      if ((uVar8 & 1) == 0) goto LAB_003d8f78;
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x15')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
        goto LAB_003d8f24;
      }
    }
    else {
LAB_003d8f64:
      if ((uVar10 & 7) == 4) goto LAB_003d8f80;
      uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
      if ((uVar8 & 1) == 0) {
LAB_003d8f78:
        uVar9 = 0;
LAB_003d8f84:
        if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar9);
        }
        return;
      }
    }
  } while( true );
}


