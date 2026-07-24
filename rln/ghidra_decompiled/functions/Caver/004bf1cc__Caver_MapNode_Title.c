/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf1cc
 * Function: Caver::MapNode::Title
 * Signature: undefined __cdecl Title(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::Title() const */

void Caver::MapNode::Title(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
                    /* try { // try from 004bf1d4 to 005bf1df has its CatchHandler @ 004bf7a0 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(*(long *)(in_x0 + 0x18) + -0x18) == 0) && (*(long *)(in_x0 + 0x28) == 0)) {
    FUN_00666bb8();
  }
  else {
                    /* try { // try from 004bf208 to 005bf243 has its CatchHandler @ 004bf744 */
    FUN_0066a528();
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


