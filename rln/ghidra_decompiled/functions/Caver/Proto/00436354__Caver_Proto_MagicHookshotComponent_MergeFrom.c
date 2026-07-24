/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436354
 * Function: Caver::Proto::MagicHookshotComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MagicHookshotComponent * this, MagicHookshotComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::MagicHookshotComponent::MergeFrom(Caver::Proto::MagicHookshotComponent const&) */

void __thiscall
Caver::Proto::MagicHookshotComponent::MergeFrom
          (MagicHookshotComponent *this,MagicHookshotComponent *param_1)

{
  MagicHookshotComponent *pMVar1;
  undefined4 uVar2;
  MagicHookshotComponent MVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x63fd);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar3 = param_1[0x28];
  }
  else {
    MVar3 = param_1[0x28];
  }
  if (MVar3 == (MagicHookshotComponent)0x0) goto LAB_004364a8;
  uVar6 = (uint)(byte)MVar3;
  if (((byte)MVar3 & 1) == 0) {
    if (((byte)MVar3 >> 1 & 1) != 0) {
LAB_00436408:
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar6 = *(uint *)(param_1 + 0x28);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 1;
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x28);
    if ((uVar6 >> 1 & 1) != 0) goto LAB_00436408;
  }
  if ((uVar6 >> 2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00436454 with catch @ 00436424 */
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    *(undefined4 *)(this + 0x14) = uVar2;
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar6 >> 3 & 1) != 0) {
                    /* try { // try from 00436440 to 00536453 has its CatchHandler @ 00436478 */
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
    *(undefined4 *)(this + 0x18) = uVar2;
                    /* try { // try from 00436454 to 0053647b has its CatchHandler @ 00436424 */
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar6 >> 4 & 1) != 0) {
    this_00 = *(FloatColor **)(this + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 0x10;
    if (this_00 == (FloatColor *)0x0) {
      this_00 = operator_new(0x20);
                    /* catch() { ... } // from try @ 00436440 with catch @ 00436478 */
      FloatColor::FloatColor(this_00);
      *(FloatColor **)(this + 0x20) = this_00;
    }
    pMVar1 = *(MagicHookshotComponent **)PTR_default_instance__007e6b30;
    if (*(long *)(param_1 + 0x20) != 0) {
      pMVar1 = param_1;
    }
    FloatColor::MergeFrom(this_00,*(FloatColor **)(pMVar1 + 0x20));
  }
LAB_004364a8:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


