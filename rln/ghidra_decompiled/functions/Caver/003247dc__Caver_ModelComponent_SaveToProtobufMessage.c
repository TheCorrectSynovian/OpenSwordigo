/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003247dc
 * Function: Caver::ModelComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ModelComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ModelComponent::SaveToProtobufMessage(ModelComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined *puVar4;
  MessageLite *pMVar5;
  long lVar6;
  long *plVar7;
  Vector3 *this_00;
  FloatColor *pFVar8;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6980;
  pMVar5 = (MessageLite *)Proto::ModelComponent::default_instance();
  lVar6 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar5,(FieldDescriptor *)0x0);
  puVar4 = PTR__default_name__007e7d30;
  if (*(long *)(*(long *)(this + 0x70) + -0x18) != 0) {
    plVar7 = *(long **)(lVar6 + 0x10);
    *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 1;
    if (plVar7 == (long *)puVar4) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(lVar6 + 0x10) = plVar7;
    }
    FUN_0066a6a8(plVar7,this + 0x70);
  }
  this_00 = *(Vector3 **)(lVar6 + 0x18);
  *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 2;
  if (this_00 == (Vector3 *)0x0) {
    this_00 = operator_new(0x20);
    Proto::Vector3::Vector3(this_00);
    *(Vector3 **)(lVar6 + 0x18) = this_00;
  }
  *(undefined8 *)(this_00 + 0xc) = *(undefined8 *)(this + 0xc4);
  *(undefined4 *)(this_00 + 0x14) = *(undefined4 *)(this + 0xcc);
  *(uint *)(this_00 + 0x18) = *(uint *)(this_00 + 0x18) | 7;
  fVar3 = DAT_00683ffc;
  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(this + 0xd0);
  *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(this + 0x98);
  local_48 = (float)NEON_ucvtf((uint)(byte)this[0x13a]);
  fStack_44 = (float)NEON_ucvtf((uint)(byte)this[0x13b]);
  local_40 = (float)NEON_ucvtf((uint)(byte)this[0x13c]);
  fStack_3c = (float)NEON_ucvtf((uint)(byte)this[0x13d]);
  local_48 = local_48 / fVar3;
  fStack_44 = fStack_44 / fVar3;
  local_40 = local_40 / fVar3;
  fStack_3c = fStack_3c / fVar3;
  pFVar8 = *(FloatColor **)(lVar6 + 0x30);
  *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 0x3c;
  if (pFVar8 == (FloatColor *)0x0) {
    pFVar8 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar8);
    *(FloatColor **)(lVar6 + 0x30) = pFVar8;
  }
  FloatColorToProtobufMessage((FloatColor *)&local_48,pFVar8);
  pFVar8 = *(FloatColor **)(lVar6 + 0x40);
  *(ModelComponent *)(lVar6 + 0x38) = this[0x9c];
  *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 0xc0;
  if (pFVar8 == (FloatColor *)0x0) {
    pFVar8 = operator_new(0x20);
    Proto::FloatColor::FloatColor(pFVar8);
    *(FloatColor **)(lVar6 + 0x40) = pFVar8;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xa0),pFVar8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


