/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005507ec
 * Function: boost::detail::shared_count::shared_count<Caver::Skeleton>
 * Signature: undefined __thiscall shared_count<Caver::Skeleton>(shared_count * this, Skeleton * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::Skeleton>(Caver::Skeleton*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::Skeleton>(shared_count *this,Skeleton *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00550800 to 0065080b has its CatchHandler @ 00550850 */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0;
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e7be8;
                    /* try { // try from 00550830 to 00650833 has its CatchHandler @ 00550884 */
  plVar3[3] = (long)param_1;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  *(long **)this = plVar3;
                    /* catch() { ... } // from try @ 00550800 with catch @ 00550850 */
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


