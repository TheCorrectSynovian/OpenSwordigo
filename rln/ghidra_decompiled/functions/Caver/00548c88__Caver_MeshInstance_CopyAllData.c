/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00548c88
 * Function: Caver::MeshInstance::CopyAllData
 * Signature: undefined __thiscall CopyAllData(MeshInstance * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::CopyAllData() */

void __thiscall Caver::MeshInstance::CopyAllData(MeshInstance *this)

{
  MeshData *this_00;
  long lVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  void *pvVar5;
  void *pvVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  
                    /* try { // try from 00548c8c to 00648c97 has its CatchHandler @ 00548e5c */
  pvVar5 = *(void **)(this + 0x28);
  puVar7 = *(uint **)this;
  puVar4 = puVar7;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)(puVar7 + 0xc);
    iVar2 = *(int *)(this + 0x1c);
    iVar3 = MeshData::valueSize((MeshData *)(this + 0x18));
                    /* try { // try from 00548cc4 to 00648ccf has its CatchHandler @ 00548e58 */
    puVar4 = *(uint **)this;
    if (*puVar4 != 0) {
                    /* try { // try from 00548cd0 to 00648dd7 has its CatchHandler @ 00548b6c */
      uVar8 = 0;
      do {
        memcpy(pvVar5,pvVar6,(long)iVar3 * (long)iVar2);
        puVar4 = *(uint **)this;
        uVar8 = uVar8 + 1;
        pvVar5 = (void *)((long)pvVar5 + (ulong)*(uint *)(this + 0x20));
        pvVar6 = (void *)((long)pvVar6 + (ulong)puVar7[10]);
      } while (uVar8 < *puVar4);
    }
  }
  pvVar5 = *(void **)(this + 0x40);
  puVar7 = puVar4;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)(puVar4 + 0x12);
    iVar2 = *(int *)(this + 0x34);
    iVar3 = MeshData::valueSize((MeshData *)(this + 0x30));
    puVar7 = *(uint **)this;
    if (*puVar7 != 0) {
      uVar8 = 0;
      do {
        memcpy(pvVar5,pvVar6,(long)iVar3 * (long)iVar2);
        puVar7 = *(uint **)this;
        uVar8 = uVar8 + 1;
        pvVar5 = (void *)((long)pvVar5 + (ulong)*(uint *)(this + 0x38));
        pvVar6 = (void *)((long)pvVar6 + (ulong)puVar4[0x10]);
      } while (uVar8 < *puVar7);
    }
  }
  if (0 < (int)puVar7[0x50]) {
    lVar9 = 0;
    do {
      pvVar5 = *(void **)(*(long *)(this + 0x48) + lVar9 * 0x18 + 0x10);
      if (pvVar5 != (void *)0x0) {
        this_00 = (MeshData *)(*(long *)(this + 0x48) + lVar9 * 0x18);
                    /* catch() { ... } // from try @ 00548c38 with catch @ 00548db4 */
        lVar1 = *(long *)(puVar7 + 0x14) + lVar9 * 0x18;
        pvVar6 = *(void **)(lVar1 + 0x10);
        iVar2 = *(int *)(this_00 + 4);
        iVar3 = MeshData::valueSize(this_00);
        puVar7 = *(uint **)this;
        if (*puVar7 != 0) {
                    /* try { // try from 00548dd8 to 00648e87 has its CatchHandler @ 00548e90 */
          uVar8 = 0;
                    /* catch() { ... } // from try @ 00548bb8 with catch @ 00548de4 */
          do {
                    /* catch() { ... } // from try @ 00548bcc with catch @ 00548de8 */
            memcpy(pvVar5,pvVar6,(long)iVar3 * (long)iVar2);
            puVar7 = *(uint **)this;
            uVar8 = uVar8 + 1;
            pvVar5 = (void *)((long)pvVar5 + (ulong)*(uint *)(this_00 + 8));
            pvVar6 = (void *)((long)pvVar6 + (ulong)*(uint *)(lVar1 + 8));
          } while (uVar8 < *puVar7);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)puVar7[0x50]);
  }
  pvVar5 = *(void **)(this + 0x60);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)(puVar7 + 0x1a);
    iVar2 = *(int *)(this + 0x54);
    iVar3 = MeshData::valueSize((MeshData *)(this + 0x50));
    if (**(int **)this != 0) {
                    /* catch() { ... } // from try @ 00548cc4 with catch @ 00548e58 */
      uVar8 = 0;
                    /* catch() { ... } // from try @ 00548c8c with catch @ 00548e5c */
      do {
                    /* catch() { ... } // from try @ 00548c68 with catch @ 00548e60 */
        memcpy(pvVar5,pvVar6,(long)iVar3 * (long)iVar2);
        uVar8 = uVar8 + 1;
        pvVar5 = (void *)((long)pvVar5 + (ulong)*(uint *)(this + 0x58));
                    /* try { // try from 00548e88 to 00648e93 has its CatchHandler @ 00548b6c */
        pvVar6 = (void *)((long)pvVar6 + (ulong)puVar7[0x18]);
                    /* catch() { ... } // from try @ 00548dd8 with catch @ 00548e90 */
      } while (uVar8 < **(uint **)this);
    }
  }
                    /* try { // try from 00548e94 to 00648ee7 has its CatchHandler @ 00548e94
                       catch() { ... } // from try @ 00548e94 with catch @ 00548e94
                       catch() { ... } // from try @ 00548eec with catch @ 00548e94
                       catch() { ... } // from try @ 00549034 with catch @ 00548e94
                       catch() { ... } // from try @ 00549110 with catch @ 00548e94
                       catch() { ... } // from try @ 00549178 with catch @ 00548e94
                       catch() { ... } // from try @ 00549204 with catch @ 00548e94
                       catch() { ... } // from try @ 0054946c with catch @ 00548e94
                       catch() { ... } // from try @ 00549508 with catch @ 00548e94
                       catch() { ... } // from try @ 00549598 with catch @ 00548e94 */
  return;
}


