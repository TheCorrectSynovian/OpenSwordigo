/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00326c70
 * Function: Caver::ModelTransformControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ModelTransformControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
    */

void __thiscall
Caver::ModelTransformControllerComponent::LoadFromProtobufMessage
          (ModelTransformControllerComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar5 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7650,
                     *(MessageLite **)(PTR_extension_007e7650 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar5 + 0xc)) {
    plVar6 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar5 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar4 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*plVar6 + 8))();
      uVar2 = *(uint *)(lVar5 + 0x28);
      goto joined_r0x00326cd8;
    }
  }
  uVar2 = *(uint *)(lVar5 + 0x28);
joined_r0x00326cd8:
  if ((uVar2 >> 1 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e6260;
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar1 = lVar5;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x14);
    *(undefined8 *)(this + 0x8c) = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0xc);
    *(undefined4 *)(this + 0x94) = uVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e6260;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar1 = lVar5;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar1 + 0x18) + 0x14);
    *(undefined8 *)(this + 0x98) = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0xc);
    *(undefined4 *)(this + 0xa0) = uVar3;
  }
  *(undefined8 *)(this + 0xa4) = *(undefined8 *)(lVar5 + 0x20);
  return;
}


