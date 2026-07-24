/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613c9c
 * Function: CPVRTResourceFile::CPVRTResourceFile
 * Signature: undefined __thiscall CPVRTResourceFile(CPVRTResourceFile * this, char * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTResourceFile::CPVRTResourceFile(char const*, unsigned long) */

void __thiscall
CPVRTResourceFile::CPVRTResourceFile(CPVRTResourceFile *this,char *param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4890;
  *(undefined2 *)(this + 8) = 0x101;
  *(ulong *)(this + 0x10) = param_2;
  *(char **)(this + 0x18) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


