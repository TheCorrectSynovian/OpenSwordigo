/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003da384
 * Function: Caver::Proto::EditorViewState::~EditorViewState
 * Signature: undefined __thiscall ~EditorViewState(EditorViewState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::~EditorViewState() */

void __thiscall Caver::Proto::EditorViewState::~EditorViewState(EditorViewState *this)

{
  EditorViewState *pEVar1;
  long lVar2;
  
  *(undefined **)this = PTR_vtable_007e48d8 + 0x10;
  SharedDtor(this);
  pEVar1 = *(EditorViewState **)(this + 0x18);
  if (0 < *(int *)(this + 0x24)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::StringTypeHandlerBase::Delete(*(string **)(pEVar1 + lVar2 * 8));
      pEVar1 = *(EditorViewState **)(this + 0x18);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x24));
  }
  if ((pEVar1 != this + 0x30) && (pEVar1 != (EditorViewState *)0x0)) {
    operator_delete__(pEVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


