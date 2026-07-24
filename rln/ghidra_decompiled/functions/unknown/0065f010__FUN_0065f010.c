/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f010
 * Function: FUN_0065f010
 * Signature: undefined FUN_0065f010(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0065f010(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long local_10;
  undefined8 local_8;
  
  if (*(long **)(param_1 + 200) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  cVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x30))();
  if (cVar3 == '\0') {
    iVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x40))(*(long **)(param_1 + 200));
    lVar1 = -(iVar4 * param_3 + 0x1eU & 0xfffffffffffffff0);
    uVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x10))
                      (*(long **)(param_1 + 200),param_1 + 0x84,param_2,param_2 + param_3,&local_8,
                       &stack0xffffffffffffff90 + lVar1,
                       &stack0xffffffffffffff90 + iVar4 * param_3 + lVar1,&local_10);
    lVar2 = local_10;
    if (uVar5 < 2) {
      param_3 = local_10 - (long)(&stack0xffffffffffffff90 + lVar1);
      lVar6 = FUN_0061f798(param_1 + 0x68,&stack0xffffffffffffff90 + lVar1,param_3);
      if ((param_3 == lVar6) && ((uVar5 & 1) != 0)) {
        iVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x10))
                          (*(long **)(param_1 + 200),param_1 + 0x84,local_8,
                           *(undefined8 *)(param_1 + 0x28),&local_8,&stack0xffffffffffffff90 + lVar1
                           ,lVar2,&local_10);
        if (iVar4 == 2) goto LAB_0065f184;
        param_3 = local_10 - (long)(&stack0xffffffffffffff90 + lVar1);
        lVar6 = FUN_0061f798(param_1 + 0x68,&stack0xffffffffffffff90 + lVar1,param_3);
      }
      goto LAB_0065f0e0;
    }
    if (uVar5 != 3) {
LAB_0065f184:
                    /* WARNING: Subroutine does not return */
      FUN_00665ad8("basic_filebuf::_M_convert_to_external conversion error");
    }
  }
  lVar6 = FUN_0061f798(param_1 + 0x68,param_2,param_3);
LAB_0065f0e0:
  return lVar6 == param_3;
}


