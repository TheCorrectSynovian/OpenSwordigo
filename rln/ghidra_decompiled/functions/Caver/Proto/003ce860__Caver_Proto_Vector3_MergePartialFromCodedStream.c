/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce860
 * Function: Caver::Proto::Vector3::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(Vector3 * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */

void __thiscall
Caver::Proto::Vector3::MergePartialFromCodedStream(Vector3 *this,CodedInputStream *param_1)

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
LAB_003ce888:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
      uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar9 = uVar6 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar6;
      if ((int)uVar6 != 0) goto LAB_003ce8c8;
LAB_003ce9f4:
      uVar7 = 1;
      goto LAB_003ce9f8;
    }
    uVar9 = (ulong)bVar3;
    *(uint *)(param_1 + 0x20) = (uint)bVar3;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar3 == 0) goto LAB_003ce9f4;
LAB_003ce8c8:
    iVar5 = (int)(uVar9 >> 3);
    uVar8 = (uint)uVar9;
    if (iVar5 == 1) {
      if ((uVar8 & 7) == 5) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_003ce9ec;
        *(uint *)(this + 0xc) = local_3c;
        *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
        pcVar2 = *(char **)(param_1 + 8);
        if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x15')) {
          *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003ce954:
          uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                            (param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_003ce9ec;
          *(uint *)(this + 0x10) = local_3c;
          *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
          pcVar2 = *(char **)(param_1 + 8);
          if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1d')) {
            *(char **)(param_1 + 8) = pcVar2 + 1;
LAB_003ce998:
            uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_3c);
            if ((uVar6 & 1) == 0) goto LAB_003ce9ec;
            *(uint *)(this + 0x14) = local_3c;
            *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 4;
            if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
               (*(int *)(param_1 + 0x2c) != 0)) {
              uVar7 = 1;
              *(undefined4 *)(param_1 + 0x20) = 0;
              param_1[0x24] = (CodedInputStream)0x1;
              goto LAB_003ce9f8;
            }
          }
        }
        goto LAB_003ce888;
      }
    }
    else if (iVar5 == 2) {
      if ((uVar8 & 7) == 5) goto LAB_003ce954;
    }
    else if ((iVar5 == 3) && ((uVar8 & 7) == 5)) goto LAB_003ce998;
    if ((uVar8 & 7) == 4) goto LAB_003ce9f4;
    uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
    if ((uVar6 & 1) == 0) {
LAB_003ce9ec:
      uVar7 = 0;
LAB_003ce9f8:
      if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar7);
      }
      return;
    }
  } while( true );
}


