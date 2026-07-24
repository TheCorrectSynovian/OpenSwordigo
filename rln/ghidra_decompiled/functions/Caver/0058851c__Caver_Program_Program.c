/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058851c
 * Function: Caver::Program::Program
 * Signature: undefined __thiscall Program(Program * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Program::Program(std::string const&) */

void __thiscall Caver::Program::Program(Program *this,string *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00587878 with catch @ 0058853c */
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1;
  InitWithString(this,param_1,(string *)0x0);
  if (*(long *)(lVar2 + 0x28) == lVar3) {
                    /* catch() { ... } // from try @ 00587810 with catch @ 00588574 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


