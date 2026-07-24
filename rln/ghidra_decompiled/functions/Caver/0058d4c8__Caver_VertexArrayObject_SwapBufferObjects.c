/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d4c8
 * Function: Caver::VertexArrayObject::SwapBufferObjects
 * Signature: undefined __thiscall SwapBufferObjects(VertexArrayObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::SwapBufferObjects() */

void __thiscall Caver::VertexArrayObject::SwapBufferObjects(VertexArrayObject *this)

{
  int iVar1;
  
  if (1 < *(int *)(this + 0x20)) {
    iVar1 = 0;
    if (*(int *)(this + 0x24) + 1 < *(int *)(this + 0x20)) {
      iVar1 = *(int *)(this + 0x24) + 1;
    }
                    /* catch() { ... } // from try @ 0058d554 with catch @ 0058d4e4
                       catch() { ... } // from try @ 0058d5f8 with catch @ 0058d4e4 */
    *(int *)(this + 0x24) = iVar1;
  }
  return;
}


