/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056fe44
 * Function: Caver::SceneObject::Templatize
 * Signature: undefined __cdecl Templatize(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::Templatize(std::string const&) */

void Caver::SceneObject::Templatize(string *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ObjectTemplate *in_x1;
  SceneObject *in_x2;
  intrusive_ptr *in_x8;
  Scene *pSVar7;
  long lVar8;
  
                    /* catch() { ... } // from try @ 0056fe04 with catch @ 0056fe64 */
  ObjectTemplate::TemplateFromObject(in_x1,param_1,in_x2);
  pSVar7 = *(Scene **)(param_1 + 0x20);
  if (pSVar7 != (Scene *)0x0) {
    lVar8 = *(long *)(param_1 + 200) - (long)*(undefined8 **)(param_1 + 0xc0);
                    /* try { // try from 0056fe84 to 0066feab has its CatchHandler @ 0056feb4 */
    if (lVar8 == 0) {
LAB_0056fee4:
      RemoveFromAllGroups((SceneObject *)param_1,true);
      if (*(long *)(param_1 + 0x20) != 0) {
        SceneObjectLib::PerformCleanupForSceneObject
                  ((ProgramState *)(*(long *)(param_1 + 0x20) + 0x28),(SceneObject *)param_1);
      }
    }
    else {
      plVar3 = (long *)**(undefined8 **)(param_1 + 0xc0);
      uVar4 = (**(code **)(*plVar3 + 0xd0))(plVar3,2,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = 1;
        do {
                    /* try { // try from 0056feac to 0066feb7 has its CatchHandler @ 0056fd98 */
          if ((ulong)(lVar8 >> 3) <= uVar4) goto LAB_0056fee4;
                    /* catch() { ... } // from try @ 0056fe84 with catch @ 0056feb4 */
                    /* catch() { ... } // from try @ 0056ff68 with catch @ 0056feb8 */
          plVar3 = *(long **)(*(long *)(param_1 + 0xc0) + uVar4 * 8);
          uVar5 = (**(code **)(*plVar3 + 0xd0))(plVar3,2,0);
                    /* try { // try from 0056fed0 to 0066fed7 has its CatchHandler @ 0056ff74 */
          uVar4 = uVar4 + 1;
        } while ((uVar5 & 1) == 0);
      }
    }
                    /* try { // try from 0056ff04 to 0066ff0f has its CatchHandler @ 0056ff1c */
    param_1[0x19] = (string)0x0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  plVar3 = *(long **)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (plVar3 != *(long **)(param_1 + 200)) {
                    /* catch() { ... } // from try @ 0056ff04 with catch @ 0056ff1c */
    lVar8 = 0;
    do {
      plVar1 = (long *)((long)plVar3 + lVar8);
      lVar8 = lVar8 + 8;
      *(undefined8 *)(*plVar1 + 0x28) = 0;
      plVar1 = plVar3;
    } while ((long)plVar3 + lVar8 != *(long *)(param_1 + 200));
    for (; lVar8 != 0; lVar8 = lVar8 + -8) {
      plVar6 = (long *)*plVar1;
      if ((plVar6 != (long *)0x0) &&
         (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
                    /* catch() { ... } // from try @ 0056ff40 with catch @ 0056ff70 */
      plVar1 = plVar1 + 1;
                    /* try { // try from 0056ff68 to 0066ff83 has its CatchHandler @ 0056feb8 */
    }
  }
                    /* catch() { ... } // from try @ 0056fed0 with catch @ 0056ff74 */
  *(long **)(param_1 + 200) = plVar3;
  InitWithTemplate((SceneObject *)param_1,in_x8);
                    /* try { // try from 0056ff84 to 0066ff8f has its CatchHandler @ 0056ff90 */
  SetScene((SceneObject *)param_1,pSVar7);
                    /* catch() { ... } // from try @ 0056ff84 with catch @ 0056ff90 */
                    /* try { // try from 0056ff94 to 0066ff97 has its CatchHandler @ 0056ff9c */
                    /* catch() { ... } // from try @ 0056ff94 with catch @ 0056ff9c */
  return;
}


