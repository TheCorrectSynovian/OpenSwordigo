/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614020
 * Function: CPVRTMemoryFileSystem::GetFilename
 * Signature: undefined __cdecl GetFilename(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTMemoryFileSystem::GetFilename(int) */

undefined8 CPVRTMemoryFileSystem::GetFilename(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 <= *(int *)PTR_s_i32NumFiles_007e7e78)) {
    uVar1 = *(undefined8 *)
             (*(long *)PTR_s_pFileInfo_007e59a8 +
             (-(ulong)((uint)param_1 >> 0x1f) & 0xffffffe000000000 | (ulong)(uint)param_1 << 5));
  }
  return uVar1;
}


