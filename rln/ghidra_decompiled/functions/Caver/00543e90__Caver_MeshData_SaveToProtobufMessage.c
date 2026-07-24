/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543e90
 * Function: Caver::MeshData::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MeshData * this, MeshData * param_1, uchar * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshData::SaveToProtobufMessage(Caver::Proto::MeshData*, unsigned char*) const */

void __thiscall
Caver::MeshData::SaveToProtobufMessage(MeshData *this,MeshData *param_1,uchar *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)this - 0x1400U < 7) {
                    /* try { // try from 00543ea4 to 00643f2b has its CatchHandler @ 00544a54 */
    *(int *)(param_1 + 0xc) = *(int *)this + -0x13ff;
    uVar2 = *(uint *)(param_1 + 0x1c) | 1;
    *(uint *)(param_1 + 0x1c) = uVar2;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  uVar1 = *(undefined4 *)(this + 4);
  *(uint *)(param_1 + 0x1c) = uVar2 | 2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(this + 8);
  *(uint *)(param_1 + 0x1c) = uVar2 | 6;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (param_2 == (uchar *)0x0) {
    iVar3 = (int)*(undefined8 *)(this + 0x10);
  }
  else {
    if (*(long *)(this + 0x10) == 0) {
      return;
    }
    iVar3 = (int)*(long *)(this + 0x10) - (int)param_2;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  *(uint *)(param_1 + 0x1c) = uVar2 | 0xe;
  return;
}


