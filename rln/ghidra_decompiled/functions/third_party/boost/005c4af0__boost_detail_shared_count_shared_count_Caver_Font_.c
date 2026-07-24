/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c4af0
 * Function: boost::detail::shared_count::shared_count<Caver::Font>
 * Signature: undefined __thiscall shared_count<Caver::Font>(shared_count * this, Font * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::Font>(shared_count *this,Font *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5188;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
                    /* try { // try from 005c4b2c to 006c4b3b has its CatchHandler @ 005c4bd0 */
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
                    /* try { // try from 005c4b3c to 006c4bf7 has its CatchHandler @ 005c4a54 */
  return;
}


