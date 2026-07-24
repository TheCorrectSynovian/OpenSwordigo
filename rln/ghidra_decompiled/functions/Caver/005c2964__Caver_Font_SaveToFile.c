/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2964
 * Function: Caver::Font::SaveToFile
 * Signature: undefined __thiscall SaveToFile(Font * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::SaveToFile(std::string const&) const */

bool __thiscall Caver::Font::SaveToFile(Font *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  Font aFStack_b0 [120];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005c28dc with catch @ 005c2988 */
  Proto::Font::Font(aFStack_b0);
  SaveToProtobufMessage(this,aFStack_b0);
  uVar3 = SaveProtobufMessageToFile((MessageLite *)aFStack_b0,param_1);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    printf("Wrote font to %s\n",*(undefined8 *)param_1);
  }
  Proto::Font::~Font(aFStack_b0);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005c2a18 with catch @ 005c29f8
                       catch() { ... } // from try @ 005c2a7c with catch @ 005c29f8 */
  return bVar1;
}


