/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b1af8
 * Function: boost::detail::shared_count::shared_count<Caver::Skill>
 * Signature: undefined __thiscall shared_count<Caver::Skill>(shared_count * this, Skill * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::Skill>(Caver::Skill*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::Skill>(shared_count *this,Skill *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004b1b1c to 005b1b1f has its CatchHandler @ 004b1f50 */
  *(undefined8 *)this = 0;
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e5bd8;
                    /* try { // try from 004b1b3c to 005b1b4f has its CatchHandler @ 004b1f4c */
  plVar3[3] = (long)param_1;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  *(long **)this = plVar3;
                    /* try { // try from 004b1b50 to 005b1b63 has its CatchHandler @ 004b1f64 */
  if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* try { // try from 004b1b64 to 005b1b6f has its CatchHandler @ 004b1f1c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


