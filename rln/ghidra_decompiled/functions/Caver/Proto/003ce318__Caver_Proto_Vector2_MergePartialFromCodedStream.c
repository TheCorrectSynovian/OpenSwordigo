/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce318
 * Function: Caver::Proto::Vector2::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Vector2 * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Vector2::MergePartialFromCodedStream(Vector2 *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
LAB_003ce340:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar9 = uVar6 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar6;
      if ((int)uVar6 != 0) goto LAB_003ce380;
LAB_003ce450:
      uVar7 = 1;
      goto LAB_003ce454;
    }
    uVar9 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar3 == 0) goto LAB_003ce450;
LAB_003ce380:
    iVar5 = (int)(uVar9 >> 3);
    uVar8 = (uint)uVar9;
    if (iVar5 != 1) {
      if ((iVar5 != 2) || ((uVar8 & 7) != 5)) goto LAB_003ce434;
LAB_003ce3f4:
      uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_3c);
      if ((uVar6 & 1) == 0) goto LAB_003ce448;
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar7 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
        goto LAB_003ce454;
      }
      goto LAB_003ce340;
    }
    if ((uVar8 & 7) == 5) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_3c);
      if ((uVar6 & 1) == 0) goto LAB_003ce448;
      *(uint *)(this + 0xc) = local_3c;
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
      pcVar2 = *(char **)(param_1 + 8);
      if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x15')) {
        *(char **)(param_1 + 8) = pcVar2 + 1;
        goto LAB_003ce3f4;
      }
    }
    else {
LAB_003ce434:
      if ((uVar8 & 7) == 4) goto LAB_003ce450;
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
      if ((uVar6 & 1) == 0) {
LAB_003ce448:
        uVar7 = 0;
LAB_003ce454:
        if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar7);
        }
        return;
      }
    }
  } while( true );
}


