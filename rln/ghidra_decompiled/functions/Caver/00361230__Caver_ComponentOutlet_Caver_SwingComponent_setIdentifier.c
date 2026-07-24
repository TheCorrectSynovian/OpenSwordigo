/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00361230
 * Function: Caver::ComponentOutlet<Caver::SwingComponent>::setIdentifier
 * Signature: undefined __thiscall setIdentifier(ComponentOutlet<Caver::SwingComponent> * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::SwingComponent>::setIdentifier(int) */

void __thiscall
Caver::ComponentOutlet<Caver::SwingComponent>::setIdentifier
          (ComponentOutlet<Caver::SwingComponent> *this,int param_1)

{
  int iVar1;
  long *plVar2;
  
  if (*(int *)(this + 8) != param_1) {
    plVar2 = *(long **)(this + 0x10);
    *(int *)(this + 8) = param_1;
    *(undefined8 *)(this + 0x10) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0036126c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


