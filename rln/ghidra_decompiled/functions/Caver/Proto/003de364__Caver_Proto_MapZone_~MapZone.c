/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003de364
 * Function: Caver::Proto::MapZone::~MapZone
 * Signature: undefined __thiscall ~MapZone(MapZone * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapZone::~MapZone() */

void __thiscall Caver::Proto::MapZone::~MapZone(MapZone *this)

{
  MapZone *pMVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e7268 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x2c);
  pMVar1 = *(MapZone **)(this + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pMVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x2c);
        pMVar1 = *(MapZone **)(this + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pMVar1 != this + 0x38) && (pMVar1 != (MapZone *)0x0)) {
    operator_delete__(pMVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


