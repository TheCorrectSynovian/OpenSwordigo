/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c15fc
 * Function: Caver::ProgramState::Update
 * Signature: undefined __thiscall Update(ProgramState * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::Update(float) */

void __thiscall Caver::ProgramState::Update(ProgramState *this,float param_1)

{
  int iVar1;
  ProgramState *pPVar2;
  long *plVar3;
  long lVar4;
  ProgramState *pPVar5;
  float fVar6;
  float fVar7;
  
  if ((this[0x51] != (ProgramState)0x0) || (this[0x52] != (ProgramState)0x0)) {
    if (*(SceneObject **)(this + 0x20) != (SceneObject *)0x0) {
      fVar6 = (float)SceneObject::updateSpeedMultiplier(*(SceneObject **)(this + 0x20));
      param_1 = fVar6 * param_1;
    }
    fVar6 = *(float *)(this + 0x54);
                    /* catch() { ... } // from try @ 005c12f0 with catch @ 005c1654 */
    if ((*(int *)(this + 0x48) == 1) &&
       (fVar7 = *(float *)(this + 0x4c) - param_1 * fVar6, *(float *)(this + 0x4c) = fVar7,
       fVar7 < 0.0)) {
                    /* try { // try from 005c1668 to 006c1693 has its CatchHandler @ 005c1668
                       catch() { ... } // from try @ 005c1668 with catch @ 005c1668
                       catch() { ... } // from try @ 005c16a8 with catch @ 005c1668 */
      *(undefined4 *)(this + 0x48) = 0;
      iVar1 = lua_resume(*(lua_State **)this,0);
      if (iVar1 != 1) {
        this[0x53] = (ProgramState)0x1;
      }
    }
    pPVar5 = *(ProgramState **)(this + 0x10);
    while (this + 0x10 != pPVar5) {
                    /* try { // try from 005c1694 to 006c16a7 has its CatchHandler @ 005c16cc */
      pPVar2 = *(ProgramState **)(pPVar5 + 0x10);
      if ((this[0x50] == (ProgramState)0x0) || (pPVar2[0x52] != (ProgramState)0x0)) {
                    /* try { // try from 005c16a8 to 006c173b has its CatchHandler @ 005c1668 */
        Update(pPVar2,param_1 * fVar6);
        pPVar2 = *(ProgramState **)(pPVar5 + 0x10);
      }
      if (pPVar2[0x53] == (ProgramState)0x0) {
        pPVar5 = *(ProgramState **)pPVar5;
      }
      else {
        plVar3 = *(long **)(pPVar2 + 0x20);
        *(undefined8 *)(pPVar2 + 0x20) = 0;
                    /* catch() { ... } // from try @ 005c1694 with catch @ 005c16cc */
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        pPVar2 = *(ProgramState **)pPVar5;
        FUN_0062a9c8(pPVar5);
        plVar3 = *(long **)(pPVar5 + 0x18);
        if ((plVar3 != (long *)0x0) && (lVar4 = plVar3[1], plVar3[1] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar4 = plVar3[2];
          plVar3[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        operator_delete(pPVar5);
        pPVar5 = pPVar2;
      }
    }
  }
  return;
}


