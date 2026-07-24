/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032a1a0
 * Function: Caver::ObjectLinkControllerComponent::CreateLink
 * Signature: undefined __thiscall CreateLink(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::CreateLink() */

void __thiscall
Caver::ObjectLinkControllerComponent::CreateLink(ObjectLinkControllerComponent *this)

{
  int iVar1;
  long lVar2;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  DestroyLink(this);
  if (*(long *)(*(long *)(this + 0x70) + -0x18) != 0) {
    Scene::ObjectWithIdentifier(*(string **)(*(long *)(this + 0x28) + 0x20));
    FUN_00668cb8(this + 0x70,0,*(undefined8 *)(*(long *)(this + 0x70) + -0x18),0);
    if (local_40 != (long *)0x0) {
      LinkToObject(this,(intrusive_ptr *)&local_40);
      if ((local_40 != (long *)0x0) &&
         (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*local_40 + 8))();
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


