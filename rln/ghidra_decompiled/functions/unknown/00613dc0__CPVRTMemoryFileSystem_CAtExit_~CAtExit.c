/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613dc0
 * Function: CPVRTMemoryFileSystem::CAtExit::~CAtExit
 * Signature: undefined __thiscall ~CAtExit(CAtExit * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTMemoryFileSystem::CAtExit::~CAtExit() */

void __thiscall CPVRTMemoryFileSystem::CAtExit::~CAtExit(CAtExit *this)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_s_i32NumFiles_007e7e78;
  puVar1 = PTR_s_pFileInfo_007e59a8;
  pvVar3 = *(void **)PTR_s_pFileInfo_007e59a8;
  if (0 < *(int *)PTR_s_i32NumFiles_007e7e78) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (*(char *)((long)pvVar3 + lVar5 + 0x18) != '\0') {
        if (*(void **)((long)pvVar3 + lVar5) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar3 + lVar5));
          pvVar3 = *(void **)puVar1;
        }
        pvVar4 = *(void **)((long)pvVar3 + lVar5 + 8);
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
          pvVar3 = *(void **)puVar1;
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < *(int *)puVar2);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    return;
  }
  return;
}


