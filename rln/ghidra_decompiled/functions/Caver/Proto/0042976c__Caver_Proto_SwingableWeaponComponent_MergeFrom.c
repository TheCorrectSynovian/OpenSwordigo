/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042976c
 * Function: Caver::Proto::SwingableWeaponComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(SwingableWeaponComponent * this, SwingableWeaponComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::SwingableWeaponComponent::MergeFrom(Caver::Proto::SwingableWeaponComponent const&)
    */

void __thiscall
Caver::Proto::SwingableWeaponComponent::MergeFrom
          (SwingableWeaponComponent *this,SwingableWeaponComponent *param_1)

{
  SwingableWeaponComponent *pSVar1;
  undefined4 uVar2;
  long lVar3;
  LogMessage *pLVar4;
  uint uVar5;
  FloatColor *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 004290e4 with catch @ 0042978c */
                    /* catch() { ... } // from try @ 00429088 with catch @ 00429790 */
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x4f93);
    pLVar4 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar4);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  uVar5 = *(uint *)(param_1 + 0x44);
  if ((uVar5 & 0xff) != 0) {
    if ((uVar5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
                    /* catch() { ... } // from try @ 00428fa4 with catch @ 0042988c */
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 1;
      *(undefined4 *)(this + 0xc) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 2;
      *(undefined4 *)(this + 0x10) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
                    /* catch() { ... } // from try @ 0042905c with catch @ 004297ec */
    if ((uVar5 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 4;
      *(undefined4 *)(this + 0x14) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 8;
      *(undefined4 *)(this + 0x18) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 4 & 1) != 0) {
                    /* catch() { ... } // from try @ 00428f84 with catch @ 004298f8 */
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x10;
                    /* try { // try from 00429904 to 00529a1b has its CatchHandler @ 00429904
                       catch() { ... } // from try @ 00429904 with catch @ 00429904
                       catch() { ... } // from try @ 00429a70 with catch @ 00429904
                       catch() { ... } // from try @ 00429c34 with catch @ 00429904 */
      *(undefined4 *)(this + 0x1c) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 5 & 1) != 0) {
      this_00 = *(FloatColor **)(this + 0x20);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x20;
      if (this_00 == (FloatColor *)0x0) {
        this_00 = operator_new(0x20);
        FloatColor::FloatColor(this_00);
        *(FloatColor **)(this + 0x20) = this_00;
      }
      pSVar1 = *(SwingableWeaponComponent **)PTR_default_instance__007e4b88;
      if (*(long *)(param_1 + 0x20) != 0) {
        pSVar1 = param_1;
      }
      FloatColor::MergeFrom(this_00,*(FloatColor **)(pSVar1 + 0x20));
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 6 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x40;
      *(undefined4 *)(this + 0x28) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 7 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
                    /* catch() { ... } // from try @ 00429038 with catch @ 00429824 */
                    /* catch() { ... } // from try @ 00428fd4 with catch @ 00429828 */
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x80;
      *(undefined4 *)(this + 0x2c) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
  }
  if ((uVar5 & 0xff00) != 0) {
    if ((uVar5 >> 8 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x100;
      *(undefined4 *)(this + 0x30) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 9 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x200;
      *(undefined4 *)(this + 0x34) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 10 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x400;
      *(undefined4 *)(this + 0x38) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x3c);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x800;
      *(undefined4 *)(this + 0x3c) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x44);
    }
    if ((uVar5 >> 0xc & 1) != 0) {
      *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 0x1000;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


