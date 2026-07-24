/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330324
 * Function: Caver::PortalComponent::Prepare
 * Signature: undefined __thiscall Prepare(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::Prepare() */

void __thiscall Caver::PortalComponent::Prepare(PortalComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  RegisterLibrary(this);
  if ((((*(long *)(this + 0x80) == 0) &&
       (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
       *(long *)(this + 0x80) == 0)) &&
      (lVar2 = SceneObject::ComponentWithInterface
                         (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e5b08), lVar2 != 0))
     && ((*(int *)(lVar2 + 0x180) == 4 && (*(int *)(this + 0x78) != *(int *)(lVar2 + 0x20))))) {
    plVar3 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar2 + 0x20);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003303c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


