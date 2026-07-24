/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045a6d4
 * Function: Caver::GameViewController::StoreViewControllerDismissed
 * Signature: undefined __cdecl StoreViewControllerDismissed(StoreViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController*) */

void Caver::GameViewController::StoreViewControllerDismissed(StoreViewController *param_1)

{
  int iVar1;
  long lVar2;
  PortalComponent *this;
  long lVar3;
  SceneObject *local_30;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (*(long *)(*(long *)(param_1 + 0x138) + -0x18) != 0) {
    Scene::ObjectWithIdentifier(*(string **)(*(long *)(param_1 + 200) + 0x20));
    if (local_30 != (SceneObject *)0x0) {
      this = (PortalComponent *)
             SceneObject::ComponentWithInterface(local_30,(long)PTR_Interface_007e68e8);
      if (this != (PortalComponent *)0x0) {
        PortalComponent::Activate(this);
      }
      if ((local_30 != (SceneObject *)0x0) &&
         (iVar1 = *(int *)(local_30 + 8), *(int *)(local_30 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*(long *)local_30 + 8))();
      }
    }
  }
  CheckAndEnableNewPurchases((GameViewController *)param_1);
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


