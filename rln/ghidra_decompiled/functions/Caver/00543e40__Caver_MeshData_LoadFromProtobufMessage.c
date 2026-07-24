/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543e40
 * Function: Caver::MeshData::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MeshData * this, MeshData * param_1, uchar * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshData::LoadFromProtobufMessage(Caver::Proto::MeshData const&, unsigned char*) */

void __thiscall
Caver::MeshData::LoadFromProtobufMessage(MeshData *this,MeshData *param_1,uchar *param_2)

{
  uchar *puVar1;
  int iVar2;
  
  if (((byte)param_1[0x1c] & 1) == 0) {
    iVar2 = 0;
  }
  else {
    if (6 < *(int *)(param_1 + 0xc) - 1U) goto LAB_00543e6c;
    iVar2 = *(int *)(param_1 + 0xc) + 0x13ff;
  }
  *(int *)this = iVar2;
LAB_00543e6c:
  *(undefined8 *)(this + 4) = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 00543e84 to 00643e87 has its CatchHandler @ 005448b8 */
  puVar1 = (uchar *)0x0;
  if ((*(uint *)(param_1 + 0x1c) & 8) != 0) {
    puVar1 = param_2 + *(int *)(param_1 + 0x18);
  }
  *(uchar **)(this + 0x10) = puVar1;
  return;
}


