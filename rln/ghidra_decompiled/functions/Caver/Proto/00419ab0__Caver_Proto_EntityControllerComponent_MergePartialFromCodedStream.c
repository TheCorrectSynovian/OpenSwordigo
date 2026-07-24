/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419ab0
 * Function: Caver::Proto::EntityControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(EntityControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::EntityControllerComponent::MergePartialFromCodedStream
          (EntityControllerComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 00419a90 with catch @ 00419abc */
                    /* catch() { ... } // from try @ 00419988 with catch @ 00419ac0 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
LAB_00419ae0:
  pbVar7 = *(byte **)(param_1 + 8);
                    /* try { // try from 00419ae4 to 00519b0b has its CatchHandler @ 00419b64 */
  if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar7, -1 < (char)bVar2)) {
    uVar6 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar7 + 1;
    if (bVar2 == 0) goto LAB_00419ec4;
LAB_00419b20:
                    /* try { // try from 00419b2c to 00519b53 has its CatchHandler @ 00419b58 */
    uVar4 = (uint)uVar6;
    switch((int)(uVar6 >> 3)) {
    case 1:
      if ((uVar6 & 7) != 0) break;
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
      if ((pbVar8 <= pbVar9) || ((char)*pbVar9 < '\0')) {
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar6 & 1) != 0) {
          pbVar7 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          goto LAB_00419c90;
        }
        goto LAB_00419ecc;
      }
                    /* catch() { ... } // from try @ 00419b2c with catch @ 00419b58 */
      pbVar7 = pbVar9 + 1;
      local_3c = (uint)*pbVar9;
                    /* catch() { ... } // from try @ 00419ae4 with catch @ 00419b64 */
      *(byte **)(param_1 + 8) = pbVar7;
