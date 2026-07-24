/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c109c
 * Function: Caver::ProgramState::~ProgramState
 * Signature: undefined __thiscall ~ProgramState(ProgramState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::~ProgramState() */

void __thiscall Caver::ProgramState::~ProgramState(ProgramState *this)

{
  int iVar1;
  long *plVar2;
  lua_State *plVar3;
  ProgramState *pPVar4;
  long lVar5;
  ProgramState *pPVar6;
  ProgramState *pPVar7;
  
  pPVar7 = this + 0x10;
  for (pPVar6 = *(ProgramState **)pPVar7; pPVar7 != pPVar6; pPVar6 = *(ProgramState **)pPVar6) {
    plVar2 = *(long **)(*(long *)(pPVar6 + 0x10) + 0x20);
    *(undefined8 *)(*(long *)(pPVar6 + 0x10) + 0x20) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar3 = *(lua_State **)this;
  if (plVar3 != (lua_State *)0x0) {
    if (*(long *)(this + 8) == 0) {
      lua_close(plVar3);
    }
    else {
      ProgramTable::SetPointerForPointerKey((ProgramTable *)(this + 0x38),plVar3,(void *)0x0);
      ProgramTable::SetPointerForPointerKey
                ((ProgramTable *)(this + 0x28),*(void **)this,(void *)0x0);
    }
  }
  pPVar6 = *(ProgramState **)pPVar7;
  for (pPVar4 = pPVar6; pPVar7 != pPVar4; pPVar4 = *(ProgramState **)pPVar4) {
                    /* try { // try from 005c1148 to 006c1163 has its CatchHandler @ 005c15ac */
    **(undefined8 **)(pPVar4 + 0x10) = 0;
  }
  plVar2 = *(long **)(this + 0x20);
                    /* try { // try from 005c1164 to 006c119f has its CatchHandler @ 005c0f08 */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
    pPVar6 = *(ProgramState **)pPVar7;
  }
  while (pPVar6 != pPVar7) {
    plVar2 = *(long **)(pPVar6 + 0x18);
    pPVar4 = *(ProgramState **)pPVar6;
                    /* try { // try from 005c11a0 to 006c11bb has its CatchHandler @ 005c1574 */
    if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar5 = plVar2[2];
                    /* try { // try from 005c11bc to 006c11f7 has its CatchHandler @ 005c0f08 */
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    operator_delete(pPVar6);
    pPVar6 = pPVar4;
  }
                    /* try { // try from 005c11f8 to 006c1213 has its CatchHandler @ 005c153c */
  return;
}


