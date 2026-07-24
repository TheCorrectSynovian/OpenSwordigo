/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d554
 * Function: Caver::VertexArrayObject::UpdateVertexBufferObjectSubData
 * Signature: undefined __thiscall UpdateVertexBufferObjectSubData(VertexArrayObject * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int, int) */

void __thiscall
Caver::VertexArrayObject::UpdateVertexBufferObjectSubData
          (VertexArrayObject *this,int param_1,int param_2)

{
                    /* try { // try from 0058d554 to 0068d5cf has its CatchHandler @ 0058d4e4 */
  if (0 < *(int *)(this + 0x20)) {
    glBindBuffer(0x8892,*(undefined4 *)(this + (long)*(int *)(this + 0x24) * 4 + 0x28),param_2);
    glBufferSubData(0x8892,(long)param_1,(long)param_2,*(undefined8 *)(this + 8));
                    /* catch() { ... } // from try @ 0058d550 with catch @ 0058d5b0 */
    glBindBuffer(0x8892,0);
    return;
  }
  return;
}


