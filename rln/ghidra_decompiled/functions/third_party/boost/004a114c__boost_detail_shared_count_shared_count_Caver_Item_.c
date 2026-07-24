/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a114c
 * Function: boost::detail::shared_count::shared_count<Caver::Item>
 * Signature: undefined __thiscall shared_count<Caver::Item>(shared_count * this, Item * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::Item>(shared_count *this,Item *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5ad8;
                    /* catch() { ... } // from try @ 004a1050 with catch @ 004a116c */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
                    /* try { // try from 004a1198 to 005a11a3 has its CatchHandler @ 004a11ac */
  return;
}


