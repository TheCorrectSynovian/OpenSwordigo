/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d590
 * Function: Caver::SetResourcesPath
 * Signature: undefined __cdecl SetResourcesPath(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SetResourcesPath(std::string const&) */

int Caver::SetResourcesPath(string *param_1)

{
  int iVar1;
  
                    /* try { // try from 0057d59c to 0067d6f7 has its CatchHandler @ 0057d3b8 */
  FUN_0066a6a8(&DAT_007e9d10,param_1);
  iVar1 = printf("Resources path set to: %s\n",*(undefined8 *)param_1);
  return iVar1;
}


