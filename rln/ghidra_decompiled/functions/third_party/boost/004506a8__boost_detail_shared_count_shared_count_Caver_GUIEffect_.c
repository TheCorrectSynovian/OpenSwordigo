/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004506a8
 * Function: boost::detail::shared_count::shared_count<Caver::GUIEffect>
 * Signature: undefined __thiscall shared_count<Caver::GUIEffect>(shared_count * this, GUIEffect * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::GUIEffect>(shared_count *this,GUIEffect *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 004506b8 to 005506cf has its CatchHandler @ 004506b8
                       catch() { ... } // from try @ 004506b8 with catch @ 004506b8
                       catch() { ... } // from try @ 004506d4 with catch @ 004506b8 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e75d8;
                    /* try { // try from 004506d0 to 005506d3 has its CatchHandler @ 004506e4 */
                    /* try { // try from 004506d4 to 005506f7 has its CatchHandler @ 004506b8 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
                    /* catch() { ... } // from try @ 004506d0 with catch @ 004506e4 */
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


