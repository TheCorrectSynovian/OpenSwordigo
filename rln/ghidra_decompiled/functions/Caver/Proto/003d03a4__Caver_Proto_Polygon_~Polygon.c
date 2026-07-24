/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d03a4
 * Function: Caver::Proto::Polygon::~Polygon
 * Signature: undefined __thiscall ~Polygon(Polygon * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::~Polygon() */

void __thiscall Caver::Proto::Polygon::~Polygon(Polygon *this)

{
  Polygon *pPVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(this + 0x1c);
  pPVar1 = *(Polygon **)(this + 0x10);
  *(undefined **)this = PTR_vtable_007e7600 + 0x10;
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pPVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x1c);
        pPVar1 = *(Polygon **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pPVar1 != this + 0x28) && (pPVar1 != (Polygon *)0x0)) {
    operator_delete__(pPVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


