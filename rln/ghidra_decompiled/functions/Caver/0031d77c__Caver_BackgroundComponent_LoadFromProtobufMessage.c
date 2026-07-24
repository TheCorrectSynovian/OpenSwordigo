/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031d77c
 * Function: Caver::BackgroundComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(BackgroundComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::BackgroundComponent::LoadFromProtobufMessage(BackgroundComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  string *psVar4;
  Sprite *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6c58,
                     *(MessageLite **)(PTR_extension_007e6c58 + 8));
  if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
    this_00 = *(Sprite **)(this + 0x80);
    psVar4 = (string *)TextureLibrary::sharedLibrary();
    TextureLibrary::TextureForName(psVar4,SUB81(*(undefined8 *)(lVar3 + 0x10),0));
    local_50 = 0;
    uStack_48 = 0;
    Sprite::InitWithTexture(this_00,(intrusive_ptr *)&local_40,(Rectangle *)&local_50);
    if ((local_40 != (long *)0x0) &&
       (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_40 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


