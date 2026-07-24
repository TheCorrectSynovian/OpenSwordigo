/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d130c
 * Function: Caver::Proto::Texture_Subtexture::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Texture_Subtexture * this, Texture_Subtexture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::MergeFrom(Caver::Proto::Texture_Subtexture const&) */

void __thiscall
Caver::Proto::Texture_Subtexture::MergeFrom(Texture_Subtexture *this,Texture_Subtexture *param_1)

{
  Texture_Subtexture *pTVar1;
  Texture_Subtexture TVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  Rectangle *this_00;
  uint uVar7;
  undefined8 uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0x855);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  puVar4 = PTR__default_name__007e57e8;
  TVar2 = param_1[0x24];
  uVar7 = (uint)(byte)TVar2;
  if (TVar2 == (Texture_Subtexture)0x0) goto LAB_003d139c;
  if (((byte)TVar2 & 1) == 0) {
    if (((byte)TVar2 >> 1 & 1) != 0) {
LAB_003d1410:
      this_00 = *(Rectangle **)(this + 0x18);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      if (this_00 == (Rectangle *)0x0) {
        this_00 = operator_new(0x20);
        puVar4 = PTR_vtable_007e4bb8;
        *(long *)(this_00 + 0x10) = 0;
        *(long *)(this_00 + 0x18) = 0;
        *(undefined **)this_00 = puVar4 + 0x10;
        *(long *)(this_00 + 8) = 0;
        *(Rectangle **)(this + 0x18) = this_00;
      }
      pTVar1 = *(Texture_Subtexture **)PTR_default_instance__007e6858;
      if (*(long *)(param_1 + 0x18) != 0) {
        pTVar1 = param_1;
      }
      Rectangle::MergeFrom(this_00,*(Rectangle **)(pTVar1 + 0x18));
      uVar7 = *(uint *)(param_1 + 0x24);
    }
  }
  else {
    plVar6 = *(long **)(this + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
    if (plVar6 == (long *)puVar4) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar6;
    }
    FUN_0066a6a8(plVar6,uVar8);
    uVar7 = *(uint *)(param_1 + 0x24);
    if ((uVar7 >> 1 & 1) != 0) goto LAB_003d1410;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
  }
LAB_003d139c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


