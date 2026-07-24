/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042759c
 * Function: Caver::Proto::StaticMonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(StaticMonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::MergePartialFromCodedStream
          (StaticMonsterControllerComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  bool bVar7;
  ulong uVar8;
  void *__dest;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  StaticMonsterControllerComponent *__src;
  int iVar15;
  uint local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  do {
    pbVar14 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar14) || (bVar2 = *pbVar14, (char)bVar2 < '\0')) {
      uVar8 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar11 = uVar8 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar8;
      if ((int)uVar8 != 0) goto LAB_0042761c;
LAB_00427878:
      uVar9 = 1;
      goto LAB_0042787c;
    }
    uVar11 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar14 + 1;
    if (bVar2 == 0) goto LAB_00427878;
LAB_0042761c:
    iVar15 = (int)(uVar11 >> 3);
    uVar10 = (uint)uVar11;
    if (iVar15 == 2) {
      if ((uVar10 & 7) != 2) {
        if ((uVar11 & 7) == 0) {
          pbVar14 = *(byte **)(param_1 + 8);
          if (*(byte **)(param_1 + 0x10) <= pbVar14) goto LAB_00427708;
          goto LAB_0042767c;
        }
        goto LAB_00427698;
      }
      bVar7 = google::protobuf::internal::WireFormatLite::
              ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>
                        (param_1,(RepeatedField *)(this + 0x10));
      if (bVar7) goto LAB_00427824;
LAB_00427870:
      uVar9 = 0;
      goto LAB_0042787c;
    }
    if ((iVar15 == 1) && ((uVar11 & 7) == 0)) {
      pbVar1 = *(byte **)(param_1 + 8);
      pbVar12 = *(byte **)(param_1 + 0x10);
      if ((pbVar1 < pbVar12) && (-1 < (char)*pbVar1)) {
        pbVar14 = pbVar1 + 1;
        local_6c = (uint)*pbVar1;
        *(byte **)(param_1 + 8) = pbVar14;
      }
      else {
        uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
        if ((uVar8 & 1) == 0) goto LAB_00427870;
        pbVar14 = *(byte **)(param_1 + 8);
        pbVar12 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0xc) = local_6c;
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
      if ((pbVar14 < pbVar12) && (*pbVar14 == 0x10)) {
        do {
          pbVar14 = pbVar14 + 1;
          *(byte **)(param_1 + 8) = pbVar14;
          if (pbVar14 < pbVar12) {
LAB_0042767c:
            if ((char)*pbVar14 < '\0') goto LAB_00427708;
            local_6c = (uint)*pbVar14;
            *(byte **)(param_1 + 8) = pbVar14 + 1;
          }
          else {
LAB_00427708:
            uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_6c);
            if ((uVar8 & 1) == 0) goto LAB_00427870;
          }
          uVar10 = local_6c;
          iVar15 = *(int *)(this + 0x18);
          if (iVar15 == *(int *)(this + 0x1c)) {
            uVar4 = iVar15 * 2;
            if ((int)uVar4 < iVar15 + 1) {
              uVar4 = iVar15 + 1;
            }
            __src = *(StaticMonsterControllerComponent **)(this + 0x10);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (long)(int)uVar4;
            *(uint *)(this + 0x1c) = uVar4;
            uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
            if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
              uVar8 = 0xffffffffffffffff;
            }
            __dest = operator_new__(uVar8);
            *(void **)(this + 0x10) = __dest;
            memcpy(__dest,__src,(long)iVar15 << 2);
            if ((__src != this + 0x20) && (__src != (StaticMonsterControllerComponent *)0x0)) {
              operator_delete__(__src);
              iVar15 = *(int *)(this + 0x18);
            }
          }
          lVar13 = *(long *)(this + 0x10);
          *(int *)(this + 0x18) = iVar15 + 1;
          *(uint *)(lVar13 + (long)iVar15 * 4) = uVar10;
          if (0 < *(int *)(this + 0x1c) - *(int *)(this + 0x18)) {
            iVar15 = (*(int *)(this + 0x1c) + 1) - *(int *)(this + 0x18);
            do {
              pbVar14 = *(byte **)(param_1 + 8);
              if ((*(byte **)(param_1 + 0x10) <= pbVar14) || (*pbVar14 != 0x10)) break;
              pbVar1 = pbVar14 + 1;
              *(byte **)(param_1 + 8) = pbVar1;
              if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                local_6c = (uint)*pbVar1;
                *(byte **)(param_1 + 8) = pbVar14 + 2;
              }
              else {
                uVar8 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                  (param_1,&local_6c);
                if ((uVar8 & 1) == 0) goto LAB_00427870;
                lVar13 = *(long *)(this + 0x10);
              }
              iVar3 = *(int *)(this + 0x18);
              iVar15 = iVar15 + -1;
              *(int *)(this + 0x18) = iVar3 + 1;
              *(uint *)(lVar13 + (long)iVar3 * 4) = local_6c;
            } while (1 < iVar15);
          }
LAB_00427824:
          pbVar14 = *(byte **)(param_1 + 8);
          pbVar12 = *(byte **)(param_1 + 0x10);
        } while ((pbVar14 < pbVar12) && (*pbVar14 == 0x10));
        if ((pbVar14 == pbVar12) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar9 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_0042787c:
          if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar9);
          }
          return;
        }
      }
    }
    else {
LAB_00427698:
      if ((uVar10 & 7) == 4) goto LAB_00427878;
      uVar8 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar10);
      if ((uVar8 & 1) == 0) goto LAB_00427870;
    }
  } while( true );
}


