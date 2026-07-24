/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00546878
 * Function: Caver::MeshBuilder::InitializeTexCoordSet
 * Signature: undefined __thiscall InitializeTexCoordSet(MeshBuilder * this, int param_1, DataType param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitializeTexCoordSet(int, Caver::DataType, int) */

void __thiscall
Caver::MeshBuilder::InitializeTexCoordSet
          (MeshBuilder *this,int param_1,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(long *)(*(long *)this + 0x50) + (long)param_1 * 0x18);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  return;
}


