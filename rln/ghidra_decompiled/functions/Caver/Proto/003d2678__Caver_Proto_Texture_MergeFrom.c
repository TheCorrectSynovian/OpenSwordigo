/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d2678
 * Function: Caver::Proto::Texture::MergeFrom
 * Signature: undefined __thiscall MergeFrom(Texture * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::MergeFrom(Caver::Proto::Texture const&) */

void __thiscall Caver::Proto::Texture::MergeFrom(Texture *this,Texture *param_1)

{
  Texture *pTVar1;
  undefined4 uVar2;
  Texture TVar3;
  long lVar4;
  undefined *puVar5;
  LogMessage *pLVar6;
  long *plVar7;
  Texture_ConversionInfo *this_00;
  uint uVar8;
  undefined8 uVar9;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Common.pb.cc",0xa94);
    pLVar6 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar6);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::Texture_Subtexture> *)(this + 0x20),
             (RepeatedPtrField *)(param_1 + 0x20));
  puVar5 = PTR__default_name__007e5bc0;
  TVar3 = param_1[0x68];
  uVar8 = (uint)(byte)TVar3;
  if (TVar3 == (Texture)0x0) goto LAB_003d27e8;
  if (((byte)TVar3 & 1) == 0) {
    if (((byte)TVar3 >> 1 & 1) != 0) {
LAB_003d275c:
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 2;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar8 = *(uint *)(param_1 + 0x68);
    }
  }
  else {
    plVar7 = *(long **)(this + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 1;
    if (plVar7 == (long *)puVar5) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar7;
    }
    FUN_0066a6a8(plVar7,uVar9);
    uVar8 = *(uint *)(param_1 + 0x68);
    if ((uVar8 >> 1 & 1) != 0) goto LAB_003d275c;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 8;
    *(undefined4 *)(this + 0x58) = uVar2;
    uVar8 = *(uint *)(param_1 + 0x68);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    this_00 = *(Texture_ConversionInfo **)(this + 0x60);
    *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 0x10;
    if (this_00 == (Texture_ConversionInfo *)0x0) {
      this_00 = operator_new(0x20);
      puVar5 = PTR_vtable_007e5950;
      *(long *)(this_00 + 0x10) = 0;
      *(long *)(this_00 + 0x18) = 0;
      *(undefined **)this_00 = puVar5 + 0x10;
      *(long *)(this_00 + 8) = 0;
      *(Texture_ConversionInfo **)(this + 0x60) = this_00;
    }
    pTVar1 = *(Texture **)PTR_default_instance__007e7970;
    if (*(long *)(param_1 + 0x60) != 0) {
      pTVar1 = param_1;
    }
    Texture_ConversionInfo::MergeFrom(this_00,*(Texture_ConversionInfo **)(pTVar1 + 0x60));
  }
LAB_003d27e8:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


