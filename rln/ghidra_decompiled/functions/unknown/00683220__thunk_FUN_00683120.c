/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00683220
 * Function: thunk_FUN_00683120
 * Signature: undefined thunk_FUN_00683120(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long thunk_FUN_00683120(int *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_007fe568);
  }
  plVar1 = &DAT_007fe590;
  for (lVar2 = DAT_007fe590; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x28)) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_006831b0;
    plVar1 = (long *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_007fe598;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_006831b0;
    }
    else if ((int *)**(undefined8 **)(lVar2 + 0x18) == param_1) {
      *plVar1 = *(long *)(lVar2 + 0x28);
      free(*(void **)(lVar2 + 0x18));
      goto LAB_00683204;
    }
    plVar1 = (long *)(lVar2 + 0x28);
  }
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00683200;
LAB_006831f0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fe568);
  if (lVar2 != 0) {
    return lVar2;
  }
LAB_00683200:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_006831b0:
  *plVar1 = *(long *)(lVar2 + 0x28);
LAB_00683204:
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    return lVar2;
  }
  goto LAB_006831f0;
}


