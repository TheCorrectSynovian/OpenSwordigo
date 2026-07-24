/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e55ec
 * Function: Caver::Proto::GameOptions::~GameOptions
 * Signature: undefined __thiscall ~GameOptions(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::~GameOptions() */

void __thiscall Caver::Proto::GameOptions::~GameOptions(GameOptions *this)

{
  GameOptions *pGVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e5708 + 0x10;
  if (*(GameOptions **)PTR_default_instance__007e6d28 != this) {
    if (*(long **)(this + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x58) + 8))();
    }
    if (*(long **)(this + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x60) + 8))();
    }
  }
  iVar3 = *(int *)(this + 0x1c);
  pGVar1 = *(GameOptions **)(this + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x1c);
        pGVar1 = *(GameOptions **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x28) && (pGVar1 != (GameOptions *)0x0)) {
    operator_delete__(pGVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


