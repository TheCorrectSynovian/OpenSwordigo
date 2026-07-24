/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d358
 * Function: Caver::VertexArrayObject::CreateIndexBuffer
 * Signature: undefined __thiscall CreateIndexBuffer(VertexArrayObject * this, DataType param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType, int) */

void __thiscall
Caver::VertexArrayObject::CreateIndexBuffer(VertexArrayObject *this,undefined4 param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  
                    /* try { // try from 0058d360 to 0068d36b has its CatchHandler @ 0058d36c */
                    /* catch() { ... } // from try @ 0058d360 with catch @ 0058d36c */
                    /* try { // try from 0058d370 to 0068d373 has its CatchHandler @ 0058d378 */
  *(undefined4 *)(this + 0x10) = param_2;
  *(int *)(this + 0x14) = param_3;
  iVar1 = SizeOfDataType(param_2);
                    /* catch() { ... } // from try @ 0058d370 with catch @ 0058d378 */
  uVar3 = (ulong)(iVar1 * param_3);
  if ((long)uVar3 < 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar3);
  *(void **)(this + 0x18) = pvVar2;
  return;
}


