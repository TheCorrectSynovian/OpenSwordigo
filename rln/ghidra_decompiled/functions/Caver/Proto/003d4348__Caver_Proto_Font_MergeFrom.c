/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d4348
 * Function: Caver::Proto::Font::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Font * this, Font * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::Font::MergeFrom(Caver::Proto::Font const&) */

void __thiscall Caver::Proto::Font::MergeFrom(Font *this,Font *param_1)

{
  Font *pFVar1;
  undefined4 uVar2;
  Font FVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  Texture *this_00;
  long *plVar8;
  Rectangle *this_01;
  uint uVar9;
  undefined8 uVar10;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0xcfc);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::Font_Glyph> *)(this + 0x20),
             (RepeatedPtrField *)(param_1 + 0x20));
  puVar5 = PTR__default_name__007e6280;
  FVar3 = param_1[0x70];
  uVar9 = (uint)(byte)FVar3;
  if (FVar3 == (Font)0x0) goto LAB_003d4580;
  if (((byte)FVar3 & 1) == 0) {
    plVar7 = (long *)PTR__default_kerning__007e5500;
    if (((byte)FVar3 >> 1 & 1) != 0) {
LAB_003d4430:
      this_00 = *(Texture **)(this + 0x18);
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      if (this_00 == (Texture *)0x0) {
        this_00 = operator_new(0x70);
        *(Texture **)(this_00 + 0x20) = this_00 + 0x38;
        *(undefined4 *)(this_00 + 0x30) = 4;
        *(undefined **)(this_00 + 0x10) = PTR__default_name__007e5bc0;
        *(undefined4 *)(this_00 + 0x18) = 1;
        puVar5 = PTR_vtable_007e58d8;
        *(long *)(this_00 + 0x28) = 0;
        *(undefined4 *)(this_00 + 8) = 0;
        *(undefined4 *)(this_00 + 0x58) = 0;
        *(long *)(this_00 + 0x60) = 0;
        *(undefined4 *)(this_00 + 0x68) = 0;
        *(undefined **)this_00 = puVar5 + 0x10;
        *(Texture **)(this + 0x18) = this_00;
      }
      pFVar1 = *(Font **)PTR_default_instance__007e6840;
      if (*(long *)(param_1 + 0x18) != 0) {
        pFVar1 = param_1;
      }
      Texture::MergeFrom(this_00,*(Texture **)(pFVar1 + 0x18));
      uVar9 = *(uint *)(param_1 + 0x70);
      plVar7 = (long *)PTR__default_kerning__007e5500;
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
    if (plVar7 == (long *)puVar5) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar10);
    uVar9 = *(uint *)(param_1 + 0x70);
    plVar7 = (long *)PTR__default_kerning__007e5500;
    if ((uVar9 >> 1 & 1) != 0) goto LAB_003d4430;
  }
  PTR__default_kerning__007e5500 = (undefined *)plVar7;
  if ((uVar9 >> 3 & 1) != 0) {
    plVar8 = *(long **)(this + 0x58);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 8;
    if (plVar8 == plVar7) {
      plVar8 = operator_new(8);
      *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x58) = plVar8;
    }
    FUN_0066a6a8(plVar8,uVar10);
    uVar9 = *(uint *)(param_1 + 0x70);
  }
  if ((uVar9 >> 4 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 0x10;
    *(undefined4 *)(this + 0x60) = uVar2;
    uVar9 = *(uint *)(param_1 + 0x70);
  }
  if ((uVar9 >> 5 & 1) != 0) {
    this_01 = *(Rectangle **)(this + 0x68);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 0x20;
    if (this_01 == (Rectangle *)0x0) {
      this_01 = operator_new(0x20);
      puVar5 = PTR_vtable_007e4bb8;
      *(long *)(this_01 + 0x10) = 0;
      *(long *)(this_01 + 0x18) = 0;
      *(undefined **)this_01 = puVar5 + 0x10;
      *(long *)(this_01 + 8) = 0;
      *(Rectangle **)(this + 0x68) = this_01;
    }
    pFVar1 = *(Font **)PTR_default_instance__007e6840;
    if (*(long *)(param_1 + 0x68) != 0) {
      pFVar1 = param_1;
    }
    Rectangle::MergeFrom(this_01,*(Rectangle **)(pFVar1 + 0x68));
  }
LAB_003d4580:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


