/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d45c0
 * Function: Caver::Proto::Font::~Font
 * Signature: undefined __thiscall ~Font(Font * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::~Font() */

void __thiscall Caver::Proto::Font::~Font(Font *this)

{
  Font *pFVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e6808 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x2c);
  pFVar1 = *(Font **)(this + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pFVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x2c);
        pFVar1 = *(Font **)(this + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pFVar1 != this + 0x38) && (pFVar1 != (Font *)0x0)) {
    operator_delete__(pFVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


