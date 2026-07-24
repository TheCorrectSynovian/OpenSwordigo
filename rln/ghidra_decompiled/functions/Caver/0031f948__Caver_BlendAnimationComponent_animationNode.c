/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f948
 * Function: Caver::BlendAnimationComponent::animationNode
 * Signature: undefined __thiscall animationNode(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::animationNode() */

undefined8 __thiscall Caver::BlendAnimationComponent::animationNode(BlendAnimationComponent *this)

{
  AnimationComponent *pAVar1;
  long lVar2;
  
  if ((this[0x70] == (BlendAnimationComponent)0x0) &&
     (*(SceneObject **)(this + 0x28) != (SceneObject *)0x0)) {
    this[0x70] = (BlendAnimationComponent)0x1;
    if (*(long *)(this + 0x88) == 0) {
      pAVar1 = (AnimationComponent *)
               SceneObject::ComponentWithIdentifier
                         (*(SceneObject **)(this + 0x28),*(int *)(this + 0x80));
      setAnimation1(this,pAVar1);
      lVar2 = *(long *)(this + 0x98);
    }
    else {
      lVar2 = *(long *)(this + 0x98);
    }
    if (lVar2 == 0) {
      pAVar1 = (AnimationComponent *)
               SceneObject::ComponentWithIdentifier
                         (*(SceneObject **)(this + 0x28),*(int *)(this + 0x90));
      setAnimation2(this,pAVar1);
    }
  }
  return *(undefined8 *)(this + 0x78);
}


