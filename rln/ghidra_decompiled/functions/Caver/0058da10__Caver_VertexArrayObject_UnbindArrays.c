/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058da10
 * Function: Caver::VertexArrayObject::UnbindArrays
 * Signature: undefined __cdecl UnbindArrays(RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::UnbindArrays(Caver::RenderingContext*) */

void Caver::VertexArrayObject::UnbindArrays(RenderingContext *param_1)

{
  if (*(int *)(param_1 + (long)*(int *)(param_1 + 0x24) * 4 + 0x40) == 0) {
    if (*(int *)(param_1 + (long)*(int *)(param_1 + 0x24) * 4 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 0058d968 with catch @ 0058da48 */
      glBindBuffer(0x8892,0);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      glBindBuffer(0x8893,0);
      return;
    }
  }
                    /* catch() { ... } // from try @ 0058d9a0 with catch @ 0058da38 */
  return;
}


