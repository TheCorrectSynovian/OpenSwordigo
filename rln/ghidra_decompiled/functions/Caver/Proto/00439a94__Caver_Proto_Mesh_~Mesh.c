/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00439a94
 * Function: Caver::Proto::Mesh::~Mesh
 * Signature: undefined __thiscall ~Mesh(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::~Mesh() */

void __thiscall Caver::Proto::Mesh::~Mesh(Mesh *this)

{
  ~Mesh(this);
                    /* catch() { ... } // from try @ 00439a0c with catch @ 00439aa8 */
  operator_delete(this);
  return;
}


