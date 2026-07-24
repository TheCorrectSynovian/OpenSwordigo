/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d1204
 * Function: Caver::AudioBuffer::LoadFromFileImpl
 * Signature: undefined __thiscall LoadFromFileImpl(AudioBuffer * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioBuffer::LoadFromFileImpl(std::string const&) */

void __thiscall Caver::AudioBuffer::LoadFromFileImpl(AudioBuffer *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int local_40;
  int iStack_3c;
  void *local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = GetAudioFileData(param_1,(BufferFormat *)&local_2c,&local_38,&iStack_3c,&local_40);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    InitWithStaticData(this,local_2c,local_40,iStack_3c,local_38);
  }
                    /* try { // try from 005d1264 to 006d1277 has its CatchHandler @ 005d2be4 */
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


