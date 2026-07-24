/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b230c
 * Function: boost::detail::shared_count::shared_count<Caver::GuideTarget>
 * Signature: undefined __thiscall shared_count<Caver::GuideTarget>(shared_count * this, GuideTarget * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::GuideTarget>
          (shared_count *this,GuideTarget *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 004b2310 to 005b2337 has its CatchHandler @ 004b22e0 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e61d0;
                    /* catch() { ... } // from try @ 004b22fc with catch @ 004b2334 */
  plVar2[3] = (long)param_1;
                    /* catch() { ... } // from try @ 004b2514 with catch @ 004b2344
                       catch() { ... } // from try @ 004b2838 with catch @ 004b2344 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


