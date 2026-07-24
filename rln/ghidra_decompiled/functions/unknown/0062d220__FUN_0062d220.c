/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d220
 * Function: FUN_0062d220
 * Signature: undefined FUN_0062d220(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062d220(undefined8 param_1,long *param_2)

{
                    /* try { // try from 0062d22c to 0072d23f has its CatchHandler @ 0062d1c4 */
  (**(code **)(*param_2 + 0x18))();
                    /* catch() { ... } // from try @ 0062d204 with catch @ 0062d23c */
                    /* try { // try from 0062d240 to 0072d247 has its CatchHandler @ 0062d250 */
                    /* try { // try from 0062d248 to 0072d253 has its CatchHandler @ 0062d1c4 */
  return param_1;
}


