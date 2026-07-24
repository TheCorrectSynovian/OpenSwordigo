/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00662bc4
 * Function: FUN_00662bc4
 * Signature: undefined FUN_00662bc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00662bc4(long *param_1,undefined8 param_2)

{
  void *__src;
  size_t __n;
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  size_t sVar5;
  
  cVar1 = FUN_006516a0(param_2);
  if (cVar1 == '\0') {
    plVar3 = (long *)0x0;
  }
  else {
                    /* try { // try from 00662bec to 00762bef has its CatchHandler @ 00662d6c */
    plVar3 = (long *)FUN_0064fd60(param_2);
  }
  cVar1 = FUN_0061f654(param_1 + 0xd);
  if ((cVar1 == '\0') ||
     ((*(char *)((long)param_1 + 0xa9) == '\0' && (*(char *)((long)param_1 + 0xaa) == '\0'))))
  goto LAB_00662c0c;
  if ((long *)param_1[0x19] == (long *)0x0) {
LAB_00662da8:
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  iVar2 = (**(code **)(*(long *)param_1[0x19] + 0x28))();
  if (iVar2 == -1) {
LAB_00662cac:
    param_1[0x19] = 0;
    return;
  }
  if (*(char *)((long)param_1 + 0xa9) == '\0') {
    if (*(char *)((long)param_1 + 0xaa) != '\0') {
      cVar1 = FUN_00662468(param_1);
      if (cVar1 == '\0') goto LAB_00662cac;
      lVar4 = param_1[0x13];
      param_1[1] = lVar4;
      param_1[2] = lVar4;
      param_1[3] = lVar4;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
    }
  }
  else {
                    /* try { // try from 00662c50 to 00762c53 has its CatchHandler @ 00662d94 */
    if ((long *)param_1[0x19] == (long *)0x0) goto LAB_00662da8;
    cVar1 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
    if (cVar1 == '\0') {
                    /* catch() { ... } // from try @ 00662aec with catch @ 00662d1c */
      lVar4 = param_1[0x1a];
                    /* catch() { ... } // from try @ 00662b4c with catch @ 00662d38 */
                    /* try { // try from 00662d40 to 00762d47 has its CatchHandler @ 00662d4c */
      iVar2 = (**(code **)(*(long *)param_1[0x19] + 0x38))
                        ((long *)param_1[0x19],(long)param_1 + 0x8c,lVar4,param_1[0x1c],
                         param_1[2] - param_1[1] >> 2);
      __src = (void *)(lVar4 + iVar2);
                    /* catch() { ... } // from try @ 00662d40 with catch @ 00662d4c */
                    /* catch() { ... } // from try @ 00662b64 with catch @ 00662d50 */
      param_1[0x1c] = (long)__src;
      __n = param_1[0x1d] - (long)__src;
      sVar5 = 0;
                    /* try { // try from 00662d58 to 00762d5f has its CatchHandler @ 00662d64 */
      if (__n != 0) {
        memmove((void *)param_1[0x1a],__src,__n);
        sVar5 = __n;
      }
      lVar4 = param_1[0x13];
                    /* catch() { ... } // from try @ 00662d58 with catch @ 00662d64 */
                    /* catch() { ... } // from try @ 00662a2c with catch @ 00662d68
                       catch() { ... } // from try @ 00662a78 with catch @ 00662d68
                       catch() { ... } // from try @ 00662b1c with catch @ 00662d68
                       catch() { ... } // from try @ 00662b54 with catch @ 00662d68
                       catch() { ... } // from try @ 00662b6c with catch @ 00662d68
                       catch() { ... } // from try @ 00662c0c with catch @ 00662d68
                       catch() { ... } // from try @ 00662c70 with catch @ 00662d68 */
                    /* catch() { ... } // from try @ 00662bec with catch @ 00662d6c */
      param_1[0x1c] = param_1[0x1a];
                    /* catch() { ... } // from try @ 00662ba4 with catch @ 00662d70 */
      param_1[0x1d] = param_1[0x1a] + sVar5;
                    /* catch() { ... } // from try @ 00662ab8 with catch @ 00662d74 */
      param_1[1] = lVar4;
      param_1[2] = lVar4;
      param_1[3] = lVar4;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0x84) = *(undefined8 *)((long)param_1 + 0x7c);
      *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x7c);
                    /* catch() { ... } // from try @ 00662c50 with catch @ 00662d94 */
    }
    else {
                    /* try { // try from 00662c70 to 00762d17 has its CatchHandler @ 00662d68 */
      if (((plVar3 != (long *)0x0) && (cVar1 = (**(code **)(*plVar3 + 0x30))(plVar3), cVar1 == '\0')
          ) && (lVar4 = (**(code **)(*param_1 + 0x20))(param_1,0,1,(int)param_1[0xf]), lVar4 == -1))
      goto LAB_00662cac;
    }
  }
LAB_00662c0c:
                    /* try { // try from 00662c0c to 00762c0f has its CatchHandler @ 00662d68 */
  param_1[0x19] = (long)plVar3;
  return;
}


