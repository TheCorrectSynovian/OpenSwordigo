/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d874
 * Function: FUN_0061d874
 * Signature: undefined FUN_0061d874(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


char FUN_0061d874(long param_1,long *param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long *local_8;
  byte *pbVar9;
  
                    /* catch() { ... } // from try @ 0061d3b4 with catch @ 0061d87c */
  pbVar8 = (byte *)(*(long *)(param_1 + 0x18) + ~param_4);
  do {
    uVar6 = 0;
    uVar5 = 0;
    pbVar9 = pbVar8;
    do {
      pbVar8 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar2 = uVar5 & 0x3f;
      uVar5 = (ulong)((int)uVar5 + 7);
      uVar6 = uVar6 | ((ulong)bVar1 & 0x7f) << uVar2;
      pbVar9 = pbVar8;
    } while ((char)bVar1 < '\0');
    if (uVar6 == 0) {
      return '\0';
    }
    bVar1 = *(byte *)(param_1 + 0x28);
    if (bVar1 == 0xff) {
                    /* catch() { ... } // from try @ 0061d210 with catch @ 0061d990 */
      lVar7 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0061d3a0 with catch @ 0061d8e0 */
                    /* catch() { ... } // from try @ 0061d374 with catch @ 0061d8e4 */
      switch(bVar1 & 7) {
      case 0:
      case 4:
        lVar7 = uVar6 * -8;
                    /* catch() { ... } // from try @ 0061d26c with catch @ 0061d98c */
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      case 2:
        lVar7 = uVar6 * -2;
        break;
      case 3:
        lVar7 = uVar6 * -4;
      }
    }
    FUN_0061d5dc(bVar1,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18) + lVar7,&local_8);
    plVar3 = local_8;
    local_8 = param_3;
    cVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar4 != '\0') {
                    /* catch() { ... } // from try @ 0061d360 with catch @ 0061d938 */
                    /* catch() { ... } // from try @ 0061d304 with catch @ 0061d93c */
      local_8 = (long *)*local_8;
    }
    cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,&local_8,1);
  } while (cVar4 == '\0');
  return cVar4;
}


