/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040cbac
 * Function: Caver::Proto::DamageComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(DamageComponent * this, DamageComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::DamageComponent::MergeFrom(Caver::Proto::DamageComponent const&) */

void __thiscall
Caver::Proto::DamageComponent::MergeFrom(DamageComponent *this,DamageComponent *param_1)

{
  undefined4 uVar1;
  DamageComponent DVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x1bf7);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  if ((uVar5 & 0xff) != 0) {
    if ((uVar5 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
      *(undefined4 *)(this + 0xc) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 2;
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar5 >> 2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
      *(undefined4 *)(this + 0x14) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 8;
      *(undefined4 *)(this + 0x18) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar5 >> 4 & 1) != 0) {
      DVar2 = param_1[0x1c];
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x10;
      this[0x1c] = DVar2;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar5 >> 5 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x20;
      *(undefined4 *)(this + 0x20) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar5 >> 6 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x40;
      *(undefined4 *)(this + 0x24) = uVar1;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar5 >> 7 & 1) != 0) {
      DVar2 = param_1[0x28];
      *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x80;
      this[0x28] = DVar2;
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
  }
  if ((uVar5 >> 8 & 1) != 0) {
    DVar2 = param_1[0x29];
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 0x100;
    this[0x29] = DVar2;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


