/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fcbcc
 * Function: Caver::Proto::ObjectLibrary::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ObjectLibrary * this, ObjectLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::MergeFrom(Caver::Proto::ObjectLibrary const&) */

void __thiscall Caver::Proto::ObjectLibrary::MergeFrom(ObjectLibrary *this,ObjectLibrary *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  LogMessage *pLVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  Texture *pTVar8;
  Program *pPVar9;
  Texture *this_00;
  Program *this_01;
  long lVar10;
  LogFinisher aLStack_80 [8];
  LogMessage aLStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_78,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x57d);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_78,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_80,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_78);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom
            ((RepeatedPtrField<Caver::Proto::ObjectTemplate> *)(this + 0x18),
             (RepeatedPtrField *)(param_1 + 0x18));
  google::protobuf::RepeatedPtrField<std::string>::MergeFrom
            ((RepeatedPtrField<std::string> *)(this + 0x50),(RepeatedPtrField *)(param_1 + 0x50));
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0x88),*(int *)(param_1 + 0x90) + *(int *)(this + 0x90))
  ;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar10 = 0;
    do {
      iVar1 = *(int *)(this + 0x90);
      iVar6 = *(int *)(this + 0x94);
      pTVar8 = *(Texture **)(*(long *)(param_1 + 0x88) + lVar10 * 8);
      if (iVar1 < iVar6) {
        *(int *)(this + 0x90) = iVar1 + 1;
        this_00 = *(Texture **)(*(long *)(this + 0x88) + (long)iVar1 * 8);
      }
      else {
        if (iVar6 == *(int *)(this + 0x98)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0x88),iVar6 + 1);
          iVar6 = *(int *)(this + 0x94);
        }
        *(int *)(this + 0x94) = iVar6 + 1;
        this_00 = operator_new(0x70);
        Texture::Texture(this_00);
        iVar1 = *(int *)(this + 0x90);
        *(int *)(this + 0x90) = iVar1 + 1;
        *(Texture **)(*(long *)(this + 0x88) + (long)iVar1 * 8) = this_00;
      }
      Texture::MergeFrom(this_00,pTVar8);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x90));
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve
            ((RepeatedPtrFieldBase *)(this + 0xc0),*(int *)(param_1 + 200) + *(int *)(this + 200));
  if (0 < *(int *)(param_1 + 200)) {
    lVar10 = 0;
    do {
      iVar1 = *(int *)(this + 200);
      iVar6 = *(int *)(this + 0xcc);
      pPVar9 = *(Program **)(*(long *)(param_1 + 0xc0) + lVar10 * 8);
      if (iVar1 < iVar6) {
        *(int *)(this + 200) = iVar1 + 1;
        this_01 = *(Program **)(*(long *)(this + 0xc0) + (long)iVar1 * 8);
      }
      else {
        if (iVar6 == *(int *)(this + 0xd0)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(this + 0xc0),iVar6 + 1);
          iVar6 = *(int *)(this + 0xcc);
        }
        *(int *)(this + 0xcc) = iVar6 + 1;
        this_01 = operator_new(0x30);
        Program::Program(this_01);
        iVar1 = *(int *)(this + 200);
        *(int *)(this + 200) = iVar1 + 1;
        *(Program **)(*(long *)(this + 0xc0) + (long)iVar1 * 8) = this_01;
      }
      Program::MergeFrom(this_01,pPVar9);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 200));
  }
  puVar3 = PTR__default_name__007e6d40;
  if (((byte)param_1[0xf8] & 1) != 0) {
    plVar5 = *(long **)(this + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(uint *)(this + 0xf8) = *(uint *)(this + 0xf8) | 1;
    if (plVar5 == (long *)puVar3) {
      plVar5 = operator_new(8);
      *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(this + 0x10) = plVar5;
    }
    FUN_0066a6a8(plVar5,uVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


