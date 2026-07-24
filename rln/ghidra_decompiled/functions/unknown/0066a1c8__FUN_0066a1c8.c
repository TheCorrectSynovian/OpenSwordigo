/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066a1c8
 * Function: FUN_0066a1c8
 * Signature: undefined FUN_0066a1c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066a1c8(long *param_1,long param_2,long param_3,char *param_4)

{
  size_t sVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066a190 with catch @ 0066a1d4
                        */
  sVar1 = strlen(param_4);
                    /* try { // try from 0066a1f8 to 0076a1ff has its CatchHandler @ 0066a208 */
                    /* try { // try from 0066a200 to 0076a20b has its CatchHandler @ 0066a140 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066a1f8 with catch @ 0066a208
                        */
                    /* try { // try from 0066a20c to 0076a2bf has its CatchHandler @ 0066a20c
                       catch() { ... } // from try @ 0066a20c with catch @ 0066a20c
                       catch() { ... } // from try @ 0066a2c4 with catch @ 0066a20c */
  FUN_00669e1c(param_1,param_2 - *param_1,param_3 - param_2,param_4,sVar1);
  return;
}


