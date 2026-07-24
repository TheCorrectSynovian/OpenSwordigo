/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613be8
 * Function: CPVRTMemoryFileSystem::GetFile
 * Signature: undefined __cdecl GetFile(char * param_1, void * * param_2, ulong * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTMemoryFileSystem::GetFile(char const*, void const**, unsigned long*) */

undefined8 CPVRTMemoryFileSystem::GetFile(char *param_1,void **param_2,ulong *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_s_pFileInfo_007e59a8;
  iVar1 = *(int *)PTR_s_i32NumFiles_007e7e78;
  if (0 < iVar1) {
    lVar4 = 0;
    lVar6 = 0;
    lVar5 = *(long *)PTR_s_pFileInfo_007e59a8;
    do {
      iVar3 = strcmp(*(char **)(lVar5 + lVar4),param_1);
      if (iVar3 == 0) {
        if (param_2 != (void **)0x0) {
          *param_2 = *(void **)(lVar5 + lVar4 + 8);
        }
        if (param_3 != (ulong *)0x0) {
          *param_3 = *(ulong *)(*(long *)puVar2 + lVar4 + 0x10);
        }
        return 1;
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar6 < iVar1);
  }
  return 0;
}


