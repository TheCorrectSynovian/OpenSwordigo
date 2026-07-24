/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058773c
 * Function: boost::detail::shared_count::shared_count<Caver::AudioBuffer>
 * Signature: undefined __thiscall shared_count<Caver::AudioBuffer>(shared_count * this, AudioBuffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::AudioBuffer>(Caver::AudioBuffer*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::AudioBuffer>
          (shared_count *this,AudioBuffer *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0058773c to 0068774f has its CatchHandler @ 005882c4 */
                    /* try { // try from 00587750 to 00687763 has its CatchHandler @ 005882d0 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e78b8;
                    /* try { // try from 00587764 to 00687773 has its CatchHandler @ 00588264 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


