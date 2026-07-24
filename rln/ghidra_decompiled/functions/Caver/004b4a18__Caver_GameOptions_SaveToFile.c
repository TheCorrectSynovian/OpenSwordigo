/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4a18
 * Function: Caver::GameOptions::SaveToFile
 * Signature: undefined __thiscall SaveToFile(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::SaveToFile() */

void __thiscall Caver::GameOptions::SaveToFile(GameOptions *this)

{
  long lVar1;
  GameOptions aGStack_98 [112];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Proto::GameOptions::GameOptions(aGStack_98);
  SaveToProtobufMessage(this,aGStack_98);
  SaveProtobufMessageToFile((MessageLite *)aGStack_98,(string *)this);
  Proto::GameOptions::~GameOptions(aGStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


