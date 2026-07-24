/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d31a4
 * Function: Caver::RenderingProgramShader::~RenderingProgramShader
 * Signature: undefined __thiscall ~RenderingProgramShader(RenderingProgramShader * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgramShader::~RenderingProgramShader() */

void __thiscall Caver::RenderingProgramShader::~RenderingProgramShader(RenderingProgramShader *this)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar7 = PTR_pthread_create_007e4e78;
                    /* catch() { ... } // from try @ 005d0e4c with catch @ 005d31b8 */
                    /* catch() { ... } // from try @ 005d0e20 with catch @ 005d31bc */
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  pvVar11 = *(void **)(this + 0x20);
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar11 != pvVar1) {
    do {
      puVar6 = (undefined *)(*(long *)((long)pvVar11 + 8) + -0x18);
      if (puVar6 != puVar5) {
        piVar9 = (int *)(*(long *)((long)pvVar11 + 8) + -8);
        if (puVar7 == (undefined *)0x0) {
          iVar10 = *piVar9;
          *piVar9 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 005d0e0c with catch @ 005d321c */
                    /* catch() { ... } // from try @ 005d0c24 with catch @ 005d3220 */
          operator_delete(puVar6);
        }
      }
                    /* catch() { ... } // from try @ 005d0a14 with catch @ 005d3238 */
      pvVar11 = (void *)((long)pvVar11 + 0x10);
                    /* catch() { ... } // from try @ 005d0a0c with catch @ 005d323c */
                    /* catch() { ... } // from try @ 005d08fc with catch @ 005d3240 */
    } while (pvVar11 != pvVar1);
                    /* catch() { ... } // from try @ 005d08f4 with catch @ 005d3244 */
    pvVar11 = *(void **)(this + 0x20);
  }
                    /* catch() { ... } // from try @ 005d07e4 with catch @ 005d3248 */
  if (pvVar11 != (void *)0x0) {
                    /* catch() { ... } // from try @ 005d07dc with catch @ 005d324c */
                    /* catch() { ... } // from try @ 005d06c0 with catch @ 005d3250 */
    operator_delete(pvVar11);
  }
                    /* catch() { ... } // from try @ 005d06b8 with catch @ 005d3254 */
                    /* catch() { ... } // from try @ 005d0594 with catch @ 005d3258 */
                    /* catch() { ... } // from try @ 005d058c with catch @ 005d325c */
                    /* catch() { ... } // from try @ 005d0e44 with catch @ 005d3260
                       catch() { ... } // from try @ 005d2370 with catch @ 005d3260 */
  puVar7 = (undefined *)(*(long *)(this + 8) + -0x18);
  if (puVar7 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 005d05a8 with catch @ 005d3294
                       catch() { ... } // from try @ 005d0690 with catch @ 005d3294 */
                    /* catch() { ... } // from try @ 005d0b34 with catch @ 005d329c
                       catch() { ... } // from try @ 005d0bc0 with catch @ 005d329c */
    piVar9 = (int *)(*(long *)(this + 8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* catch() { ... } // from try @ 005d0a3c with catch @ 005d32c8
                       catch() { ... } // from try @ 005d0ac8 with catch @ 005d32c8 */
    if (iVar10 < 1) {
      operator_delete(puVar7);
    }
  }
                    /* catch() { ... } // from try @ 005d0e04 with catch @ 005d3270
                       catch() { ... } // from try @ 005d2394 with catch @ 005d3270 */
                    /* catch() { ... } // from try @ 005d0a28 with catch @ 005d3274
                       catch() { ... } // from try @ 005d0b10 with catch @ 005d3274 */
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005d0910 with catch @ 005d327c
                       catch() { ... } // from try @ 005d09f8 with catch @ 005d327c */
                    /* catch() { ... } // from try @ 005d07f8 with catch @ 005d3284
                       catch() { ... } // from try @ 005d08e0 with catch @ 005d3284 */
                    /* catch() { ... } // from try @ 005d06d4 with catch @ 005d328c
                       catch() { ... } // from try @ 005d07bc with catch @ 005d328c */
  return;
}


