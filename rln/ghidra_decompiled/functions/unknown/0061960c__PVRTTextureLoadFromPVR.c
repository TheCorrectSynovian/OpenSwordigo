/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061960c
 * Function: PVRTTextureLoadFromPVR
 * Signature: undefined __cdecl PVRTTextureLoadFromPVR(char * param_1, uint * param_2, void * param_3, bool param_4, uint param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureLoadFromPVR(char const*, unsigned int*, void const*, bool, unsigned int) */

undefined4
PVRTTextureLoadFromPVR(char *param_1,uint *param_2,void *param_3,bool param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  CPVRTResourceFile aCStack_68 [32];
  long local_48;
  
                    /* try { // try from 00619620 to 00719623 has its CatchHandler @ 0061a0d8 */
                    /* try { // try from 00619624 to 00719673 has its CatchHandler @ 00619100 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  CPVRTResourceFile::CPVRTResourceFile(aCStack_68,param_1);
  uVar2 = PVRTTextureLoadFromPVRResourceFile
                    (aCStack_68,param_2,param_3,param_4,param_5,(int *)0x0,(int *)0x0);
                    /* try { // try from 00619674 to 0071968b has its CatchHandler @ 0061a20c */
  CPVRTResourceFile::~CPVRTResourceFile(aCStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


