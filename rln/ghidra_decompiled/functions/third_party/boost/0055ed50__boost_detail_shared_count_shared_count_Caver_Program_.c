/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055ed50
 * Function: boost::detail::shared_count::shared_count<Caver::Program>
 * Signature: undefined __thiscall shared_count<Caver::Program>(shared_count * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::Program>(shared_count *this,Program *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0055ed50 to 0065ed57 has its CatchHandler @ 0055f074 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4e90;
                    /* try { // try from 0055ed78 to 0065ed9f has its CatchHandler @ 0055f070 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


