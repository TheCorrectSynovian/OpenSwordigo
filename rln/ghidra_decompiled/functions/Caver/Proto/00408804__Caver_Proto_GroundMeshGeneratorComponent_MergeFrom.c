/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00408804
 * Function: Caver::Proto::GroundMeshGeneratorComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(GroundMeshGeneratorComponent * this, GroundMeshGeneratorComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::GroundMeshGeneratorComponent::MergeFrom(Caver::Proto::GroundMeshGeneratorComponent
   const&) */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::MergeFrom
          (GroundMeshGeneratorComponent *this,GroundMeshGeneratorComponent *param_1)

{
  undefined4 uVar1;
  long lVar2;
  LogMessage *pLVar3;
  uint uVar4;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x14d4);
    pLVar3 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar3);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((uVar4 & 0xff) != 0) {
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
      *(undefined4 *)(this + 0x14) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 3 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
      *(undefined4 *)(this + 0x18) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
      *(undefined4 *)(this + 0x1c) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 5 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x20;
      *(undefined4 *)(this + 0x20) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 6 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x40;
      *(undefined4 *)(this + 0x24) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 7 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x80;
      *(undefined4 *)(this + 0x28) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
  }
  if ((uVar4 & 0xff00) != 0) {
    if ((uVar4 >> 8 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x2c);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x100;
      *(undefined4 *)(this + 0x2c) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 9 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x200;
      *(undefined4 *)(this + 0x30) = uVar1;
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar4 >> 10 & 1) != 0) {
      *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x400;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


