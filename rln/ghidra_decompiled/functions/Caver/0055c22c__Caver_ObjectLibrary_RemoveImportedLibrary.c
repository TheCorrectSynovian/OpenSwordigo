/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055c22c
 * Function: Caver::ObjectLibrary::RemoveImportedLibrary
 * Signature: undefined __thiscall RemoveImportedLibrary(ObjectLibrary * this, ObjectLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::RemoveImportedLibrary(Caver::ObjectLibrary*) */

void __thiscall
Caver::ObjectLibrary::RemoveImportedLibrary(ObjectLibrary *this,ObjectLibrary *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  while( true ) {
    if (*(undefined8 **)(this + 0x40) == puVar1) {
      return;
    }
    if ((ObjectLibrary *)*puVar1 == param_1) break;
    puVar1 = puVar1 + 2;
  }
  std::
  vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
  ::_M_erase((vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
              *)(this + 0x38),puVar1);
  return;
}


