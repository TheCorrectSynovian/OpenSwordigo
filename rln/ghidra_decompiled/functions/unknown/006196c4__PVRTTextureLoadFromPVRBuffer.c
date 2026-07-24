/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006196c4
 * Function: PVRTTextureLoadFromPVRBuffer
 * Signature: undefined __cdecl PVRTTextureLoadFromPVRBuffer(void * param_1, ulong param_2, uint * param_3, void * param_4, bool param_5, uint param_6, int * param_7, int * param_8)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureLoadFromPVRBuffer(void const*, unsigned long, unsigned int*, void const*, bool,
   unsigned int, int*, int*) */

undefined4
PVRTTextureLoadFromPVRBuffer
          (void *param_1,ulong param_2,uint *param_3,void *param_4,bool param_5,uint param_6,
          int *param_7,int *param_8)

{
  long lVar1;
  undefined4 uVar2;
  CPVRTResourceFile aCStack_78 [32];
  long local_58;
  
                    /* try { // try from 006196cc to 007196f3 has its CatchHandler @ 00619f40 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00619714 to 0071973b has its CatchHandler @ 0061a20c */
  CPVRTResourceFile::CPVRTResourceFile(aCStack_78,param_1,param_2);
  uVar2 = PVRTTextureLoadFromPVRResourceFile
                    (aCStack_78,param_3,param_4,param_5,param_6,param_7,param_8);
  CPVRTResourceFile::~CPVRTResourceFile(aCStack_78);
                    /* try { // try from 00619748 to 0071974f has its CatchHandler @ 0061a100 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


