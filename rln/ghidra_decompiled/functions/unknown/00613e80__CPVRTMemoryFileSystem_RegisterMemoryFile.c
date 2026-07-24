/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613e80
 * Function: CPVRTMemoryFileSystem::RegisterMemoryFile
 * Signature: undefined __cdecl RegisterMemoryFile(char * param_1, void * param_2, ulong param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTMemoryFileSystem::RegisterMemoryFile(char const*, void const*, unsigned long, bool) */

void CPVRTMemoryFileSystem::RegisterMemoryFile
               (char *param_1,void *param_2,ulong param_3,bool param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  size_t sVar5;
  char *__dest;
  long lVar6;
  ulong uVar7;
  void *__src;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  
  puVar2 = PTR_s_i32Capacity_007e5370;
  uVar10 = *(uint *)PTR_s_i32NumFiles_007e7e78;
  uVar11 = (ulong)uVar10;
  if (uVar10 == *(uint *)PTR_s_i32Capacity_007e5370) {
    uVar8 = (long)(int)uVar10 + 10;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    uVar7 = uVar8 * 0x20;
    if (SUB168(auVar1 * ZEXT816(0x20),8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar7);
    __src = *(void **)PTR_s_pFileInfo_007e59a8;
    memcpy(pvVar4,__src,(long)(int)uVar10 << 5);
    if (__src != (void *)0x0) {
      operator_delete__(__src);
      uVar8 = (ulong)(*(int *)puVar2 + 10);
      uVar11 = (ulong)*(uint *)PTR_s_i32NumFiles_007e7e78;
    }
    puVar9 = (uint *)PTR_s_i32NumFiles_007e7e78;
    puVar3 = PTR_s_pFileInfo_007e59a8;
    *(int *)puVar2 = (int)uVar8;
    *(void **)puVar3 = pvVar4;
  }
  else {
    pvVar4 = *(void **)PTR_s_pFileInfo_007e59a8;
    puVar9 = (uint *)PTR_s_i32NumFiles_007e7e78;
  }
  uVar8 = -(uVar11 >> 0x1f) & 0xffffffe000000000 | uVar11 << 5;
  *(char **)((long)pvVar4 + uVar8) = param_1;
  puVar2 = PTR_s_pFileInfo_007e59a8;
  lVar6 = *(long *)PTR_s_pFileInfo_007e59a8;
                    /* catch() { ... } // from try @ 00613858 with catch @ 00613f74 */
  *(void **)(lVar6 + uVar8 + 8) = param_2;
  if (param_4) {
    sVar5 = strlen(param_1);
    __dest = operator_new__(sVar5);
    strcpy(__dest,param_1);
                    /* try { // try from 00613f98 to 00714633 has its CatchHandler @ 006148e4 */
    uVar10 = *puVar9;
    uVar11 = (ulong)uVar10;
    uVar8 = -(ulong)(uVar10 >> 0x1f) & 0xffffffe000000000 | uVar11 << 5;
    *(char **)(*(long *)puVar2 + uVar8) = __dest;
    pvVar4 = operator_new__(param_3);
    memcpy(pvVar4,param_2,param_3);
                    /* catch() { ... } // from try @ 0061345c with catch @ 00613fc4 */
    lVar6 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 006133ac with catch @ 00613fc8 */
                    /* catch() { ... } // from try @ 006139dc with catch @ 00613fcc */
    *(void **)(lVar6 + uVar8 + 8) = pvVar4;
  }
  else {
    uVar10 = (uint)uVar11;
  }
  lVar6 = lVar6 + (long)(int)uVar10 * 0x20;
  *(ulong *)(lVar6 + 0x10) = param_3;
  *(bool *)(lVar6 + 0x18) = param_4;
  *puVar9 = (int)uVar11 + 1;
                    /* catch() { ... } // from try @ 006139b4 with catch @ 00614004 */
  return;
}


