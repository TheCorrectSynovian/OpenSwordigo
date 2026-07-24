/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d5dc
 * Function: FUN_0061d5dc
 * Signature: undefined FUN_0061d5dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong * FUN_0061d5dc(byte param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong local_8;
  
  if (param_1 != 0x50) {
    switch(param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar4 = param_3 + 1;
      local_8 = *param_3;
      break;
    case 1:
      local_8 = 0;
      uVar5 = 0;
      puVar3 = param_3;
      do {
        puVar4 = (ulong *)((long)puVar3 + 1);
        uVar2 = *puVar3;
        uVar1 = uVar5 & 0x3f;
        uVar5 = (ulong)((int)uVar5 + 7);
        local_8 = local_8 | ((ulong)(byte)uVar2 & 0x7f) << uVar1;
        puVar3 = puVar4;
      } while ((char)(byte)uVar2 < '\0');
      break;
    case 2:
      puVar4 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong)(ushort)*param_3;
      break;
    case 3:
      puVar4 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong)(uint)*param_3;
      break;
    default:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0061d604 to 0071d62b has its CatchHandler @ 0061d7b4 */
      abort();
    case 9:
                    /* try { // try from 0061d670 to 0071d673 has its CatchHandler @ 0061db00 */
      puVar4 = (ulong *)FUN_0061d59c(param_3,&local_8);
                    /* try { // try from 0061d674 to 0071d7e7 has its CatchHandler @ 0061cf44 */
      break;
    case 10:
      puVar4 = (ulong *)((long)param_3 + 2);
      local_8 = (ulong)(short)*param_3;
      break;
    case 0xb:
      puVar4 = (ulong *)((long)param_3 + 4);
      local_8 = (ulong)(int)(uint)*param_3;
    }
    if (local_8 != 0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = local_8 + (long)param_3;
      if ((char)param_1 < '\0') {
        local_8 = *(ulong *)local_8;
      }
    }
    *param_4 = local_8;
                    /* try { // try from 0061d64c to 0071d64f has its CatchHandler @ 0061daf0 */
    return puVar4;
  }
  puVar4 = (ulong *)((long)param_3 + 7U & 0xfffffffffffffff8);
  *param_4 = *puVar4;
  return puVar4 + 1;
}


