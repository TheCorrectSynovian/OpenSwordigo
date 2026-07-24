/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab048
 * Function: Caver::GUITexturedRect::InitWithTextureName
 * Signature: undefined __thiscall InitWithTextureName(GUITexturedRect * this, string * param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITexturedRect::InitWithTextureName(std::string const&, Caver::Vector2 const&) */

void __thiscall
Caver::GUITexturedRect::InitWithTextureName(GUITexturedRect *this,string *param_1,Vector2 *param_2)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ab08c with catch @ 005ab06c
                       catch(type#1 @ 00000000) { ... } // from try @ 005ab0ec with catch @ 005ab06c
                        */
  psVar3 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 005ab084 to 006ab08b has its CatchHandler @ 005ab0c8 */
  TextureLibrary::TextureForName(psVar3,SUB81(param_1,0));
                    /* try { // try from 005ab08c to 006ab0d7 has its CatchHandler @ 005ab06c */
  InitWithTexture(this,(intrusive_ptr *)&local_40,param_2);
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ab084 with catch @ 005ab0c8
                        */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005ab0d8 to 006ab0e3 has its CatchHandler @ 005ab0e4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


