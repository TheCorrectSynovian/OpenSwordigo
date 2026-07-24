/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d820
 * Function: Caver::VertexArrayObject::SetVertexAttribArrayEnabled
 * Signature: undefined __cdecl SetVertexAttribArrayEnabled(RenderingContext * param_1, uint param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext*, unsigned int,
   bool) */

void Caver::VertexArrayObject::SetVertexAttribArrayEnabled
               (RenderingContext *param_1,uint param_2,bool param_3)

{
  if (*(int *)param_1 != 0) {
    return;
  }
  if (param_3) {
    glEnableClientState();
    return;
  }
  glDisableClientState(param_2);
  return;
}


