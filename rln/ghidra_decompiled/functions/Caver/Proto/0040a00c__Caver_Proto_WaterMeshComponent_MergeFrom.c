/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a00c
 * Function: Caver::Proto::WaterMeshComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(WaterMeshComponent * this, WaterMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::MergeFrom(Caver::Proto::WaterMeshComponent const&) */

void __thiscall
Caver::Proto::WaterMeshComponent::MergeFrom(WaterMeshComponent *this,WaterMeshComponent *param_1)

{
  WaterMeshComponent *pWVar1;
  undefined4 uVar2;
  WaterMeshComponent WVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *pFVar7;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x16f7);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    WVar3 = param_1[0x28];
  }
  else {
    WVar3 = param_1[0x28];
  }
  if (WVar3 == (WaterMeshComponent)0x0) goto LAB_0040a178;
  uVar6 = (uint)(byte)WVar3;
  if (((byte)WVar3 & 1) == 0) {
    if (((byte)WVar3 >> 1 & 1) != 0) {
LAB_0040a0bc:
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
    if ((uVar6 >> 1 & 1) != 0) goto LAB_0040a0bc;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    pFVar7 = *(FloatColor **)(this + 0x18);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 4;
    if (pFVar7 == (FloatColor *)0x0) {
      pFVar7 = operator_new(0x20);
      FloatColor::FloatColor(pFVar7);
      *(FloatColor **)(this + 0x18) = pFVar7;
    }
    pWVar1 = *(WaterMeshComponent **)PTR_default_instance__007e6e28;
    if (*(long *)(param_1 + 0x18) != 0) {
      pWVar1 = param_1;
    }
    FloatColor::MergeFrom(pFVar7,*(FloatColor **)(pWVar1 + 0x18));
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    pFVar7 = *(FloatColor **)(this + 0x20);
    *(uint *)(this + 0x28) = *(uint *)(this + 0x28) | 8;
    if (pFVar7 == (FloatColor *)0x0) {
      pFVar7 = operator_new(0x20);
      FloatColor::FloatColor(pFVar7);
      *(FloatColor **)(this + 0x20) = pFVar7;
    }
    pWVar1 = *(WaterMeshComponent **)PTR_default_instance__007e6e28;
    if (*(long *)(param_1 + 0x20) != 0) {
      pWVar1 = param_1;
    }
    FloatColor::MergeFrom(pFVar7,*(FloatColor **)(pWVar1 + 0x20));
  }
LAB_0040a178:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


