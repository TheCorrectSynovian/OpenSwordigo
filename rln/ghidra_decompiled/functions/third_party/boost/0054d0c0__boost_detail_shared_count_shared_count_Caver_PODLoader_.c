/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054d0c0
 * Function: boost::detail::shared_count::shared_count<Caver::PODLoader>
 * Signature: undefined __thiscall shared_count<Caver::PODLoader>(shared_count * this, PODLoader * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::PODLoader>(shared_count *this,PODLoader *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0054d0c0 to 0064d0e7 has its CatchHandler @ 0054d1f0 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e67d0;
                    /* try { // try from 0054d0e8 to 0064d1f3 has its CatchHandler @ 0054bf50 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


