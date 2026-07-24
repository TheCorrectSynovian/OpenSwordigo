/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054689c
 * Function: Caver::MeshBuilder::InitializeIndices
 * Signature: undefined __thiscall InitializeIndices(MeshBuilder * this, DataType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitializeIndices(Caver::DataType) */

void __thiscall Caver::MeshBuilder::InitializeIndices(MeshBuilder *this,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = DAT_00689bc8;
  lVar2 = *(long *)this;
  *(undefined4 *)(lVar2 + 8) = param_2;
  *(undefined8 *)(lVar2 + 0xc) = uVar1;
                    /* try { // try from 005468b0 to 006468b7 has its CatchHandler @ 00546ac4 */
  *(undefined8 *)(lVar2 + 0x18) = 0;
  return;
}


