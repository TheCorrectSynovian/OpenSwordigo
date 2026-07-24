/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332ad8
 * Function: Caver::ProgramComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(ProgramComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::ProgramComponent::HandleMessage(ProgramComponent *this,int param_1,void *param_2)

{
  ProgramState *this_00;
  long lVar1;
  long *plVar2;
  
  switch(param_1) {
  case 2:
    if (*(int *)(this + 0x74) != 7) {
      this_00 = *(ProgramState **)(this + 0xb0);
      if (this_00 == (ProgramState *)0x0) {
        return 0;
      }
      if (this_00[0x53] != (ProgramState)0x0) {
        return 0;
      }
      ProgramState::Abort(this_00);
      plVar2 = *(long **)(this + 0xb8);
      *(undefined8 *)(this + 0xb0) = 0;
      *(undefined8 *)(this + 0xb8) = 0;
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      lVar1 = plVar2[1];
      plVar2[1] = lVar1 + -1;
      if (lVar1 + -1 != 0) {
        return 0;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar1 = plVar2[2];
      plVar2[2] = lVar1 + -1;
      if (lVar1 + -1 != 0) {
        return 0;
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return 0;
    }
    break;
  default:
    goto switchD_00332b04_caseD_3;
  case 5:
    if (*(int *)(this + 0x74) != 1) {
      return 0;
    }
    lVar1 = *(long *)(this + 0xb0);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x53) == '\0')) {
      *(undefined1 *)(lVar1 + 0x51) = 1;
      return 0;
    }
    break;
  case 6:
    if ((*(long *)(this + 0xb0) != 0) && (*(char *)(*(long *)(this + 0xb0) + 0x53) != '\0')) {
      plVar2 = *(long **)(this + 0xb8);
      *(undefined8 *)(this + 0xb0) = 0;
      *(undefined8 *)(this + 0xb8) = 0;
      if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar1 = plVar2[2];
        plVar2[2] = lVar1 + -1;
        if (lVar1 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
    }
    if (*(int *)(this + 0x74) == 1) {
      if (*(long *)(this + 0xb0) == 0) {
        return 0;
      }
      *(undefined1 *)(*(long *)(this + 0xb0) + 0x51) = 0;
      return 0;
    }
    if (*(int *)(this + 0x74) != 2) {
      return 0;
    }
    break;
  case 0xd:
    if (*(int *)(this + 0x74) != 10) {
      return 0;
    }
    break;
  case 0xe:
    if (*(char *)((long)param_2 + 0x24) == '\0') {
      if (*(int *)(this + 0x74) != 8) {
        return 0;
      }
    }
    else if (*(int *)(this + 0x74) != 9) {
      return 0;
    }
    break;
  case 0x14:
    if (*(int *)(this + 0x74) != 4) {
      return 0;
    }
  }
  Execute(this);
switchD_00332b04_caseD_3:
  return 0;
}


