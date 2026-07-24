/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399b44
 * Function: Caver::MonsterControllerComponent::FindNearestEnemy
 * Signature: undefined __thiscall FindNearestEnemy(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterControllerComponent::FindNearestEnemy() */

undefined8 __thiscall
Caver::MonsterControllerComponent::FindNearestEnemy(MonsterControllerComponent *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)ComponentManager::ComponentCollectionForInterface
                             ((ComponentManager *)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x180)
                              ,(long)PTR_Interface_007e5a28);
  for (plVar1 = (long *)*plVar2; ((long *)plVar2[1] != plVar1 && (*(long *)(*plVar1 + 0x28) == 0));
      plVar1 = plVar1 + 1) {
  }
  if ((long *)plVar2[1] != plVar1) {
    return *(undefined8 *)(*plVar1 + 0x28);
  }
  return 0;
}


