/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0dc0
 * Function: Caver::AudioBuffer::InitWithStaticData
 * Signature: undefined __thiscall InitWithStaticData(AudioBuffer * this, BufferFormat param_1, int param_2, int param_3, uchar * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat, int, int, unsigned
   char*) */

bool __thiscall
Caver::AudioBuffer::InitWithStaticData
          (AudioBuffer *this,int param_2,int param_3,int param_4,void *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005d0e04 to 006d0e0b has its CatchHandler @ 005d3270 */
  *(void **)(this + 0x10) = param_5;
  *(int *)(this + 0x18) = param_4;
                    /* try { // try from 005d0e0c to 006d0e1f has its CatchHandler @ 005d321c */
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  alGenBuffers(1,this);
                    /* try { // try from 005d0e20 to 006d0e33 has its CatchHandler @ 005d31bc */
  FUN_00666bb8(local_68,"alGenBuffers",auStack_70);
  iVar6 = alGetError();
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 005d0e44 to 006d0e4b has its CatchHandler @ 005d3260 */
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_68[0] + -8);
                    /* try { // try from 005d0e60 to 006d0e73 has its CatchHandler @ 005d314c */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 005d0e84 to 006d0e8f has its CatchHandler @ 005d34e4 */
    if (iVar8 < 1) {
                    /* try { // try from 005d0e90 to 006d0e97 has its CatchHandler @ 005d3134 */
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if (iVar6 == 0) {
                    /* try { // try from 005d0e98 to 006d0f1f has its CatchHandler @ 005d34e4 */
    iVar6 = param_2 + 0x10ff;
    if (3 < param_2 - 1U) {
      iVar6 = 0;
    }
    goodAlBufferData(*(int *)this,iVar6,param_5,param_4,param_3);
    FUN_00666bb8(local_68,"alBufferDataStaticProc",auStack_70);
    iVar6 = alGetError();
    bVar5 = iVar6 == 0;
    if ((undefined *)(local_68[0] + -0x18) != puVar4) {
      piVar7 = (int *)(local_68[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar7;
        *piVar7 = iVar6 + -1;
      }
      else {
        do {
                    /* try { // try from 005d0f30 to 006d0f37 has its CatchHandler @ 005d3124 */
          iVar6 = *piVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_68[0] + -0x18));
      }
    }
  }
  else {
                    /* try { // try from 005d0e4c to 006d0e5f has its CatchHandler @ 005d31b8 */
    bVar5 = false;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


