/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e68f0
 * Function: Caver::Proto::GameData::~GameData
 * Signature: undefined __thiscall ~GameData(GameData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::~GameData() */

void __thiscall Caver::Proto::GameData::~GameData(GameData *this)

{
  GameData *pGVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(this + 0xfc);
  pGVar1 = *(GameData **)(this + 0xf0);
  *(undefined **)this = PTR_vtable_007e6eb0 + 0x10;
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0xfc);
        pGVar1 = *(GameData **)(this + 0xf0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x108) && (pGVar1 != (GameData *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0xc4);
  pGVar1 = *(GameData **)(this + 0xb8);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0xc4);
        pGVar1 = *(GameData **)(this + 0xb8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0xd0) && (pGVar1 != (GameData *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0x8c);
  pGVar1 = *(GameData **)(this + 0x80);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x8c);
        pGVar1 = *(GameData **)(this + 0x80);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x98) && (pGVar1 != (GameData *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0x54);
  pGVar1 = *(GameData **)(this + 0x48);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x54);
        pGVar1 = *(GameData **)(this + 0x48);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x60) && (pGVar1 != (GameData *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0x1c);
  pGVar1 = *(GameData **)(this + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x1c);
        pGVar1 = *(GameData **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x28) && (pGVar1 != (GameData *)0x0)) {
    operator_delete__(pGVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


