/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003edbc8
 * Function: Caver::Proto::GameState::~GameState
 * Signature: undefined __thiscall ~GameState(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::~GameState() */

void __thiscall Caver::Proto::GameState::~GameState(GameState *this)

{
  GameState *pGVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e5898 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0xec);
  pGVar1 = *(GameState **)(this + 0xe0);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0xec);
        pGVar1 = *(GameState **)(this + 0xe0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0xf8) && (pGVar1 != (GameState *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0x8c);
  pGVar1 = *(GameState **)(this + 0x80);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x8c);
        pGVar1 = *(GameState **)(this + 0x80);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x98) && (pGVar1 != (GameState *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0x24);
  pGVar1 = *(GameState **)(this + 0x18);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x24);
        pGVar1 = *(GameState **)(this + 0x18);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x30) && (pGVar1 != (GameState *)0x0)) {
    operator_delete__(pGVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


