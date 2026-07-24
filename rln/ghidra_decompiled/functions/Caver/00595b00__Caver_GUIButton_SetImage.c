/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00595b00
 * Function: Caver::GUIButton::SetImage
 * Signature: undefined __thiscall SetImage(GUIButton * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetImage(std::string const&) */

void __thiscall Caver::GUIButton::SetImage(GUIButton *this,string *param_1)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00595b24 to 00695d77 has its CatchHandler @ 005959d0 */
  psVar3 = (string *)TextureLibrary::sharedLibrary();
  TextureLibrary::TextureForName(psVar3,SUB81(param_1,0));
  SetImage(this,(intrusive_ptr *)&local_40);
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


