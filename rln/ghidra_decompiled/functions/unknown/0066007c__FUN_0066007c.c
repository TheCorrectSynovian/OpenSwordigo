/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066007c
 * Function: FUN_0066007c
 * Signature: undefined FUN_0066007c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066007c(long *param_1,undefined8 param_2)

{
  void *__src;
  size_t __n;
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  size_t sVar5;
  
  cVar1 = FUN_0062f12c(param_2);
  if (cVar1 == '\0') {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)FUN_0062dab8(param_2);
  }
  cVar1 = FUN_0061f654(param_1 + 0xd);
  if ((cVar1 == '\0') ||
     ((*(char *)((long)param_1 + 0xa9) == '\0' && (*(char *)((long)param_1 + 0xaa) == '\0'))))
  goto LAB_006600c4;
  if ((long *)param_1[0x19] == (long *)0x0) {
LAB_0066025c:
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  iVar2 = (**(code **)(*(long *)param_1[0x19] + 0x28))();
  if (iVar2 == -1) {
LAB_00660164:
    param_1[0x19] = 0;
    return;
  }
  if (*(char *)((long)param_1 + 0xa9) == '\0') {
    if (*(char *)((long)param_1 + 0xaa) != '\0') {
      cVar1 = FUN_0065f224(param_1);
      if (cVar1 == '\0') goto LAB_00660164;
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
    if ((long *)param_1[0x19] == (long *)0x0) goto LAB_0066025c;
    cVar1 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
    if (cVar1 == '\0') {
      lVar4 = param_1[0x1a];
                    /* try { // try from 006601f8 to 0076022f has its CatchHandler @ 006601f8
                       catch() { ... } // from try @ 006601f8 with catch @ 006601f8
                       catch() { ... } // from try @ 00660234 with catch @ 006601f8 */
      iVar2 = (**(code **)(*(long *)param_1[0x19] + 0x38))
                        ((long *)param_1[0x19],(long)param_1 + 0x8c,lVar4,param_1[0x1c],
                         param_1[2] - param_1[1]);
      __src = (void *)(lVar4 + iVar2);
      param_1[0x1c] = (long)__src;
      __n = param_1[0x1d] - (long)__src;
      sVar5 = 0;
      if (__n != 0) {
        memmove((void *)param_1[0x1a],__src,__n);
        sVar5 = __n;
      }
      lVar4 = param_1[0x13];
      param_1[0x1c] = param_1[0x1a];
      param_1[0x1d] = param_1[0x1a] + sVar5;
      param_1[1] = lVar4;
      param_1[2] = lVar4;
                    /* try { // try from 00660230 to 00760233 has its CatchHandler @ 00660264 */
      param_1[3] = lVar4;
                    /* try { // try from 00660234 to 00760277 has its CatchHandler @ 006601f8 */
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0x84) = *(undefined8 *)((long)param_1 + 0x7c);
      *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x7c);
    }
    else if (((plVar3 != (long *)0x0) &&
             (cVar1 = (**(code **)(*plVar3 + 0x30))(plVar3), cVar1 == '\0')) &&
            (lVar4 = (**(code **)(*param_1 + 0x20))(param_1,0,1,(int)param_1[0xf]), lVar4 == -1))
    goto LAB_00660164;
  }
LAB_006600c4:
  param_1[0x19] = (long)plVar3;
  return;
}


