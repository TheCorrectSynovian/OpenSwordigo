/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433704
 * Function: Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(MagicExplosionComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::MagicExplosionComponent::MergePartialFromCodedStream
          (MagicExplosionComponent *this,CodedInputStream *param_1)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  FloatColor *this_00;
  uint local_4c;
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00433620 with catch @ 00433718
                        */
                    /* try { // try from 0043371c to 00533723 has its CatchHandler @ 0043372c */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00433724 to 0053372f has its CatchHandler @ 004335dc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043371c with catch @ 0043372c
                        */
LAB_00433738:
  pbVar9 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00433790 with catch @ 00433744 */
  if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (bVar2 = *pbVar9, -1 < (char)bVar2)) {
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_00433a34;
LAB_00433778:
                    /* try { // try from 00433780 to 0053378f has its CatchHandler @ 00433810 */
    uVar4 = (uint)uVar7;
                    /* try { // try from 00433790 to 00533883 has its CatchHandler @ 00433744 */
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) != 0) break;
      pbVar10 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
      if ((pbVar8 <= pbVar10) || ((char)*pbVar10 < '\0')) {
        uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar7 & 1) != 0) {
          pbVar9 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
          goto LAB_0043385c;
        }
        goto LAB_00433a3c;
      }
      pbVar9 = pbVar10 + 1;
      local_4c = (uint)*pbVar10;
      *(byte **)(param_1 + 8) = pbVar9;
LAB_0043385c:
      *(uint *)(this + 0xc) = local_4c;
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
      if ((pbVar9 < pbVar8) && (*pbVar9 == 0x10)) {
                    /* catch() { ... } // from try @ 00433768 with catch @ 00433880 */
        pbVar9 = pbVar9 + 1;
                    /* try { // try from 00433884 to 005338f7 has its CatchHandler @ 00433884
                       catch(type#1 @ 00000000) { ... } // from try @ 00433884 with catch @ 00433884
                       catch(type#1 @ 00000000) { ... } // from try @ 00433908 with catch @ 00433884
                       catch(type#1 @ 00000000) { ... } // from try @ 004339a4 with catch @ 00433884
                        */
        *(byte **)(param_1 + 8) = pbVar9;
        if (pbVar9 < pbVar8) goto LAB_0043380c;
        goto LAB_00433890;
      }
      goto LAB_00433738;
    case 2:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) {
LAB_0043380c:
                    /* catch() { ... } // from try @ 00433780 with catch @ 00433810 */
          if ((char)*pbVar9 < '\0') goto LAB_00433890;
          pbVar10 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
LAB_00433890:
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00433a3c;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        *(uint *)(this + 0x20) = local_4c;
        uVar4 = *(uint *)(this + 0x24) | 0x10;
        *(uint *)(this + 0x24) = uVar4;
        if ((pbVar8 <= pbVar10) || (*pbVar10 != 0x1a)) goto LAB_00433738;
        *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_004338d4:
        this_00 = *(FloatColor **)(this + 0x10);
        *(uint *)(this + 0x24) = uVar4 | 2;
        if (this_00 == (FloatColor *)0x0) {
          this_00 = operator_new(0x20);
          FloatColor::FloatColor(this_00);
          *(FloatColor **)(this + 0x10) = this_00;
        }
                    /* try { // try from 004338f8 to 00533907 has its CatchHandler @ 00433958 */
        pbVar9 = *(byte **)(param_1 + 8);
                    /* try { // try from 00433908 to 0053397b has its CatchHandler @ 00433884 */
        if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar9 + 1;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_00433a3c;
        }
        iVar5 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar5 + 1;
        if (iVar5 < *(int *)(param_1 + 0x3c)) {
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004338f8 with catch @ 00433958
                        */
          uVar7 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_00433a3c;
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
                    /* try { // try from 0043397c to 005339a3 has its CatchHandler @ 004339ac */
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '%')) {
                    /* try { // try from 004339a4 to 005339af has its CatchHandler @ 00433884 */
            *(char **)(param_1 + 8) = pcVar1 + 1;
            goto LAB_004339a8;
          }
          goto LAB_00433738;
        }
        goto LAB_00433a3c;
      }
      break;
    case 3:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x24);
        goto LAB_004338d4;
      }
      break;
    case 4:
      if ((uVar4 & 7) == 5) {
LAB_004339a8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043397c with catch @ 004339ac
                        */
        uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar7 & 1) == 0) goto LAB_00433a3c;
        *(uint *)(this + 0x18) = local_4c;
        *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
        pcVar1 = *(char **)(param_1 + 8);
        if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
          *(char **)(param_1 + 8) = pcVar1 + 1;
          goto LAB_004339ec;
        }
        goto LAB_00433738;
      }
      break;
    case 5:
      if ((uVar4 & 7) != 5) break;
LAB_004339ec:
      uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
      if ((uVar7 & 1) == 0) goto LAB_00433a3c;
                    /* catch() { ... } // from try @ 00433b84 with catch @ 004339fc */
      *(uint *)(this + 0x1c) = local_4c;
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00433a40:
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6);
        }
        return;
      }
      goto LAB_00433738;
    }
    if ((uVar4 & 7) != 4) {
      uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
      if ((uVar7 & 1) != 0) goto LAB_00433738;
LAB_00433a3c:
      uVar6 = 0;
      goto LAB_00433a40;
    }
  }
  else {
                    /* try { // try from 00433768 to 0053377b has its CatchHandler @ 00433880 */
    uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar7 = (ulong)uVar4;
    *(uint *)(param_1 + 0x20) = uVar4;
    if (uVar4 != 0) goto LAB_00433778;
  }
LAB_00433a34:
  uVar6 = 1;
  goto LAB_00433a40;
}


