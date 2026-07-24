/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605018
 * Function: CPVRTModelPOD::FlushCache
 * Signature: undefined __thiscall FlushCache(CPVRTModelPOD * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::FlushCache() */

void __thiscall CPVRTModelPOD::FlushCache(CPVRTModelPOD *this)

{
  size_t __n;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = *(undefined8 **)(this + 0x80);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  lVar2 = *(long *)(this + 0x80);
  if (*(int *)(this + 0x48) == 0) {
    __n = 0;
  }
  else {
                    /* try { // try from 00605044 to 0070506b has its CatchHandler @ 00605214 */
    lVar3 = 0;
    lVar4 = 0;
    uVar5 = 0;
    do {
      GetWorldMatrixNoCache
                (this,(PVRTMATRIXf *)(*(long *)(lVar2 + 0x20) + lVar4),
                 (SPODNode *)(*(long *)(this + 0x50) + lVar3));
                    /* try { // try from 0060506c to 0070511f has its CatchHandler @ 00604a8c */
      lVar2 = *(long *)(this + 0x80);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
      lVar3 = lVar3 + 0x60;
    } while (uVar5 < *(uint *)(this + 0x48));
    __n = (ulong)*(uint *)(this + 0x48) << 6;
  }
  memcpy(*(void **)(lVar2 + 0x18),*(void **)(lVar2 + 0x20),__n);
  memset(*(void **)(*(long *)(this + 0x80) + 0x10),0,(ulong)*(uint *)(this + 0x48) << 2);
  return;
}


