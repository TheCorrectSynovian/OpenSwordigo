/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423b54
 * Function: Caver::Proto::MonsterControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MonsterControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MonsterControllerComponent::MergePartialFromCodedStream
          (MonsterControllerComponent *this,CodedInputStream *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
LAB_00423b84:
  pbVar7 = *(byte **)(param_1 + 8);
  if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (bVar1 = *pbVar7, -1 < (char)bVar1)) {
    uVar5 = (ulong)bVar1;
    *(uint *)(param_1 + 0x20) = (uint)bVar1;
    *(byte **)(param_1 + 8) = pbVar7 + 1;
    if (bVar1 == 0) goto LAB_00423dbc;
LAB_00423bc4:
    uVar3 = (uint)uVar5;
    switch((int)(uVar5 >> 3)) {
    case 1:
      if ((uVar3 & 7) != 5) break;
      uVar5 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_3c);
      if ((uVar5 & 1) == 0) goto LAB_00423db4;
      *(uint *)(this + 0x18) = local_3c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 8;
      pbVar7 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
      if ((pbVar7 < pbVar6) && (*pbVar7 == 0x10)) {
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_1 + 8) = pbVar7;
        if (pbVar7 < pbVar6) goto LAB_00423c38;
        goto LAB_00423cc8;
      }
      goto LAB_00423b84;
    case 2:
      if ((uVar5 & 7) != 0) break;
      pbVar7 = *(byte **)(param_1 + 8);
      pbVar6 = *(byte **)(param_1 + 0x10);
      if (pbVar7 < pbVar6) {
LAB_00423c38:
        if ((char)*pbVar7 < '\0') goto LAB_00423cc8;
        pbVar8 = pbVar7 + 1;
        local_3c = (uint)*pbVar7;
        *(byte **)(param_1 + 8) = pbVar8;
      }
      else {
LAB_00423cc8:
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) == 0) goto LAB_00423db4;
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
      }
      *(uint *)(this + 0x10) = local_3c;
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 2;
      if ((pbVar8 < pbVar6) && (*pbVar8 == 0x18)) {
        pbVar8 = pbVar8 + 1;
        *(byte **)(param_1 + 8) = pbVar8;
        if (pbVar8 < pbVar6) {
LAB_00423c68:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00423ab4 with catch @ 00423c6c
                        */
          if ((char)*pbVar8 < '\0') goto LAB_00423d14;
          pbVar7 = pbVar8 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00423a6c with catch @ 00423c78
                        */
          local_3c = (uint)*pbVar8;
          *(byte **)(param_1 + 8) = pbVar7;
        }
        else {
LAB_00423d14:
          uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar5 & 1) == 0) goto LAB_00423db4;
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar6 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0xc) = local_3c;
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 1;
        if ((pbVar7 < pbVar6) && (*pbVar7 == 0x20)) {
          pbVar7 = pbVar7 + 1;
          *(byte **)(param_1 + 8) = pbVar7;
          if (pbVar7 < pbVar6) {
LAB_00423c98:
                    /* try { // try from 00423c98 to 00523c9f has its CatchHandler @ 00423ca8 */
            if ((char)*pbVar7 < '\0') goto LAB_00423d60;
                    /* try { // try from 00423ca0 to 00523cab has its CatchHandler @ 004239b4 */
            pbVar8 = pbVar7 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00423c98 with catch @ 00423ca8
                        */
            local_3c = (uint)*pbVar7;
            *(byte **)(param_1 + 8) = pbVar8;
          }
          else {
LAB_00423d60:
            uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar5 & 1) == 0) goto LAB_00423db4;
            pbVar8 = *(byte **)(param_1 + 8);
            pbVar6 = *(byte **)(param_1 + 0x10);
          }
          *(uint *)(this + 0x14) = local_3c;
          *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) | 4;
          if ((pbVar8 == pbVar6) && (*(int *)(param_1 + 0x2c) != 0)) {
            uVar4 = 1;
            *(undefined4 *)(param_1 + 0x20) = 0;
            param_1[0x24] = (CodedInputStream)0x1;
LAB_00423dc0:
            if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar4);
            }
            return;
          }
        }
      }
      goto LAB_00423b84;
    case 3:
      if ((uVar5 & 7) == 0) {
        pbVar8 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar8 < pbVar6) goto LAB_00423c68;
        goto LAB_00423d14;
      }
      break;
    case 4:
      if ((uVar5 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar6 = *(byte **)(param_1 + 0x10);
        if (pbVar7 < pbVar6) goto LAB_00423c98;
        goto LAB_00423d60;
      }
    }
    if ((uVar3 & 7) != 4) {
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar3);
      if ((uVar5 & 1) == 0) {
LAB_00423db4:
        uVar4 = 0;
        goto LAB_00423dc0;
      }
      goto LAB_00423b84;
    }
  }
  else {
    uVar3 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar5 = (ulong)uVar3;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0) goto LAB_00423bc4;
  }
LAB_00423dbc:
  uVar4 = 1;
  goto LAB_00423dc0;
}


