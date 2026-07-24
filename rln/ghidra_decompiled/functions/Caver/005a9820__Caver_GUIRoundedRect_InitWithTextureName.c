/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9820
 * Function: Caver::GUIRoundedRect::InitWithTextureName
 * Signature: undefined __thiscall InitWithTextureName(GUIRoundedRect * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIRoundedRect::InitWithTextureName(std::string const&) */

void __thiscall Caver::GUIRoundedRect::InitWithTextureName(GUIRoundedRect *this,string *param_1)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  psVar3 = (string *)TextureLibrary::sharedLibrary();
  TextureLibrary::TextureForName(psVar3,SUB81(param_1,0));
                    /* try { // try from 005a9864 to 006a9877 has its CatchHandler @ 005a9a6c */
  InitWithTexture(this,(intrusive_ptr *)&local_40);
                    /* try { // try from 005a9878 to 006a9887 has its CatchHandler @ 005a99fc */
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 005a9888 to 006a9907 has its CatchHandler @ 005a9710 */
    (**(code **)(*local_40 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


