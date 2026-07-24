/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d36bc
 * Function: Caver::Proto::Font_Glyph::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Font_Glyph * this, Font_Glyph * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::MergeFrom(Caver::Proto::Font_Glyph const&) */

void __thiscall Caver::Proto::Font_Glyph::MergeFrom(Font_Glyph *this,Font_Glyph *param_1)

{
  Font_Glyph *pFVar1;
  undefined4 uVar2;
  Font_Glyph FVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  Rectangle *pRVar7;
  uint uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0xba3);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  FVar3 = param_1[0x28];
  uVar8 = (uint)(byte)FVar3;
  if (FVar3 == (Font_Glyph)0x0) goto LAB_003d382c;
  if (((byte)FVar3 & 1) == 0) {
    if (((byte)FVar3 >> 1 & 1) != 0) {
LAB_003d3760:
      pRVar7 = *(Rectangle **)(this + 0x10);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      if (pRVar7 == (Rectangle *)0x0) {
        pRVar7 = operator_new(0x20);
        puVar5 = PTR_vtable_007e4bb8;
        *(long *)(pRVar7 + 0x10) = 0;
        *(long *)(pRVar7 + 0x18) = 0;
        *(undefined **)pRVar7 = puVar5 + 0x10;
        *(long *)(pRVar7 + 8) = 0;
        *(Rectangle **)(this + 0x10) = pRVar7;
      }
      pFVar1 = *(Font_Glyph **)PTR_default_instance__007e5b90;
      if (*(long *)(param_1 + 0x10) != 0) {
        pFVar1 = param_1;
      }
      Rectangle::MergeFrom(pRVar7,*(Rectangle **)(pFVar1 + 0x10));
      uVar8 = *(uint *)(param_1 + 0x28);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar8 = *(uint *)(param_1 + 0x28);
    if ((uVar8 >> 1 & 1) != 0) goto LAB_003d3760;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    *(undefined4 *)(this + 0x18) = uVar2;
    uVar8 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar8 >> 3 & 1) != 0) {
    pRVar7 = *(Rectangle **)(this + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
    if (pRVar7 == (Rectangle *)0x0) {
      pRVar7 = operator_new(0x20);
      puVar5 = PTR_vtable_007e4bb8;
      *(long *)(pRVar7 + 0x10) = 0;
      *(long *)(pRVar7 + 0x18) = 0;
      *(undefined **)pRVar7 = puVar5 + 0x10;
      *(long *)(pRVar7 + 8) = 0;
      *(Rectangle **)(this + 0x20) = pRVar7;
    }
    pFVar1 = *(Font_Glyph **)PTR_default_instance__007e5b90;
    if (*(long *)(param_1 + 0x20) != 0) {
      pFVar1 = param_1;
    }
    Rectangle::MergeFrom(pRVar7,*(Rectangle **)(pFVar1 + 0x20));
  }
LAB_003d382c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


