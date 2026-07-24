/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c134
 * Function: FUN_0063c134
 * Signature: undefined FUN_0063c134(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063c134(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  char *__s;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  
  uVar10 = *(ulong *)(param_2 + 0x10);
  *param_1 = param_3;
  uVar5 = uVar10 << 3;
  *(undefined8 *)(param_1 + 2) = 0;
  if (0xfe0000000000000 < uVar10) {
    uVar5 = 0xffffffffffffffff;
  }
  *(ulong *)(param_1 + 4) = uVar10;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  pvVar6 = operator_new__(uVar5);
  uVar10 = *(ulong *)(param_1 + 4);
  *(void **)(param_1 + 2) = pvVar6;
  uVar5 = 0;
  if (uVar10 != 0) {
    lVar11 = 0;
    do {
      *(undefined8 *)((long)pvVar6 + lVar11 * 8) =
           *(undefined8 *)(*(long *)(param_2 + 8) + lVar11 * 8);
      lVar7 = *(long *)(*(long *)(param_1 + 2) + lVar11 * 8);
      if (lVar7 == 0) {
LAB_0063c1b0:
        if (uVar10 <= lVar11 + 1U) goto LAB_0063c1f8;
      }
      else {
        if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
          piVar2 = (int *)(lVar7 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar10 = *(ulong *)(param_1 + 4);
          goto LAB_0063c1b0;
        }
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                    /* try { // try from 0063c1f4 to 0073c1ff has its CatchHandler @ 0063cf14 */
        if (uVar10 <= lVar11 + 1U) goto LAB_0063c1f8;
      }
      lVar11 = lVar11 + 1;
      pvVar6 = *(void **)(param_1 + 2);
    } while( true );
  }
LAB_0063c208:
                    /* try { // try from 0063c208 to 0073c213 has its CatchHandler @ 0063cf14 */
  pvVar6 = operator_new__(uVar5);
  uVar5 = *(ulong *)(param_1 + 4);
  *(void **)(param_1 + 6) = pvVar6;
  if (uVar5 == 0) {
LAB_0063c288:
                    /* try { // try from 0063c288 to 0073c28f has its CatchHandler @ 0063ce78 */
    puVar8 = operator_new__(0x30);
    *(undefined8 **)(param_1 + 8) = puVar8;
    lVar11 = 0;
    *puVar8 = 0;
    *(undefined8 *)(*(long *)(param_1 + 8) + 8) = 0;
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x10) = 0;
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x18) = 0;
                    /* try { // try from 0063c2b4 to 0073c2bb has its CatchHandler @ 0063cde8 */
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x20) = 0;
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x28) = 0;
    do {
      __s = *(char **)(*(long *)(param_2 + 0x20) + lVar11);
      if (__s == (char *)0x0) {
        return;
      }
      sVar9 = strlen(__s);
                    /* try { // try from 0063c2dc to 0073c303 has its CatchHandler @ 0063ccac */
      lVar7 = *(long *)(param_1 + 8);
      pvVar6 = operator_new__(sVar9 + 1);
      *(void **)(lVar7 + lVar11) = pvVar6;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + lVar11);
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x20) + lVar11);
      lVar11 = lVar11 + 8;
      memcpy((void *)*puVar8,(void *)*puVar1,sVar9 + 1);
    } while (lVar11 != 0x30);
    return;
  }
                    /* try { // try from 0063c21c to 0073c223 has its CatchHandler @ 0063ce50 */
  lVar11 = 0;
  do {
    *(undefined8 *)((long)pvVar6 + lVar11 * 8) =
         *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar11 * 8);
    lVar7 = *(long *)(*(long *)(param_1 + 6) + lVar11 * 8);
    if (lVar7 == 0) {
LAB_0063c240:
                    /* try { // try from 0063c240 to 0073c24b has its CatchHandler @ 0063ce68 */
      if (uVar5 <= lVar11 + 1U) goto LAB_0063c288;
    }
    else {
      if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
        piVar2 = (int *)(lVar7 + 8);
        do {
                    /* try { // try from 0063c22c to 0073c237 has its CatchHandler @ 0063ce68 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 0063c238 to 0073c23f has its CatchHandler @ 0063ce38 */
        } while (cVar3 != '\0');
        uVar5 = *(ulong *)(param_1 + 4);
        goto LAB_0063c240;
      }
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      if (uVar5 <= lVar11 + 1U) goto LAB_0063c288;
    }
    lVar11 = lVar11 + 1;
    pvVar6 = *(void **)(param_1 + 6);
  } while( true );
LAB_0063c1f8:
  uVar5 = uVar10 << 3;
                    /* try { // try from 0063c200 to 0073c207 has its CatchHandler @ 0063ce54 */
  if (0xfe0000000000000 < uVar10) {
    uVar5 = 0xffffffffffffffff;
  }
  goto LAB_0063c208;
}


