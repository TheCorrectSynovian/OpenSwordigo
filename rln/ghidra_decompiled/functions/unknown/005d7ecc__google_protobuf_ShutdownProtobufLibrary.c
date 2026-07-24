/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7ecc
 * Function: google::protobuf::ShutdownProtobufLibrary
 * Signature: undefined __cdecl ShutdownProtobufLibrary(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::ShutdownProtobufLibrary() */

void google::protobuf::ShutdownProtobufLibrary(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar3 = pthread_once((pthread_once_t *)PTR_shutdown_functions_init_007e6518,
                       (__init_routine *)PTR_InitShutdownFunctions_007e7e68);
  puVar2 = PTR_shutdown_functions_007e7ad8;
  uVar4 = (ulong)uVar3;
  plVar6 = *(long **)PTR_shutdown_functions_007e7ad8;
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar6;
  if (plVar6[1] != lVar5) {
    uVar8 = 0;
    do {
      uVar4 = (**(code **)(lVar5 + uVar8 * 8))(uVar4);
      plVar6 = *(long **)puVar2;
      uVar8 = uVar8 + 1;
      lVar5 = *plVar6;
    } while (uVar8 < (ulong)(plVar6[1] - lVar5 >> 3));
    if (plVar6 == (long *)0x0) goto LAB_005d7f4c;
  }
  if ((void *)*plVar6 != (void *)0x0) {
    operator_delete((void *)*plVar6);
  }
  operator_delete(plVar6);
LAB_005d7f4c:
  puVar1 = PTR_shutdown_functions_mutex_007e6de8;
  *(undefined8 *)puVar2 = 0;
  puVar7 = *(undefined8 **)puVar1;
  if (puVar7 != (undefined8 *)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)*puVar7);
    if ((void *)*puVar7 != (void *)0x0) {
                    /* try { // try from 005d7f70 to 006d7f77 has its CatchHandler @ 005d7fc8 */
      operator_delete((void *)*puVar7);
    }
                    /* try { // try from 005d7f78 to 006d7ff3 has its CatchHandler @ 005d7c60 */
    operator_delete(puVar7);
  }
  *(undefined8 *)puVar1 = 0;
  return;
}


