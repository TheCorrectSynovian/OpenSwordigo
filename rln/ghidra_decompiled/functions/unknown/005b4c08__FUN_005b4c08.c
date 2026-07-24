/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4c08
 * Function: FUN_005b4c08
 * Signature: undefined FUN_005b4c08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x005b4cb8) */
/* WARNING: Removing unreachable block (ram,0x005b4cd4) */
/* WARNING: Removing unreachable block (ram,0x005b4cd8) */
/* WARNING: Removing unreachable block (ram,0x005b4ce0) */

undefined1  [16] FUN_005b4c08(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time
                    ((_func_tm_ptr_long_ptr_tm_ptr *)PTR_localtime_007e6828);
  lVar2 = *param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4bc8 with catch @ 005b4c30
                        */
  if ((2 < lVar1 + 0x8000000000000002U) && (2 < lVar2 + 0x8000000000000002U)) {
    lVar3 = lVar1 - lVar2;
    goto LAB_005b4d28;
  }
  lVar3 = 0x7ffffffffffffffe;
  if (lVar1 == -0x8000000000000000) {
LAB_005b4c7c:
    if (lVar2 == 0x7ffffffffffffffe) goto LAB_005b4d28;
    if (lVar1 == -0x8000000000000000) {
      lVar1 = 0x7ffffffffffffffe;
      if (lVar2 != -0x8000000000000000) {
        lVar1 = -0x8000000000000000;
      }
    }
    else if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = 0x7ffffffffffffffe;
      if (lVar2 != 0x7fffffffffffffff) {
        lVar1 = 0x7fffffffffffffff;
      }
    }
    else if (1 < lVar1 + 0x8000000000000001U) {
      if (lVar2 == -0x8000000000000000) {
        lVar3 = 0x7fffffffffffffff;
        goto LAB_005b4d28;
      }
      lVar3 = -0x8000000000000000;
      if (lVar2 == 0x7fffffffffffffff) goto LAB_005b4d28;
      goto LAB_005b4d08;
    }
  }
  else {
    if (lVar1 == 0x7ffffffffffffffe) goto LAB_005b4d28;
    if ((lVar1 == 0x7fffffffffffffff) || (lVar2 + 0x8000000000000002U < 3)) goto LAB_005b4c7c;
LAB_005b4d08:
    lVar1 = lVar1 - lVar2;
  }
                    /* try { // try from 005b4d10 to 006b4d13 has its CatchHandler @ 005b4d2c */
  lVar2 = lVar1;
  if (lVar1 != -0x8000000000000000) {
    lVar2 = 0x7ffffffffffffffe;
  }
  lVar3 = lVar1;
  if (lVar1 != 0x7fffffffffffffff) {
    lVar3 = lVar2;
  }
LAB_005b4d28:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4d10 with catch @ 005b4d2c
                        */
                    /* try { // try from 005b4d30 to 006b4d33 has its CatchHandler @ 005b4d3c */
                    /* try { // try from 005b4d34 to 006b4d3f has its CatchHandler @ 005b4b98 */
  auVar4._0_8_ = (double)lVar3 * DAT_00697380;
  auVar4._8_8_ = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4d30 with catch @ 005b4d3c
                        */
  return auVar4;
}


