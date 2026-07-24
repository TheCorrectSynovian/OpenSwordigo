/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568e8c
 * Function: Caver::Scene::TouchBegan
 * Signature: undefined __thiscall TouchBegan(Scene * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::TouchBegan(Caver::FWTouch const&) */

undefined4 __thiscall Caver::Scene::TouchBegan(Scene *this,FWTouch *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  FWTouch *pFVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)ComponentManager::ComponentCollectionForInterface
                             ((ComponentManager *)(this + 0x1e0),(long)PTR_Interface_007e62f8);
  plVar1 = (long *)plVar3[1];
  for (plVar5 = (long *)*plVar3; (plVar1 != plVar5 && (*(long *)(*plVar5 + 0x28) == 0));
      plVar5 = plVar5 + 1) {
  }
  if (plVar1 == plVar5) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      pFVar4 = (FWTouch *)*plVar5;
      local_70 = *(undefined8 *)(*(long *)(pFVar4 + 0x28) + 0x70);
      local_68 = *(undefined4 *)(*(long *)(pFVar4 + 0x28) + 0x78);
      Camera::ViewPointFromWorldPosition(*(Vector3 **)(this + 0x240),(float *)&local_70);
                    /* try { // try from 00568f38 to 00668f43 has its CatchHandler @ 005691c4 */
      fVar7 = (float)local_60 - (float)*(undefined8 *)(param_1 + 8);
      fVar8 = (float)((ulong)local_60 >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
                    /* try { // try from 00568f50 to 00668f57 has its CatchHandler @ 005691c0 */
      if (fVar7 * fVar7 + fVar8 * fVar8 < *(float *)(pFVar4 + 0x70) * *(float *)(pFVar4 + 0x70)) {
                    /* try { // try from 00568f58 to 00668f67 has its CatchHandler @ 00569160 */
        TouchableComponent::TouchBegan(pFVar4);
        uVar6 = 1;
      }
      do {
        plVar5 = plVar5 + 1;
                    /* try { // try from 00568f6c to 00668f73 has its CatchHandler @ 005690cc */
        if (plVar5 == (long *)plVar3[1]) break;
      } while (*(long *)(*plVar5 + 0x28) == 0);
    } while (plVar1 != plVar5);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


