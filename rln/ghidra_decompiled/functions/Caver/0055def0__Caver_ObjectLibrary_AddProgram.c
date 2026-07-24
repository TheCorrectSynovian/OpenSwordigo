/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055def0
 * Function: Caver::ObjectLibrary::AddProgram
 * Signature: undefined __thiscall AddProgram(ObjectLibrary * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::AddProgram(boost::shared_ptr<Caver::Program> const&) */

void __thiscall Caver::ObjectLibrary::AddProgram(ObjectLibrary *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(this + 0x70);
                    /* try { // try from 0055def8 to 0065dfcf has its CatchHandler @ 0055dc24 */
                    /* catch() { ... } // from try @ 0055de80 with catch @ 0055defc */
  if (puVar1 != *(undefined8 **)(this + 0x78)) {
                    /* catch() { ... } // from try @ 0055dd88 with catch @ 0055df00 */
    *puVar1 = *(undefined8 *)param_1;
    lVar2 = *(long *)(param_1 + 8);
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
    *(undefined8 **)(this + 0x70) = puVar1 + 2;
    return;
  }
  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::
  _M_insert_aux((vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>
                 *)(this + 0x68),puVar1,param_1);
  return;
}


