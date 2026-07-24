/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058bc78
 * Function: Caver::RenderingContext::ProgramForIdentifier
 * Signature: undefined __cdecl ProgramForIdentifier(uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::ProgramForIdentifier(unsigned int) */

void Caver::RenderingContext::ProgramForIdentifier(uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  long lVar3;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0058bca0 to 0068bcc7 has its CatchHandler @ 0058bd2c */
  puVar2 = (undefined8 *)
           std::
           map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
           ::operator[]((map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                         *)((ulong)param_1 + 8),&local_2c);
  *in_x8 = *puVar2;
  lVar3 = puVar2[1];
  in_x8[1] = lVar3;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0058bce8 to 0068bd0f has its CatchHandler @ 0058bd24 */
  __stack_chk_fail();
}


