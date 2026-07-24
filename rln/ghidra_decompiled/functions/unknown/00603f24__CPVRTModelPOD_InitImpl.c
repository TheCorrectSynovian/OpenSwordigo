/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603f24
 * Function: CPVRTModelPOD::InitImpl
 * Signature: undefined __thiscall InitImpl(CPVRTModelPOD * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::InitImpl() */

undefined8 __thiscall CPVRTModelPOD::InitImpl(CPVRTModelPOD *this)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  PVRTMATRIXf *__src;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x80));
  }
  puVar2 = operator_new(0x30);
  *(undefined8 **)(this + 0x80) = puVar2;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  uVar1 = *(uint *)(this + 0x48);
  pvVar3 = operator_new__((ulong)uVar1 << 2);
  uVar7 = (ulong)uVar1 << 6;
  puVar2[2] = pvVar3;
                    /* catch() { ... } // from try @ 00601ed8 with catch @ 00603f78 */
                    /* catch() { ... } // from try @ 00601e84 with catch @ 00603f7c */
  pvVar3 = operator_new__(uVar7);
  puVar2[3] = pvVar3;
  __src = operator_new__(uVar7);
  puVar2[4] = __src;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = 0;
  if (uVar1 == 0) {
    __n = 0;
  }
  else {
    GetWorldMatrixNoCache(this,__src,*(SPODNode **)(this + 0x50));
    uVar7 = (ulong)*(uint *)(this + 0x48);
    lVar4 = *(long *)(this + 0x80);
    if (1 < *(uint *)(this + 0x48)) {
      uVar5 = 1;
      lVar6 = 0x40;
      lVar8 = 0x60;
      do {
                    /* catch() { ... } // from try @ 00601d60 with catch @ 00603fcc */
                    /* catch() { ... } // from try @ 00601d88 with catch @ 00603fdc
                       catch() { ... } // from try @ 00601e1c with catch @ 00603fdc */
        GetWorldMatrixNoCache
                  (this,(PVRTMATRIXf *)(*(long *)(lVar4 + 0x20) + lVar6),
                   (SPODNode *)(*(long *)(this + 0x50) + lVar8));
        uVar7 = (ulong)*(uint *)(this + 0x48);
        lVar4 = *(long *)(this + 0x80);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x40;
        lVar8 = lVar8 + 0x60;
      } while (uVar5 < uVar7);
    }
    pvVar3 = *(void **)(lVar4 + 0x18);
    __src = *(PVRTMATRIXf **)(lVar4 + 0x20);
    __n = uVar7 << 6;
  }
  memcpy(pvVar3,__src,__n);
  memset(*(void **)(*(long *)(this + 0x80) + 0x10),0,(ulong)*(uint *)(this + 0x48) << 2);
                    /* catch() { ... } // from try @ 006020c4 with catch @ 00604038 */
                    /* catch() { ... } // from try @ 00601fb0 with catch @ 0060403c */
  return 0;
}


