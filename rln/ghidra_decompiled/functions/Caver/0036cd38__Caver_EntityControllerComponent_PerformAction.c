/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036cd38
 * Function: Caver::EntityControllerComponent::PerformAction
 * Signature: undefined __thiscall PerformAction(EntityControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::PerformAction(boost::intrusive_ptr<Caver::EntityActionComponent>
   const&) */

void __thiscall
Caver::EntityControllerComponent::PerformAction
          (EntityControllerComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x118);
  *(long *)(this + 0x118) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  this[0x120] = (EntityControllerComponent)0x0;
  *(undefined4 *)(this + 0x124) = 0;
  EntityActionComponent::Perform(*(EntityActionComponent **)param_1);
  return;
}


