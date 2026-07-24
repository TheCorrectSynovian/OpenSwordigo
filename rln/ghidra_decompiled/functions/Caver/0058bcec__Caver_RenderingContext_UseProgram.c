/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058bcec
 * Function: Caver::RenderingContext::UseProgram
 * Signature: undefined __thiscall UseProgram(RenderingContext * this, uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::UseProgram(unsigned int) */

void __thiscall Caver::RenderingContext::UseProgram(RenderingContext *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_50;
  long *plStack_48;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0058bd10 to 0068bd8f has its CatchHandler @ 0058bb3c */
  local_3c = param_1;
  puVar3 = (undefined8 *)
           std::
           map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
           ::operator[]((map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                         *)(this + 8),&local_3c);
  local_50 = *puVar3;
  plVar1 = (long *)puVar3[1];
                    /* catch() { ... } // from try @ 0058bce8 with catch @ 0058bd24 */
  if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0058bca0 with catch @ 0058bd2c */
    plVar1[1] = plVar1[1] + 1;
  }
  plStack_48 = plVar1;
                    /* catch() { ... } // from try @ 0058bc58 with catch @ 0058bd3c */
  UseProgram(this,(shared_ptr *)&local_50);
                    /* catch() { ... } // from try @ 0058bc10 with catch @ 0058bd4c */
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0058bbc8 with catch @ 0058bd5c */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar4 = plVar1[2];
                    /* catch() { ... } // from try @ 0058bb80 with catch @ 0058bd6c */
    plVar1[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
                    /* try { // try from 0058bd90 to 0068bedf has its CatchHandler @ 0058bee8 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