LAB_00419c90:
      *(uint *)(this + 0xc) = local_3c;
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
      if ((pbVar7 < pbVar8) && (*pbVar7 == 0x10)) {
        pbVar7 = pbVar7 + 1;
        *(byte **)(param_1 + 8) = pbVar7;
        if (pbVar7 < pbVar8) goto LAB_00419c20;
        goto LAB_00419cc4;
      }
      goto LAB_00419ae0;
    case 2:
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00419c18 to 00519c4f has its CatchHandler @ 00419c18
                       catch(type#1 @ 00000000) { ... } // from try @ 00419c18 with catch @ 00419c18
                       catch(type#1 @ 00000000) { ... } // from try @ 00419cf8 with catch @ 00419c18
                       catch(type#1 @ 00000000) { ... } // from try @ 00419d2c with catch @ 00419c18
                        */
        if (pbVar7 < pbVar8) {
LAB_00419c20:
          if ((char)*pbVar7 < '\0') goto LAB_00419cc4;
          pbVar9 = pbVar7 + 1;
          local_3c = (uint)*pbVar7;
          *(byte **)(param_1 + 8) = pbVar9;
        }
        else {
LAB_00419cc4:
          uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
          if ((uVar6 & 1) == 0) goto LAB_00419ecc;
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x10) = local_3c;
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
                    /* try { // try from 00419cf8 to 00519d23 has its CatchHandler @ 00419c18 */
        if ((pbVar9 < pbVar8) && (*pbVar9 == 0x18)) {
          pbVar9 = pbVar9 + 1;
          *(byte **)(param_1 + 8) = pbVar9;
          if (pbVar9 < pbVar8) {
LAB_00419b90:
            if ((char)*pbVar9 < '\0') goto LAB_00419d10;
            pbVar7 = pbVar9 + 1;
            local_3c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar7;
          }
          else {
LAB_00419d10:
            uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
            if ((uVar6 & 1) == 0) goto LAB_00419ecc;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00419c50 with catch @ 00419d20
                        */
                    /* try { // try from 00419d24 to 00519d2b has its CatchHandler @ 00419d34 */
            pbVar7 = *(byte **)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
          }
                    /* try { // try from 00419d2c to 00519d37 has its CatchHandler @ 00419c18 */
          *(uint *)(this + 0x14) = local_3c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00419d24 with catch @ 00419d34
                        */
                    /* catch() { ... } // from try @ 00419e30 with catch @ 00419d38 */
          *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
          if ((pbVar7 < pbVar8) && (*pbVar7 == 0x20)) {
            pbVar7 = pbVar7 + 1;
            *(byte **)(param_1 + 8) = pbVar7;
            if (pbVar7 < pbVar8) {
LAB_00419bc0:
              if ((char)*pbVar7 < '\0') goto LAB_00419d5c;
              pbVar9 = pbVar7 + 1;
              local_3c = (uint)*pbVar7;
              *(byte **)(param_1 + 8) = pbVar9;
            }
            else {
LAB_00419d5c:
              uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                (param_1,&local_3c);
              if ((uVar6 & 1) == 0) goto LAB_00419ecc;
              pbVar9 = *(byte **)(param_1 + 8);
              pbVar8 = *(byte **)(param_1 + 0x10);
            }
                    /* try { // try from 00419d74 to 00519d87 has its CatchHandler @ 00419e70 */
            *(uint *)(this + 0x18) = local_3c;
            *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
                    /* try { // try from 00419d8c to 00519d9f has its CatchHandler @ 00419e6c */
            if ((pbVar9 < pbVar8) && (*pbVar9 == 0x2d)) {
              *(byte **)(param_1 + 8) = pbVar9 + 1;
LAB_00419da0:
                    /* try { // try from 00419da4 to 00519db7 has its CatchHandler @ 00419e68 */
              uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_3c);
              if ((uVar6 & 1) == 0) goto LAB_00419ecc;
              *(uint *)(this + 0x1c) = local_3c;
                    /* try { // try from 00419dbc to 00519dcf has its CatchHandler @ 00419e64 */
              *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
              pcVar1 = *(char **)(param_1 + 8);
                    /* try { // try from 00419dd4 to 00519de7 has its CatchHandler @ 00419e60 */
              if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '5')) {
                *(char **)(param_1 + 8) = pcVar1 + 1;
                goto LAB_00419de4;
              }
            }
          }
        }
        goto LAB_00419ae0;
      }
      break;
    case 3:
      if ((uVar6 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00419b88 to 00519baf has its CatchHandler @ 00419bb8 */
        if (pbVar9 < pbVar8) goto LAB_00419b90;
        goto LAB_00419d10;
      }
      break;
    case 4:
                    /* try { // try from 00419bb0 to 00519c17 has its CatchHandler @ 00419874 */
      if ((uVar6 & 7) == 0) {
        pbVar7 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00419b88 with catch @ 00419bb8 */
                    /* catch() { ... } // from try @ 00419910 with catch @ 00419bbc
                       catch() { ... } // from try @ 004199fc with catch @ 00419bbc */
        if (pbVar7 < pbVar8) goto LAB_00419bc0;
        goto LAB_00419d5c;
      }
      break;
    case 5:
      if ((uVar4 & 7) == 5) goto LAB_00419da0;
      break;
    case 6:
      if ((uVar4 & 7) == 5) {
LAB_00419de4:
                    /* try { // try from 00419dec to 00519dff has its CatchHandler @ 00419e5c */
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_00419ecc;
        *(uint *)(this + 0x20) = local_3c;
                    /* try { // try from 00419e04 to 00519e17 has its CatchHandler @ 00419e58 */
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x20;
        pcVar1 = *(char **)(param_1 + 8);
                    /* try { // try from 00419e1c to 00519e2f has its CatchHandler @ 00419e54 */
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '=')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_00419e28;
        }
        goto LAB_00419ae0;
      }
      break;
    case 7:
                    /* try { // try from 00419c50 to 00519cf7 has its CatchHandler @ 00419d20 */
      if ((uVar4 & 7) == 5) {
LAB_00419e28:
                    /* try { // try from 00419e30 to 00519e73 has its CatchHandler @ 00419d38 */
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_00419ecc;
        *(uint *)(this + 0x24) = local_3c;
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x40;
        pbVar7 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00419e1c with catch @ 00419e54 */
                    /* catch() { ... } // from try @ 00419e04 with catch @ 00419e58 */
                    /* catch() { ... } // from try @ 00419dec with catch @ 00419e5c */
                    /* catch() { ... } // from try @ 00419dd4 with catch @ 00419e60 */
        if ((pbVar7 < *(byte **)(param_1 + 0x10)) && (*pbVar7 == 0x40)) {
                    /* catch() { ... } // from try @ 00419dbc with catch @ 00419e64 */
          pbVar7 = pbVar7 + 1;
                    /* catch() { ... } // from try @ 00419da4 with catch @ 00419e68 */
          *(byte **)(param_1 + 8) = pbVar7;
                    /* catch() { ... } // from try @ 00419d8c with catch @ 00419e6c */
                    /* catch() { ... } // from try @ 00419d74 with catch @ 00419e70 */
          if (pbVar7 < *(byte **)(param_1 + 0x10)) goto LAB_00419bf0;
          goto LAB_00419e74;
        }
        goto LAB_00419ae0;
      }
      break;
    case 8:
      if ((uVar6 & 7) != 0) break;
      pbVar7 = *(byte **)(param_1 + 8);
      if (pbVar7 < *(byte **)(param_1 + 0x10)) {
LAB_00419bf0:
        if ((char)*pbVar7 < '\0') goto LAB_00419e74;
        local_3c = (uint)*pbVar7;
        *(byte **)(param_1 + 8) = pbVar7 + 1;
      }
      else {
LAB_00419e74:
                    /* try { // try from 00419e7c to 00519f33 has its CatchHandler @ 00419e7c
                       catch() { ... } // from try @ 00419e7c with catch @ 00419e7c
                       catch() { ... } // from try @ 00419f44 with catch @ 00419e7c */
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar6 & 1) == 0) goto LAB_00419ecc;
      }
      if (local_3c - 1 < 4) {
        *(uint *)(this + 0x28) = local_3c;
        *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x80;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar5 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00419ed0:
        if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar5);
        }
        return;
      }
      goto LAB_00419ae0;
    }
    if ((uVar4 & 7) != 4) {
      uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar6 & 1) == 0) {
LAB_00419ecc:
        uVar5 = 0;
        goto LAB_00419ed0;
      }
      goto LAB_00419ae0;
    }
  }
  else {
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar6 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_00419b20;
  }
LAB_00419ec4:
  uVar5 = 1;
  goto LAB_00419ed0;
}


