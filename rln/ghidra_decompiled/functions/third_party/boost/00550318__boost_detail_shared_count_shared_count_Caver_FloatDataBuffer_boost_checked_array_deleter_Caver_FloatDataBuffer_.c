/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550318
 * Function: boost::detail::shared_count::shared_count<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
 * Signature: undefined __thiscall shared_count<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>(shared_count * this, FloatDataBuffer * param_1, checked_array_deleter param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::FloatDataBuffer*,
   boost::checked_array_deleter<Caver::FloatDataBuffer> >(Caver::FloatDataBuffer*,
   boost::checked_array_deleter<Caver::FloatDataBuffer>) */

void __thiscall
boost::detail::shared_count::
shared_count<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
          (shared_count *this,long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00550324 to 0065034b has its CatchHandler @ 00550354 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e6ab8;
                    /* try { // try from 0055034c to 00650357 has its CatchHandler @ 0054fe90 */
  plVar2[3] = param_1;
                    /* catch() { ... } // from try @ 0055020c with catch @ 00550354
                       catch() { ... } // from try @ 00550324 with catch @ 00550354 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


