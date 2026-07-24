/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032a440
 * Function: Caver::ObjectLinkControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::Prepare() */

void __thiscall Caver::ObjectLinkControllerComponent::Prepare(ObjectLinkControllerComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  RegisterLibrary(this);
  UpdateLocalTransform(this);
  lVar2 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6220);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x120);
  *(long *)(this + 0x120) = lVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0032a4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}


