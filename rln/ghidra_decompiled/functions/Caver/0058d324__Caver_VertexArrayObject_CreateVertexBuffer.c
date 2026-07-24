/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d324
 * Function: Caver::VertexArrayObject::CreateVertexBuffer
 * Signature: undefined __thiscall CreateVertexBuffer(VertexArrayObject * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::CreateVertexBuffer(int) */

void __thiscall Caver::VertexArrayObject::CreateVertexBuffer(VertexArrayObject *this,int param_1)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  if ((long)uVar2 < 0) {
    uVar2 = 0xffffffffffffffff;
  }
  *(int *)this = param_1;
                    /* try { // try from 0058d344 to 0068d35f has its CatchHandler @ 0058d294 */
  pvVar1 = operator_new__(uVar2);
  *(void **)(this + 8) = pvVar1;
                    /* catch() { ... } // from try @ 0058d31c with catch @ 0058d34c */
                    /* catch() { ... } // from try @ 0058d2ac with catch @ 0058d350 */
  return;
}


