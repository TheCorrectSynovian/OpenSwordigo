/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00604ec8
 * Function: PVRTModelPODCopyMaterial
 * Signature: undefined __cdecl PVRTModelPODCopyMaterial(SPODMaterial * param_1, SPODMaterial * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCopyMaterial(SPODMaterial const&, SPODMaterial&) */

void PVRTModelPODCopyMaterial(SPODMaterial *param_1,SPODMaterial *param_2)

{
  size_t sVar1;
  void *pvVar2;
  char *pcVar3;
  
  memcpy(param_2,param_1,0xb0);
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  pcVar3 = *(char **)param_1;
  if (pcVar3 != (char *)0x0) {
    sVar1 = strlen(pcVar3);
                    /* try { // try from 00604f14 to 00704f27 has its CatchHandler @ 00605220 */
    if (sVar1 + 1 == 0) {
                    /* try { // try from 00604f38 to 00704f4b has its CatchHandler @ 006052d8 */
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = calloc(sVar1 + 1,1);
      *(void **)param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00604f54;
      pcVar3 = *(char **)param_1;
    }
    sVar1 = strlen(pcVar3);
    memcpy(pvVar2,pcVar3,sVar1 + 1);
  }
LAB_00604f54:
  pcVar3 = *(char **)(param_1 + 0x60);
  if (pcVar3 != (char *)0x0) {
    sVar1 = strlen(pcVar3);
    if (sVar1 + 1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
                    /* try { // try from 00604f6c to 00704f93 has its CatchHandler @ 00605220 */
      pvVar2 = calloc(sVar1 + 1,1);
      *(void **)(param_2 + 0x60) = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_00604fa4;
      pcVar3 = *(char **)(param_1 + 0x60);
    }
    sVar1 = strlen(pcVar3);
                    /* try { // try from 00604f94 to 00704feb has its CatchHandler @ 00604a8c */
    memcpy(pvVar2,pcVar3,sVar1 + 1);
  }
LAB_00604fa4:
  pcVar3 = *(char **)(param_1 + 0x68);
  if (pcVar3 == (char *)0x0) {
    return;
  }
  sVar1 = strlen(pcVar3);
  if (sVar1 + 1 == 0) {
                    /* try { // try from 00604fec to 00704fff has its CatchHandler @ 00605214 */
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = calloc(sVar1 + 1,1);
    *(void **)(param_2 + 0x68) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return;
    }
    pcVar3 = *(char **)(param_1 + 0x68);
  }
  sVar1 = strlen(pcVar3);
                    /* try { // try from 00605010 to 00705023 has its CatchHandler @ 00605244 */
  memcpy(pvVar2,pcVar3,sVar1 + 1);
  return;
}


