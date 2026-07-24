/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00546848
 * Function: Caver::MeshBuilder::InitializeNormal
 * Signature: undefined __thiscall InitializeNormal(MeshBuilder * this, DataType param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitializeNormal(Caver::DataType, int) */

void __thiscall
Caver::MeshBuilder::InitializeNormal(MeshBuilder *this,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)this;
                    /* try { // try from 0054684c to 00646857 has its CatchHandler @ 00546858 */
  *(undefined4 *)(lVar1 + 0x38) = param_2;
  *(undefined4 *)(lVar1 + 0x3c) = param_3;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
                    /* catch() { ... } // from try @ 0054684c with catch @ 00546858 */
  return;
}


