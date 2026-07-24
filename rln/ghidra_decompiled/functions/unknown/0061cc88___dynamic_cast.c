/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061cc88
 * Function: __dynamic_cast
 * Signature: undefined __dynamic_cast(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long __dynamic_cast(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  plVar2 = *(long **)(*param_1 + -8);
  local_18 = 0;
  local_10 = 0;
                    /* try { // try from 0061ccf0 to 0071ccfb has its CatchHandler @ 0061ca50 */
  local_c = 0;
  local_8 = 0;
                    /* catch() { ... } // from try @ 0061cc10 with catch @ 0061ccf8 */
  local_4 = 0x10;
  (**(code **)(*plVar2 + 0x38))
            (plVar2,param_4,6,param_3,(long)param_1 + *(long *)(*param_1 + -0x10),param_2,param_1,
             &local_18);
  if (local_18 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0061cdbc with catch @ 0061cd08
                       catch(type#1 @ 00000000) { ... } // from try @ 0061ce2c with catch @ 0061cd08
                        */
    if ((local_8 & 6) == 6) {
      return local_18;
    }
    if ((local_c & local_10 & 6) == 6) {
      return local_18;
    }
    if (((local_c & 5) != 4) && (local_8 == 0)) {
      if (param_4 < 0) {
                    /* try { // try from 0061cd94 to 0071cdbb has its CatchHandler @ 0061cdd0 */
        if ((param_4 != -2) &&
           (uVar1 = (**(code **)(*param_3 + 0x40))(param_3,param_4,local_18,param_2,param_1),
           (uVar1 & 6) == 6)) {
          return local_18;
        }
      }
      else {
                    /* try { // try from 0061cd4c to 0071cd73 has its CatchHandler @ 0061cdd8 */
        if (param_1 == (long *)(local_18 + param_4)) {
          return local_18;
        }
      }
    }
  }
  return 0;
}


