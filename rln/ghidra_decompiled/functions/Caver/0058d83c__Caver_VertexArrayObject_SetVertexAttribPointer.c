/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d83c
 * Function: Caver::VertexArrayObject::SetVertexAttribPointer
 * Signature: undefined __cdecl SetVertexAttribPointer(RenderingContext * param_1, uint param_2, int param_3, DataType param_4, int param_5, void * param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext*, unsigned int, int,
   Caver::DataType, int, void const*) */

void Caver::VertexArrayObject::SetVertexAttribPointer
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  if (*param_1 == 0) {
                    /* catch() { ... } // from try @ 0058d7b0 with catch @ 0058d85c */
    switch(param_2) {
    case 0x8074:
                    /* try { // try from 0058d87c to 0068d8a3 has its CatchHandler @ 0058d8ec */
      glVertexPointer(param_3,param_4,param_5,param_6);
      return;
    case 0x8075:
      glNormalPointer(param_4,param_5,param_6);
      return;
    case 0x8076:
      glColorPointer(param_3,param_4,param_5,param_6);
      return;
    case 0x8078:
                    /* try { // try from 0058d8a4 to 0068d8d3 has its CatchHandler @ 0058d604 */
                    /* catch() { ... } // from try @ 0058d734 with catch @ 0058d8a8 */
      glTexCoordPointer(param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}


