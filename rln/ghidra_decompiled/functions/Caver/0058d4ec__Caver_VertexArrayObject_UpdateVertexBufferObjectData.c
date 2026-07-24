/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d4ec
 * Function: Caver::VertexArrayObject::UpdateVertexBufferObjectData
 * Signature: undefined __thiscall UpdateVertexBufferObjectData(VertexArrayObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::UpdateVertexBufferObjectData() */

void __thiscall Caver::VertexArrayObject::UpdateVertexBufferObjectData(VertexArrayObject *this)

{
  int iVar1;
  
  if (0 < *(int *)(this + 0x20)) {
    iVar1 = *(int *)this;
    glBindBuffer(0x8892,*(undefined4 *)(this + (long)*(int *)(this + 0x24) * 4 + 0x28));
    glBufferSubData(0x8892,0,(long)iVar1,*(undefined8 *)(this + 8));
    glBindBuffer(0x8892,0);
    return;
  }
                    /* try { // try from 0058d550 to 0068d553 has its CatchHandler @ 0058d5b0 */
  return;
}


