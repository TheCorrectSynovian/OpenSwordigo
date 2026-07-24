/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf274
 * Function: Caver::MapNode::MusicName
 * Signature: undefined __cdecl MusicName(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::MusicName() const */

void Caver::MapNode::MusicName(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 004bf288 to 005bf293 has its CatchHandler @ 004bf708 */
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(*(long *)(in_x0 + 0x60) + -0x18) == 0) && (*(long *)(in_x0 + 0x28) == 0)) {
    FUN_00666bb8();
  }
  else {
    FUN_0066a528();
  }
                    /* try { // try from 004bf2b4 to 005bf2ef has its CatchHandler @ 004bf6ac */
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


