/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b1e10
 * Function: boost::detail::shared_count::shared_count<Caver::Quest>
 * Signature: undefined __thiscall shared_count<Caver::Quest>(shared_count * this, Quest * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::Quest>(shared_count *this,Quest *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 004b1e24 to 005b1e2b has its CatchHandler @ 004b1efc */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6370;
                    /* try { // try from 004b1e38 to 005b1e47 has its CatchHandler @ 004b2038 */
  plVar2[3] = (long)param_1;
                    /* try { // try from 004b1e48 to 005b1f3f has its CatchHandler @ 004b1a84 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


