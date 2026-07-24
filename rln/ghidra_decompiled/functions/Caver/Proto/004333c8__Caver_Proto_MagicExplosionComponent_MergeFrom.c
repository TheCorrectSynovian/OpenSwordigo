/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004333c8
 * Function: Caver::Proto::MagicExplosionComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MagicExplosionComponent * this, MagicExplosionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::MergeFrom(Caver::Proto::MagicExplosionComponent const&) */

void __thiscall
Caver::Proto::MagicExplosionComponent::MergeFrom
          (MagicExplosionComponent *this,MagicExplosionComponent *param_1)

{
  MagicExplosionComponent *pMVar1;
  undefined4 uVar2;
  MagicExplosionComponent MVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 004333f4 to 005335a3 has its CatchHandler @ 00433338 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x5eb8);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar3 = param_1[0x24];
  }
  else {
    MVar3 = param_1[0x24];
  }
  if (MVar3 != (MagicExplosionComponent)0x0) {
    uVar6 = (uint)(byte)MVar3;
    if (((byte)MVar3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      this_00 = *(FloatColor **)(this + 0x10);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
      if (this_00 == (FloatColor *)0x0) {
        this_00 = operator_new(0x20);
        FloatColor::FloatColor(this_00);
        *(FloatColor **)(this + 0x10) = this_00;
      }
      pMVar1 = *(MagicExplosionComponent **)PTR_default_instance__007e5e18;
      if (*(long *)(param_1 + 0x10) != 0) {
        pMVar1 = param_1;
      }
      FloatColor::MergeFrom(this_00,*(FloatColor **)(pMVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 004333b8 with catch @ 004334d0 */
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 4;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
      *(undefined4 *)(this + 0x1c) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x24);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x10;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00433384 with catch @ 00433534 */
    __stack_chk_fail();
  }
  return;
}


