/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d7ec
 * Function: Caver::Proto::SpawnPointComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SpawnPointComponent * this, SpawnPointComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::MergeFrom(Caver::Proto::SpawnPointComponent const&) */

void __thiscall
Caver::Proto::SpawnPointComponent::MergeFrom(SpawnPointComponent *this,SpawnPointComponent *param_1)

{
  SpawnPointComponent *pSVar1;
  undefined4 uVar2;
  SpawnPointComponent SVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  Vector3 *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x557c);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    SVar3 = param_1[0x18];
  }
  else {
    SVar3 = param_1[0x18];
  }
  if (SVar3 != (SpawnPointComponent)0x0) {
    uVar6 = (uint)(byte)SVar3;
    if (((byte)SVar3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x18);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      this_00 = *(Vector3 **)(this + 0x10);
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 2;
      if (this_00 == (Vector3 *)0x0) {
        this_00 = operator_new(0x20);
        Vector3::Vector3(this_00);
        *(Vector3 **)(this + 0x10) = this_00;
      }
      pSVar1 = *(SpawnPointComponent **)PTR_default_instance__007e5048;
      if (*(long *)(param_1 + 0x10) != 0) {
        pSVar1 = param_1;
      }
      Vector3::MergeFrom(this_00,*(Vector3 **)(pSVar1 + 0x10));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


