/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037267c
 * Function: Caver::HeroEntityComponent::Prepare
 * Signature: undefined __thiscall Prepare(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::Prepare() */

void __thiscall Caver::HeroEntityComponent::Prepare(HeroEntityComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ShadowComponent *this_00;
  
  EntityComponent::Prepare((EntityComponent *)this);
  lVar2 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7450);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x130);
  *(long *)(this + 0x130) = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar2 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7ab0);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x138);
  *(long *)(this + 0x138) = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  lVar2 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e4828);
  if (lVar2 == 0) {
    this_00 = operator_new(0xe0);
    ShadowComponent::ShadowComponent(this_00);
    this_00[0x78] = (ShadowComponent)0x0;
    SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_00);
  }
  AddSafePosition(this);
  return;
}


