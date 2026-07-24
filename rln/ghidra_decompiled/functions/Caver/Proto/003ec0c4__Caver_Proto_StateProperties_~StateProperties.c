/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec0c4
 * Function: Caver::Proto::StateProperties::~StateProperties
 * Signature: undefined __thiscall ~StateProperties(StateProperties * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::~StateProperties() */

void __thiscall Caver::Proto::StateProperties::~StateProperties(StateProperties *this)

{
  StateProperties *pSVar1;
  long lVar2;
  
  pSVar1 = *(StateProperties **)(this + 0x10);
  *(undefined **)this = PTR_vtable_007e6290 + 0x10;
  if (0 < *(int *)(this + 0x1c)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::StringTypeHandlerBase::Delete(*(string **)(pSVar1 + lVar2 * 8));
      pSVar1 = *(StateProperties **)(this + 0x10);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x1c));
  }
  if ((pSVar1 != this + 0x28) && (pSVar1 != (StateProperties *)0x0)) {
    operator_delete__(pSVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


