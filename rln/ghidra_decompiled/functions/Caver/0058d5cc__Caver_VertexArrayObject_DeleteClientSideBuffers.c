/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d5cc
 * Function: Caver::VertexArrayObject::DeleteClientSideBuffers
 * Signature: undefined __thiscall DeleteClientSideBuffers(VertexArrayObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::DeleteClientSideBuffers() */

undefined8 __thiscall Caver::VertexArrayObject::DeleteClientSideBuffers(VertexArrayObject *this)

{
  undefined8 uVar1;
  
                    /* try { // try from 0058d5d0 to 0068d5f7 has its CatchHandler @ 0058d600 */
  if (*(int *)(this + 0x20) < 1) {
    uVar1 = 0;
  }
  else {
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
                    /* try { // try from 0058d5f8 to 0068d603 has its CatchHandler @ 0058d4e4 */
    if (*(void **)(this + 0x18) != (void *)0x0) {
                    /* catch() { ... } // from try @ 0058d5d0 with catch @ 0058d600 */
      operator_delete__(*(void **)(this + 0x18));
                    /* try { // try from 0058d604 to 0068d633 has its CatchHandler @ 0058d604
                       catch() { ... } // from try @ 0058d604 with catch @ 0058d604
                       catch() { ... } // from try @ 0058d638 with catch @ 0058d604
                       catch() { ... } // from try @ 0058d748 with catch @ 0058d604
                       catch() { ... } // from try @ 0058d7f0 with catch @ 0058d604
                       catch() { ... } // from try @ 0058d8a4 with catch @ 0058d604
                       catch() { ... } // from try @ 0058d8e0 with catch @ 0058d604 */
      *(undefined8 *)(this + 0x18) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


