/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f321c
 * Function: Caver::Proto::CharacterState::~CharacterState
 * Signature: undefined __thiscall ~CharacterState(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::~CharacterState() */

void __thiscall Caver::Proto::CharacterState::~CharacterState(CharacterState *this)

{
  CharacterState *pCVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e59a0 + 0x10;
  SharedDtor(this);
  pCVar1 = *(CharacterState **)(this + 0x68);
  if (0 < *(int *)(this + 0x74)) {
    lVar4 = 0;
    do {
      google::protobuf::internal::StringTypeHandlerBase::Delete(*(string **)(pCVar1 + lVar4 * 8));
      pCVar1 = *(CharacterState **)(this + 0x68);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x74));
  }
  if ((pCVar1 != this + 0x80) && (pCVar1 != (CharacterState *)0x0)) {
    operator_delete__(pCVar1);
  }
  iVar3 = *(int *)(this + 0x2c);
  pCVar1 = *(CharacterState **)(this + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pCVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x2c);
        pCVar1 = *(CharacterState **)(this + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pCVar1 != this + 0x38) && (pCVar1 != (CharacterState *)0x0)) {
    operator_delete__(pCVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


