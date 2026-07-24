/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005484f8
 * Function: Caver::MeshInstance::MeshInstance
 * Signature: undefined __thiscall MeshInstance(MeshInstance * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::MeshInstance() */

void __thiscall Caver::MeshInstance::MeshInstance(MeshInstance *this)

{
                    /* try { // try from 0054850c to 00648527 has its CatchHandler @ 0054845c */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 005484e4 with catch @ 00548514 */
  *(undefined8 *)(this + 0x60) = 0;
                    /* catch() { ... } // from try @ 00548474 with catch @ 00548518 */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (MeshInstance)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
                    /* try { // try from 00548528 to 00648533 has its CatchHandler @ 00548534 */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x58) = 0;
                    /* catch() { ... } // from try @ 00548528 with catch @ 00548534 */
  VertexArrayObject::VertexArrayObject((VertexArrayObject *)(this + 0x68));
                    /* try { // try from 00548538 to 0064853b has its CatchHandler @ 00548540 */
  *(undefined2 *)(this + 0xb0) = 0;
  this[0xb2] = (MeshInstance)0x0;
                    /* catch() { ... } // from try @ 00548538 with catch @ 00548540 */
  *(undefined8 *)(this + 0xb8) = 0;
  return;
}


