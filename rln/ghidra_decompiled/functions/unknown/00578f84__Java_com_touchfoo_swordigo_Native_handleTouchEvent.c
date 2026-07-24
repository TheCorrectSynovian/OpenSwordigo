/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578f84
 * Function: Java_com_touchfoo_swordigo_Native_handleTouchEvent
 * Signature: undefined Java_com_touchfoo_swordigo_Native_handleTouchEvent(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_handleTouchEvent
               (undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,undefined8 param_7,undefined4 param_8,int param_9,
               undefined4 param_10)

{
  long lVar1;
  code *pcVar2;
  long local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_007e9c20 != (long *)0x0) {
    local_50 = (long)param_9;
    local_48 = (param_2 - (float)DAT_007e9c90) / DAT_007e9ca8;
    fStack_44 = (param_3 - DAT_007e9c90._4_4_) / DAT_007e9ca8;
    local_40 = (param_4 - (float)DAT_007e9c90) / DAT_007e9ca8;
    fStack_3c = (param_5 - DAT_007e9c90._4_4_) / DAT_007e9ca8;
    local_2c = 0;
    local_38 = param_1;
    local_30 = param_10;
    switch(param_8) {
    case 1:
      pcVar2 = *(code **)*DAT_007e9c20;
      break;
    case 2:
      pcVar2 = *(code **)(*DAT_007e9c20 + 0x10);
      break;
    case 3:
      pcVar2 = *(code **)(*DAT_007e9c20 + 0x18);
      break;
    case 4:
      pcVar2 = *(code **)(*DAT_007e9c20 + 8);
      break;
    default:
      goto switchD_00579018_default;
    }
    (*pcVar2)(DAT_007e9c20,&local_50);
  }
switchD_00579018_default:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


