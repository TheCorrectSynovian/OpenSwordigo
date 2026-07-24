/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402f78
 * Function: Caver::Proto::ModelComponent::MergeFrom
 * Signature: undefined __thiscall MergeFrom(ModelComponent * this, ModelComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::ModelComponent::MergeFrom(Caver::Proto::ModelComponent const&) */

void __thiscall
Caver::Proto::ModelComponent::MergeFrom(ModelComponent *this,ModelComponent *param_1)

{
  ModelComponent *pMVar1;
  undefined4 uVar2;
  ModelComponent MVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  LogMessage *pLVar7;
  uint uVar8;
  undefined8 uVar9;
  Vector3 *this_00;
  FloatColor *pFVar10;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0xc2b);
    pLVar7 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar7);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
    MVar3 = param_1[0x48];
    plVar5 = (long *)PTR__default_name__007e7d30;
  }
  else {
    MVar3 = param_1[0x48];
    plVar5 = (long *)PTR__default_name__007e7d30;
  }
  PTR__default_name__007e7d30 = (undefined *)plVar5;
  if (MVar3 != (ModelComponent)0x0) {
    uVar8 = (uint)(byte)MVar3;
    if (((byte)MVar3 & 1) != 0) {
      plVar6 = *(long **)(this + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 1;
      if (plVar6 == plVar5) {
        plVar6 = operator_new(8);
        *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
        *(long **)(this + 0x10) = plVar6;
      }
      FUN_0066a6a8(plVar6,uVar9);
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      this_00 = *(Vector3 **)(this + 0x18);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 2;
      if (this_00 == (Vector3 *)0x0) {
        this_00 = operator_new(0x20);
        Vector3::Vector3(this_00);
        *(Vector3 **)(this + 0x18) = this_00;
      }
      pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
      if (*(long *)(param_1 + 0x18) != 0) {
        pMVar1 = param_1;
      }
      Vector3::MergeFrom(this_00,*(Vector3 **)(pMVar1 + 0x18));
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 4;
      *(undefined4 *)(this + 0x20) = uVar2;
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar8 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 8;
      *(undefined4 *)(this + 0x24) = uVar2;
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x10;
      *(undefined4 *)(this + 0x28) = uVar2;
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      pFVar10 = *(FloatColor **)(this + 0x30);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x20;
      if (pFVar10 == (FloatColor *)0x0) {
        pFVar10 = operator_new(0x20);
        FloatColor::FloatColor(pFVar10);
        *(FloatColor **)(this + 0x30) = pFVar10;
      }
      pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
      if (*(long *)(param_1 + 0x30) != 0) {
        pMVar1 = param_1;
      }
      FloatColor::MergeFrom(pFVar10,*(FloatColor **)(pMVar1 + 0x30));
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      MVar3 = param_1[0x38];
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x40;
      this[0x38] = MVar3;
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      pFVar10 = *(FloatColor **)(this + 0x40);
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | 0x80;
      if (pFVar10 == (FloatColor *)0x0) {
        pFVar10 = operator_new(0x20);
        FloatColor::FloatColor(pFVar10);
        *(FloatColor **)(this + 0x40) = pFVar10;
      }
      pMVar1 = *(ModelComponent **)PTR_default_instance__007e70f0;
      if (*(long *)(param_1 + 0x40) != 0) {
        pMVar1 = param_1;
      }
      FloatColor::MergeFrom(pFVar10,*(FloatColor **)(pMVar1 + 0x40));
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


