/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c9710
 * Function: Caver::SwingComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SwingComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SwingComponent::LoadFromProtobufMessage(SwingComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5348,
                     *(MessageLite **)(PTR_extension_007e5348 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar2 + 0xc)) {
    plVar3 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  this[0x90] = *(SwingComponent *)(lVar2 + 0x10);
  this[0x91] = *(SwingComponent *)(lVar2 + 0x11);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(lVar2 + 0x14);
  return;
}


