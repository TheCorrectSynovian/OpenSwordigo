/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df120
 * Function: Caver::Proto::Map::~Map
 * Signature: undefined __thiscall ~Map(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::~Map() */

void __thiscall Caver::Proto::Map::~Map(Map *this)

{
  Map *pMVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(this + 0x1c);
  pMVar1 = *(Map **)(this + 0x10);
  *(undefined **)this = PTR_vtable_007e65d0 + 0x10;
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pMVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x1c);
        pMVar1 = *(Map **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pMVar1 != this + 0x28) && (pMVar1 != (Map *)0x0)) {
    operator_delete__(pMVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


