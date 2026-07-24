/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2658
 * Function: Caver::Font::LoadFromFile
 * Signature: undefined __thiscall LoadFromFile(Font * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::LoadFromFile(std::string const&) */

bool __thiscall Caver::Font::LoadFromFile(Font *this,string *param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  Font aFStack_b0 [120];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FileExistsAtPath(param_1);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 005c2724 with catch @ 005c26b8 */
    bVar3 = false;
  }
  else {
    Proto::Font::Font(aFStack_b0);
    uVar2 = LoadProtobufMessageFromFile((MessageLite *)aFStack_b0,param_1);
    bVar3 = (uVar2 & 1) != 0;
    if (bVar3) {
      LoadFromProtobufMessage(this,aFStack_b0);
    }
    Proto::Font::~Font(aFStack_b0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


