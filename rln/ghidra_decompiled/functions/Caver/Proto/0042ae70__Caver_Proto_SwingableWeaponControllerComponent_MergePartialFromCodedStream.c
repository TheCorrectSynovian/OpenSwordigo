/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ae70
 * Function: Caver::Proto::SwingableWeaponControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(SwingableWeaponControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::SwingableWeaponControllerComponent::MergePartialFromCodedStream
          (SwingableWeaponControllerComponent *this,CodedInputStream *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  string *psVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint local_5c;
  long local_58;
  
  puVar9 = PTR__default_weapon_template_name__007e78e0;
  puVar8 = PTR__default_controlling_bone_name__007e7410;
  puVar7 = PTR_DAT_007e5de8;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_DAT_007e5de8 + 0x18;
LAB_0042aebc:
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar2) || (bVar4 = *pbVar2, (char)bVar4 < '\0')) {
      uVar10 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar13 = uVar10 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar10;
      if ((int)uVar10 != 0) goto LAB_0042aefc;
LAB_0042b080:
      uVar11 = 1;
      goto LAB_0042b08c;
    }
    uVar13 = (ulong)bVar4;
    *(uint *)(param_1 + 0x20) = (uint)bVar4;
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    if (bVar4 == 0) goto LAB_0042b080;
LAB_0042aefc:
    iVar6 = (int)(uVar13 >> 3);
    uVar12 = (uint)uVar13;
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        if ((uVar12 & 7) != 2) goto LAB_0042af70;
        uVar12 = *(uint *)(this + 0x20);
        goto LAB_0042afcc;
      }
      if ((iVar6 == 3) && ((uVar12 & 7) == 2)) goto LAB_0042b020;
LAB_0042af70:
      if ((uVar12 & 7) == 4) goto LAB_0042b080;
      uVar10 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar12);
      if ((uVar10 & 1) == 0) {
LAB_0042b088:
        uVar11 = 0;
        goto LAB_0042b08c;
      }
      goto LAB_0042aebc;
    }
    if ((uVar13 & 7) != 0) goto LAB_0042af70;
    pbVar2 = *(byte **)(param_1 + 8);
    pbVar15 = *(byte **)(param_1 + 0x10);
    if ((pbVar2 < pbVar15) && (-1 < (char)*pbVar2)) {
      pbVar16 = pbVar2 + 1;
      local_5c = (uint)*pbVar2;
      *(byte **)(param_1 + 8) = pbVar16;
    }
    else {
      uVar10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_5c);
      if ((uVar10 & 1) == 0) goto LAB_0042b088;
      pbVar16 = *(byte **)(param_1 + 8);
      pbVar15 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_5c;
    uVar12 = *(uint *)(this + 0x20) | 1;
    *(uint *)(this + 0x20) = uVar12;
    if ((pbVar16 < pbVar15) && (*pbVar16 == 0x12)) {
      *(byte **)(param_1 + 8) = pbVar16 + 1;
LAB_0042afcc:
      psVar14 = *(string **)(this + 0x10);
      *(uint *)(this + 0x20) = uVar12 | 2;
      if (psVar14 == (string *)puVar8) {
        psVar14 = operator_new(8);
        *(undefined **)psVar14 = puVar1;
        *(string **)(this + 0x10) = psVar14;
      }
      uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
      if ((uVar10 & 1) == 0) goto LAB_0042b088;
      pcVar3 = *(char **)(param_1 + 8);
      if ((pcVar3 < *(char **)(param_1 + 0x10)) && (*pcVar3 == '\x1a')) {
        *(char **)(param_1 + 8) = pcVar3 + 1;
LAB_0042b020:
        psVar14 = *(string **)(this + 0x18);
        *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
        if (psVar14 == (string *)puVar9) {
          psVar14 = operator_new(8);
          *(undefined **)psVar14 = puVar7 + 0x18;
          *(string **)(this + 0x18) = psVar14;
        }
        uVar10 = google::protobuf::internal::WireFormatLite::ReadString(param_1,psVar14);
        if ((uVar10 & 1) == 0) goto LAB_0042b088;
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar11 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_0042b08c:
          if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar11);
          }
          return;
        }
      }
    }
  } while( true );
}


