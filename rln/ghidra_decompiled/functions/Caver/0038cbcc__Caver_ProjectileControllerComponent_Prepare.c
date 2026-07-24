/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cbcc
 * Function: Caver::ProjectileControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::Prepare() */

void __thiscall Caver::ProjectileControllerComponent::Prepare(ProjectileControllerComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  SceneObject *this_00;
  
  lVar2 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6cd0);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x78);
  *(long *)(this + 0x78) = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  this_00 = *(SceneObject **)(this + 0x28);
  this_00[0xf3] = (SceneObject)0x0;
  SceneObject::Activate(this_00);
  return;
}


