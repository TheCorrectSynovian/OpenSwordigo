/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00331314
 * Function: Caver::ComponentOutlet<Caver::CollisionShapeComponent>::ConnectTo
 * Signature: undefined __thiscall ConnectTo(ComponentOutlet<Caver::CollisionShapeComponent> * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentOutlet<Caver::CollisionShapeComponent>::ConnectTo(Caver::Component*) */

void __thiscall
Caver::ComponentOutlet<Caver::CollisionShapeComponent>::ConnectTo
          (ComponentOutlet<Caver::CollisionShapeComponent> *this,Component *param_1)

{
  int iVar1;
  Component *pCVar2;
  
  pCVar2 = *(Component **)(this + 0x10);
  if (pCVar2 != param_1) {
    if (param_1 == (Component *)0x0) {
      *(undefined8 *)(this + 0x10) = 0;
      if ((pCVar2 != (Component *)0x0) &&
         (iVar1 = *(int *)(pCVar2 + 8), *(int *)(pCVar2 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003313a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)pCVar2 + 8))();
        return;
      }
    }
    else {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(Component **)(this + 0x10) = param_1;
      if ((pCVar2 != (Component *)0x0) &&
         (iVar1 = *(int *)(pCVar2 + 8), *(int *)(pCVar2 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*(long *)pCVar2 + 8))();
      }
      *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  return;
}


