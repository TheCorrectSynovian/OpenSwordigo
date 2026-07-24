/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00403f8c
 * Function: Caver::Proto::KeyframeAnimationComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(KeyframeAnimationComponent * this, KeyframeAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::KeyframeAnimationComponent::MergeFrom(Caver::Proto::KeyframeAnimationComponent
   const&) */

void __thiscall
Caver::Proto::KeyframeAnimationComponent::MergeFrom
          (KeyframeAnimationComponent *this,KeyframeAnimationComponent *param_1)

{
  undefined4 uVar1;
  KeyframeAnimationComponent KVar2;
  long lVar3;
  undefined *puVar4;
  LogMessage *pLVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0xd68);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
  }
  KVar2 = param_1[0x20];
  uVar7 = (uint)(byte)KVar2;
  if (KVar2 == (KeyframeAnimationComponent)0x0) goto LAB_00404024;
  if (((byte)KVar2 & 1) == 0) {
    if (((byte)KVar2 >> 1 & 1) != 0) {
LAB_00404064:
      puVar4 = PTR__default_name__007e5890;
      plVar6 = *(long **)(this + 0x10);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      if (plVar6 == (long *)puVar4) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar8);
      uVar7 = *(uint *)(param_1 + 0x20);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
    *(undefined4 *)(this + 0xc) = uVar1;
    uVar7 = *(uint *)(param_1 + 0x20);
    if ((uVar7 >> 1 & 1) != 0) goto LAB_00404064;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    KVar2 = param_1[0x18];
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
    this[0x18] = KVar2;
    uVar7 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar7 >> 3 & 1) != 0) {
    KVar2 = param_1[0x19];
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 8;
    this[0x19] = KVar2;
    uVar7 = *(uint *)(param_1 + 0x20);
  }
  if ((uVar7 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
  }
LAB_00404024:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


