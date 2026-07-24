/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550a38
 * Function: boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>
 * Signature: undefined __thiscall shared_count<Caver::KeyframeAnimation>(shared_count * this, KeyframeAnimation * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(Caver::KeyframeAnimation*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>
          (shared_count *this,KeyframeAnimation *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0;
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e4a28;
                    /* catch() { ... } // from try @ 00550a18 with catch @ 00550a78 */
  plVar3[3] = (long)param_1;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  *(long **)this = plVar3;
                    /* try { // try from 00550a98 to 00650abf has its CatchHandler @ 00550ac8 */
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


