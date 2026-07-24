/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003676ac
 * Function: Caver::EntityActionComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::HandleMessage(int, void*) */

undefined8 Caver::EntityActionComponent::HandleMessage(int param_1,void *param_2)

{
  ulong uVar1;
  ProgramState *this;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar2 = (int)param_2;
  uVar1 = (ulong)(uint)param_1;
  if (iVar2 == 2) {
    this = *(ProgramState **)(uVar1 + 0x98);
    if (this == (ProgramState *)0x0) {
      return 0;
    }
    if (this[0x53] != (ProgramState)0x0) {
      return 0;
    }
    ProgramState::Abort(this);
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 != 5) {
        return 0;
      }
      if (*(long *)(uVar1 + 0x98) == 0) {
        return 0;
      }
      *(undefined1 *)(*(long *)(uVar1 + 0x98) + 0x51) = 1;
      return 0;
    }
    lVar3 = *(long *)(uVar1 + 0x98);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(char *)(lVar3 + 0x53) == '\0') {
      *(undefined1 *)(lVar3 + 0x51) = 0;
      return 0;
    }
  }
  plVar4 = *(long **)(uVar1 + 0xa0);
  *(undefined8 *)(uVar1 + 0x98) = 0;
  *(undefined8 *)(uVar1 + 0xa0) = 0;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return 0;
}


