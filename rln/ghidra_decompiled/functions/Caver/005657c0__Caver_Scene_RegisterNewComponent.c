/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005657c0
 * Function: Caver::Scene::RegisterNewComponent
 * Signature: undefined __thiscall RegisterNewComponent(Scene * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::RegisterNewComponent(boost::intrusive_ptr<Caver::Component> const&) */

void __thiscall Caver::Scene::RegisterNewComponent(Scene *this,intrusive_ptr *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = operator_new(0x18);
  lVar2 = *(long *)param_1;
  *(long *)((long)pvVar1 + 0x10) = lVar2;
  if (lVar2 != 0) {
                    /* try { // try from 005657ec to 006657ff has its CatchHandler @ 00565dd0 */
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FUN_0062a9ac(pvVar1,this + 0x160);
  return;
}


