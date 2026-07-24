/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b45e8
 * Function: Caver::GameOptions::LoadFromFile
 * Signature: undefined __thiscall LoadFromFile(GameOptions * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::LoadFromFile(std::string const&) */

void __thiscall Caver::GameOptions::LoadFromFile(GameOptions *this,string *param_1)

{
  long lVar1;
  ulong uVar2;
  GameOptions aGStack_a8 [112];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0066a6a8();
  uVar2 = FileExistsAtPath(param_1);
  if ((uVar2 & 1) != 0) {
    Proto::GameOptions::GameOptions(aGStack_a8);
    LoadProtobufMessageFromFile((MessageLite *)aGStack_a8,param_1);
    LoadFromProtobufMessage(this,aGStack_a8);
    Proto::GameOptions::~GameOptions(aGStack_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


