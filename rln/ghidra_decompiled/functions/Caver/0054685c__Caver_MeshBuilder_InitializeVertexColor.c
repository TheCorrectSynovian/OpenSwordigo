/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054685c
 * Function: Caver::MeshBuilder::InitializeVertexColor
 * Signature: undefined __thiscall InitializeVertexColor(MeshBuilder * this, DataType param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitializeVertexColor(Caver::DataType, int) */

void __thiscall
Caver::MeshBuilder::InitializeVertexColor(MeshBuilder *this,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
                    /* try { // try from 0054685c to 0064685f has its CatchHandler @ 00546864 */
  lVar1 = *(long *)this;
  *(undefined4 *)(lVar1 + 0x58) = param_2;
  *(undefined4 *)(lVar1 + 0x5c) = param_3;
                    /* catch() { ... } // from try @ 0054685c with catch @ 00546864 */
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  return;
}


