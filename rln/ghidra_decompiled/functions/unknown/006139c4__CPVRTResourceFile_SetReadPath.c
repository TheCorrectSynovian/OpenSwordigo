/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006139c4
 * Function: CPVRTResourceFile::SetReadPath
 * Signature: undefined __cdecl SetReadPath(char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTResourceFile::SetReadPath(char const*) */

void CPVRTResourceFile::SetReadPath(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
                    /* try { // try from 006139dc to 007139eb has its CatchHandler @ 00613fcc */
  CPVRTString::operator=((CPVRTString *)PTR_s_ReadPath_007e5db8,pcVar1);
  return;
}


