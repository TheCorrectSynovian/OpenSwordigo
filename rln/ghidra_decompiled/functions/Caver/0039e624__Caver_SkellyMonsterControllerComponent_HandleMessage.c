/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039e624
 * Function: Caver::SkellyMonsterControllerComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 Caver::SkellyMonsterControllerComponent::HandleMessage(int param_1,void *param_2)

{
  Component *pCVar1;
  CharControllerComponent *this;
  int iVar2;
  CharControllerComponent *pCVar3;
  
  pCVar1 = (Component *)(ulong)(uint)param_1;
  iVar2 = (int)param_2;
  if (iVar2 == 6) {
    this = *(CharControllerComponent **)(pCVar1 + 0xe0);
    pCVar3 = this;
    if (this == (CharControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar1 + 0xd0),pCVar1);
      this = *(CharControllerComponent **)(pCVar1 + 0xe0);
      pCVar3 = this;
      if (this == (CharControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar1 + 0xd0),pCVar1);
        pCVar3 = *(CharControllerComponent **)(pCVar1 + 0xe0);
        this = (CharControllerComponent *)0x0;
      }
    }
    CharControllerComponent::StopMovingToDirection(this,*(int *)(pCVar3 + 0x230));
    pCVar1[0x110] = (Component)0x1;
  }
  else if (iVar2 == 5) {
    if (pCVar1[0x124] == (Component)0x0) {
      if (*(long *)(pCVar1 + 0x108) != 0) {
        SceneObject::AddChildObject
                  (*(SceneObject **)(pCVar1 + 0x28),(intrusive_ptr *)(pCVar1 + 0x108));
      }
      if (*(long *)(pCVar1 + 0x100) != 0) {
        SceneObject::AddChildObject
                  (*(SceneObject **)(pCVar1 + 0x28),(intrusive_ptr *)(pCVar1 + 0x100));
      }
      pCVar1[0x124] = (Component)0x1;
    }
  }
  else if ((iVar2 == 2) && (pCVar1[0x124] != (Component)0x0)) {
    if (*(SceneObject **)(pCVar1 + 0x108) != (SceneObject *)0x0) {
      SceneObject::RemoveChildObject
                (*(SceneObject **)(pCVar1 + 0x28),*(SceneObject **)(pCVar1 + 0x108),true);
    }
    if (*(SceneObject **)(pCVar1 + 0x100) != (SceneObject *)0x0) {
      SceneObject::RemoveChildObject
                (*(SceneObject **)(pCVar1 + 0x28),*(SceneObject **)(pCVar1 + 0x100),true);
    }
    pCVar1[0x124] = (Component)0x0;
  }
  return 0;
}


