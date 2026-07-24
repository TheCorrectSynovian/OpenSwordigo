/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00565380
 * Function: Caver::Scene::RegisterObjectWaitingForActivation
 * Signature: undefined __thiscall RegisterObjectWaitingForActivation(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::RegisterObjectWaitingForActivation(boost::intrusive_ptr<Caver::SceneObject> const&)
    */

void __thiscall Caver::Scene::RegisterObjectWaitingForActivation(Scene *this,intrusive_ptr *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = operator_new(0x18);
  lVar2 = *(long *)param_1;
  *(long *)((long)pvVar1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FUN_0062a9ac(pvVar1,this + 0x170);
  return;
}


