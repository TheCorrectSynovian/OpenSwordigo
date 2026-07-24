/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fd284
 * Function: Caver::Proto::ObjectLibrary::~ObjectLibrary
 * Signature: undefined __thiscall ~ObjectLibrary(ObjectLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::~ObjectLibrary() */

void __thiscall Caver::Proto::ObjectLibrary::~ObjectLibrary(ObjectLibrary *this)

{
  ~ObjectLibrary(this);
  operator_delete(this);
  return;
}


