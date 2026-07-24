/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055df3c
 * Function: Caver::ObjectLibrary::RemoveProgram
 * Signature: undefined __thiscall RemoveProgram(ObjectLibrary * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::RemoveProgram(Caver::Program*) */

void __thiscall Caver::ObjectLibrary::RemoveProgram(ObjectLibrary *this,Program *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x68);
  while( true ) {
    if (*(undefined8 **)(this + 0x70) == puVar1) {
      return;
    }
                    /* catch() { ... } // from try @ 0055dc68 with catch @ 0055df5c */
    if ((Program *)*puVar1 == param_1) break;
    puVar1 = puVar1 + 2;
  }
  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::
  _M_erase((vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>
            *)(this + 0x68),puVar1);
  return;
}


