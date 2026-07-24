/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330c80
 * Function: Caver::PortalComponent::Deactivate
 * Signature: undefined __thiscall Deactivate(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::Deactivate() */

void __thiscall Caver::PortalComponent::Deactivate(PortalComponent *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xa0);
  if (plVar2 != (long *)0x0) {
    *(undefined1 *)(plVar2 + 0x1d) = 1;
    *(undefined8 *)(this + 0xa0) = 0;
    iVar1 = (int)plVar2[1] + -1;
    *(int *)(plVar2 + 1) = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00330cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


