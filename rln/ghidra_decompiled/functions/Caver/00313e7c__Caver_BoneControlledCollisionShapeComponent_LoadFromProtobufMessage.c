/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313e7c
 * Function: Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(BoneControlledCollisionShapeComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component
   const&) */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::LoadFromProtobufMessage
          (BoneControlledCollisionShapeComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  CollisionShapeComponent::LoadFromProtobufMessage((CollisionShapeComponent *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6bf8,
                     *(MessageLite **)(PTR_extension_007e6bf8 + 8));
  if (*(int *)(this + 0x1d8) != *(int *)(lVar2 + 0xc)) {
    plVar3 = *(long **)(this + 0x1e0);
    *(int *)(this + 0x1d8) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 0x1e0) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  FUN_0066a6a8(this + 0x1e8,*(undefined8 *)(lVar2 + 0x10));
  return;
}


