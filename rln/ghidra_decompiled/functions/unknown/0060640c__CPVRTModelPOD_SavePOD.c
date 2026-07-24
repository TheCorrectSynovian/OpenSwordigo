/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060640c
 * Function: CPVRTModelPOD::SavePOD
 * Signature: undefined __thiscall SavePOD(CPVRTModelPOD * this, char * param_1, char * param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::SavePOD(char const*, char const*, char const*) */

uint __thiscall
CPVRTModelPOD::SavePOD(CPVRTModelPOD *this,char *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  FILE *__stream;
  
                    /* catch() { ... } // from try @ 00606660 with catch @ 00606418
                       catch() { ... } // from try @ 006068ec with catch @ 00606418 */
  __stream = fopen(param_1,"wb+");
  if (__stream == (FILE *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00606484(__stream,param_2,param_3,this);
                    /* try { // try from 00606460 to 00706487 has its CatchHandler @ 006066b8 */
    fclose(__stream);
    uVar1 = ~uVar1 & 1;
  }
  return uVar1;
}


