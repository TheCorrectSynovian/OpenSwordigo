/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ce20
 * Function: FUN_0061ce20
 * Signature: undefined FUN_0061ce20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061ce20(exception *param_1)

{
                    /* try { // try from 0061ce2c to 0071ce37 has its CatchHandler @ 0061cd08 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0061cdfc with catch @ 0061ce34
                        */
  *(undefined ***)param_1 = &PTR_FUN_007b6ac0;
                    /* catch() { ... } // from try @ 0061ce4c with catch @ 0061ce38 */
  std::exception::~exception(param_1);
                    /* try { // try from 0061ce48 to 0071ce4b has its CatchHandler @ 0061ce5c */
                    /* try { // try from 0061ce4c to 0071ce6f has its CatchHandler @ 0061ce38 */
  operator_delete(param_1);
  return;
}


