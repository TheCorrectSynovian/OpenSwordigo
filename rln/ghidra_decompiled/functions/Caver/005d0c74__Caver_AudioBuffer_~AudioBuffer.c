/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d0c74
 * Function: Caver::AudioBuffer::~AudioBuffer
 * Signature: undefined __thiscall ~AudioBuffer(AudioBuffer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioBuffer::~AudioBuffer() */

void __thiscall Caver::AudioBuffer::~AudioBuffer(AudioBuffer *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(int *)this != 0) {
                    /* try { // try from 005d0ca0 to 006d0cab has its CatchHandler @ 005d34cc */
    alDeleteBuffers(1,this);
    FUN_00666bb8(local_38,"alDeleteBuffers",auStack_40);
    alGetError();
    if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar4 = (int *)(local_38[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar4;
        *piVar4 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_38[0] + -0x18));
      }
    }
    FreeDataImpl(this);
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005d0d44 to 006d0d6b has its CatchHandler @ 005d34cc */
    __stack_chk_fail();
  }
                    /* try { // try from 005d0cf4 to 006d0d23 has its CatchHandler @ 005d30d4 */
  return;
}


