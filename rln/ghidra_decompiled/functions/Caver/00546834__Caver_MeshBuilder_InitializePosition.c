/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00546834
 * Function: Caver::MeshBuilder::InitializePosition
 * Signature: undefined __thiscall InitializePosition(MeshBuilder * this, DataType param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitializePosition(Caver::DataType, int) */

void __thiscall
Caver::MeshBuilder::InitializePosition(MeshBuilder *this,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)this;
                    /* catch() { ... } // from try @ 00546808 with catch @ 00546838 */
  *(undefined4 *)(lVar1 + 0x20) = param_2;
  *(undefined4 *)(lVar1 + 0x24) = param_3;
                    /* catch() { ... } // from try @ 00546798 with catch @ 0054683c */
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}


