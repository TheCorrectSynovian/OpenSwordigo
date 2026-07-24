/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b487c
 * Function: Caver::DeleteFileAtPath
 * Signature: undefined __cdecl DeleteFileAtPath(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DeleteFileAtPath(std::string const&) */

undefined8 Caver::DeleteFileAtPath(string *param_1)

{
  int iVar1;
  
  iVar1 = remove(*(char **)param_1);
  if (iVar1 == 0) {
    return 1;
  }
  perror("Error deleting file");
                    /* try { // try from 005b48b0 to 006b48b3 has its CatchHandler @ 005b499c */
  return 0;
}


