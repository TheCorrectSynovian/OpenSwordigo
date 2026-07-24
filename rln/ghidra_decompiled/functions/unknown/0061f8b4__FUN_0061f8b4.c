/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f8b4
 * Function: FUN_0061f8b4
 * Signature: undefined FUN_0061f8b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061f8b4(undefined8 *param_1,__off_t param_2,int param_3)

{
  int __fd;
  
                    /* try { // try from 0061f8c4 to 0071f913 has its CatchHandler @ 0061f8c4
                       catch() { ... } // from try @ 0061f8c4 with catch @ 0061f8c4
                       catch() { ... } // from try @ 0061f950 with catch @ 0061f8c4 */
  __fd = fileno((FILE *)*param_1);
  lseek(__fd,param_2,param_3);
  return;
}


