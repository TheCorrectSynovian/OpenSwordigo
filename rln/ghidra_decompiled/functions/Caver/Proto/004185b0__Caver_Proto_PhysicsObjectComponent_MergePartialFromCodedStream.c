/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004185b0
 * Function: Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(PhysicsObjectComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::PhysicsObjectComponent::MergePartialFromCodedStream
          (PhysicsObjectComponent *this,CodedInputStream *param_1)

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
  Vector2 *this_00;
  uint local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
LAB_004185e4:
  do {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar9) || (bVar2 = *pbVar9, (char)bVar2 < '\0')) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = (ulong)uVar4;
                    /* try { // try from 0041861c to 00518627 has its CatchHandler @ 00419334 */
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 0) goto LAB_00418624;
LAB_004189ec:
      uVar6 = 1;
      goto LAB_004189f8;
    }
                    /* try { // try from 004185f8 to 0051860b has its CatchHandler @ 0041936c */
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar9 + 1;
    if (bVar2 == 0) goto LAB_004189ec;
LAB_00418624:
    uVar4 = (uint)uVar7;
    switch((int)(uVar7 >> 3)) {
    case 1:
      if ((uVar7 & 7) == 0) {
                    /* try { // try from 00418648 to 00518683 has its CatchHandler @ 004192d8 */
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if ((pbVar9 < pbVar8) && (-1 < (char)*pbVar9)) {
          pbVar10 = pbVar9 + 1;
          local_4c = (uint)*pbVar9;
          *(byte **)(param_1 + 8) = pbVar10;
        }
        else {
          uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
          if ((uVar7 & 1) == 0) goto LAB_004189f4;
          pbVar10 = *(byte **)(param_1 + 8);
          pbVar8 = *(byte **)(param_1 + 0x10);
        }
        this[0xc] = (PhysicsObjectComponent)(local_4c != 0);
        uVar4 = *(uint *)(this + 0x30) | 1;
                    /* try { // try from 00418750 to 00518763 has its CatchHandler @ 0041923c */
        *(uint *)(this + 0x30) = uVar4;
        if ((pbVar10 < pbVar8) && (*pbVar10 == 0x12)) {
          *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_0041876c:
          this_00 = *(Vector2 **)(this + 0x10);
                    /* try { // try from 00418774 to 0051877f has its CatchHandler @ 00419204 */
          *(uint *)(this + 0x30) = uVar4 | 2;
          if (this_00 == (Vector2 *)0x0) {
            this_00 = operator_new(0x18);
            Vector2::Vector2(this_00);
            *(Vector2 **)(this + 0x10) = this_00;
          }
          pbVar9 = *(byte **)(param_1 + 8);
          if ((pbVar9 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar9)) {
                    /* try { // try from 004187a8 to 005187e3 has its CatchHandler @ 004191a8 */
            local_4c = (uint)*pbVar9;
            *(byte **)(param_1 + 8) = pbVar9 + 1;
          }
          else {
            uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_004189f4;
          }
          iVar5 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar5 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_004189f4;
          iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
          uVar7 = Vector2::MergePartialFromCodedStream(this_00,param_1);
          if (((uVar7 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_004189f4;
                    /* try { // try from 00418804 to 00518817 has its CatchHandler @ 004191a4 */
          google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
          if (0 < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
          }
          pcVar1 = *(char **)(param_1 + 8);
                    /* try { // try from 00418828 to 00518833 has its CatchHandler @ 0041916c */
          if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '\x1d')) {
            *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00418840:
            uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                              (param_1,&local_4c);
            if ((uVar7 & 1) == 0) goto LAB_004189f4;
                    /* try { // try from 00418854 to 0051888f has its CatchHandler @ 00419110 */
            *(uint *)(this + 0x18) = local_4c;
            *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
            pcVar1 = *(char **)(param_1 + 8);
            if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '%')) {
              *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_00418884:
              uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                (param_1,&local_4c);
              if ((uVar7 & 1) == 0) goto LAB_004189f4;
              *(uint *)(this + 0x1c) = local_4c;
              *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
              pcVar1 = *(char **)(param_1 + 8);
                    /* try { // try from 004188b0 to 005188c3 has its CatchHandler @ 0041910c */
              if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '-')) {
                *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_004188c8:
                uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                  (param_1,&local_4c);
                    /* try { // try from 004188d4 to 005188df has its CatchHandler @ 004190d4 */
                if ((uVar7 & 1) == 0) goto LAB_004189f4;
                *(uint *)(this + 0x20) = local_4c;
                *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x10;
                pcVar1 = *(char **)(param_1 + 8);
                    /* try { // try from 00418900 to 0051893b has its CatchHandler @ 00419078 */
                if ((pcVar1 < *(char **)(param_1 + 0x10)) && (*pcVar1 == '5')) {
                  *(char **)(param_1 + 8) = pcVar1 + 1;
LAB_0041890c:
                  uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                    (param_1,&local_4c);
                  if ((uVar7 & 1) == 0) goto LAB_004189f4;
                  *(uint *)(this + 0x24) = local_4c;
                  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
                  pbVar9 = *(byte **)(param_1 + 8);
                  pbVar8 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 0041893c to 0051986b has its CatchHandler @ 00418038 */
                  if ((pbVar9 < pbVar8) && (*pbVar9 == 0x38)) {
                    pbVar9 = pbVar9 + 1;
                    *(byte **)(param_1 + 8) = pbVar9;
                    if (pbVar9 < pbVar8) {
LAB_004186e8:
                      if ((char)*pbVar9 < '\0') goto LAB_00418958;
                    /* try { // try from 004186f4 to 0051872f has its CatchHandler @ 00419240 */
                      pbVar10 = pbVar9 + 1;
                      local_4c = (uint)*pbVar9;
                      *(byte **)(param_1 + 8) = pbVar10;
                    }
                    else {
LAB_00418958:
                      uVar7 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback
                                        (param_1,&local_4c);
                      if ((uVar7 & 1) == 0) goto LAB_004189f4;
                      pbVar10 = *(byte **)(param_1 + 8);
                      pbVar8 = *(byte **)(param_1 + 0x10);
                    }
                    this[0x28] = (PhysicsObjectComponent)(local_4c != 0);
                    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x40;
                    if ((pbVar10 < pbVar8) && (*pbVar10 == 0x45)) {
                      *(byte **)(param_1 + 8) = pbVar10 + 1;
LAB_004189a4:
                      uVar7 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                                        (param_1,&local_4c);
                      if ((uVar7 & 1) == 0) goto LAB_004189f4;
                      *(uint *)(this + 0x2c) = local_4c;
                      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x80;
                      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) &&
                         (*(int *)(param_1 + 0x2c) != 0)) {
                        uVar6 = 1;
                        *(undefined4 *)(param_1 + 0x20) = 0;
                        param_1[0x24] = (CodedInputStream)0x1;
                        goto LAB_004189f8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_004185e4;
      }
      break;
    case 2:
      if ((uVar4 & 7) == 2) {
        uVar4 = *(uint *)(this + 0x30);
        goto LAB_0041876c;
      }
      break;
    case 3:
      if ((uVar4 & 7) == 5) goto LAB_00418840;
      break;
    case 4:
      if ((uVar4 & 7) == 5) goto LAB_00418884;
      break;
    case 5:
      if ((uVar4 & 7) == 5) goto LAB_004188c8;
      break;
    case 6:
                    /* try { // try from 004186c8 to 005186d3 has its CatchHandler @ 0041929c */
      if ((uVar4 & 7) == 5) goto LAB_0041890c;
      break;
    case 7:
      if ((uVar7 & 7) == 0) {
        pbVar9 = *(byte **)(param_1 + 8);
        pbVar8 = *(byte **)(param_1 + 0x10);
        if (pbVar9 < pbVar8) goto LAB_004186e8;
        goto LAB_00418958;
      }
      break;
    case 8:
                    /* try { // try from 004186a4 to 005186b7 has its CatchHandler @ 004192d4 */
      if ((uVar4 & 7) == 5) goto LAB_004189a4;
    }
    if ((uVar4 & 7) == 4) goto LAB_004189ec;
    uVar7 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
    if ((uVar7 & 1) == 0) {
LAB_004189f4:
      uVar6 = 0;
LAB_004189f8:
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
  } while( true );
}


