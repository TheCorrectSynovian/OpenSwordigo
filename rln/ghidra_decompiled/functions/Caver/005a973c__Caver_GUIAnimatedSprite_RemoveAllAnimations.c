/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a973c
 * Function: Caver::GUIAnimatedSprite::RemoveAllAnimations
 * Signature: undefined __thiscall RemoveAllAnimations(GUIAnimatedSprite * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimatedSprite::RemoveAllAnimations() */

void __thiscall Caver::GUIAnimatedSprite::RemoveAllAnimations(GUIAnimatedSprite *this)

{
  GUIAnimatedSprite *pGVar1;
  long lVar2;
  long *plVar3;
  GUIAnimatedSprite *pGVar4;
  GUIAnimatedSprite *pGVar5;
  
  pGVar4 = this + 0x20;
  pGVar1 = *(GUIAnimatedSprite **)pGVar4;
  while (pGVar1 != pGVar4) {
    plVar3 = *(long **)(pGVar1 + 0x18);
    pGVar5 = *(GUIAnimatedSprite **)pGVar1;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    operator_delete(pGVar1);
    pGVar1 = pGVar5;
  }
  *(GUIAnimatedSprite **)(this + 0x20) = pGVar4;
  *(GUIAnimatedSprite **)(this + 0x28) = pGVar4;
  return;
}


