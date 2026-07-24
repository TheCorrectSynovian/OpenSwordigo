/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e27c
 * Function: __cxa_guard_acquire
 * Signature: undefined __cxa_guard_acquire(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 __cxa_guard_acquire(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if (PTR___google_potentially_blocking_region_begin_007e4a88 != (undefined *)0x0) {
    __google_potentially_blocking_region_begin();
  }
  if ((char)*param_1 == '\0') {
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
LAB_0061e2d8:
      uVar1 = *param_1;
      if (uVar1 == 0) goto code_r0x0061e2e4;
      goto LAB_0061e2ec;
    }
                    /* catch() { ... } // from try @ 0061e368 with catch @ 0061e2f8
                       catch() { ... } // from try @ 0061e404 with catch @ 0061e2f8
                       catch() { ... } // from try @ 0061e6b8 with catch @ 0061e2f8
                       catch() { ... } // from try @ 0061ec60 with catch @ 0061e2f8 */
    if ((char)*param_1 == '\0') {
      if (*(char *)((long)param_1 + 1) != '\0') {
        plVar6 = (long *)__cxa_allocate_exception(8);
                    /* try { // try from 0061e3d8 to 0071e3eb has its CatchHandler @ 0061ecb8 */
        *plVar6 = (long)(PTR_vtable_007e6230 + 0x10);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(plVar6,PTR_typeinfo_007e4898,PTR__recursive_init_error_007e51b8);
      }
      uVar5 = 1;
      *(undefined1 *)((long)param_1 + 1) = 1;
                    /* try { // try from 0061e3a8 to 0071e3b7 has its CatchHandler @ 0061ecbc */
      goto LAB_0061e304;
    }
  }
LAB_0061e300:
  uVar5 = 0;
LAB_0061e304:
  if (PTR___google_potentially_blocking_region_end_007e5448 != (undefined *)0x0) {
    __google_potentially_blocking_region_end();
  }
  return uVar5;
code_r0x0061e2e4:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar4) {
    *param_1 = 0x100;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') {
LAB_0061e2ec:
    if (uVar1 == 0) {
      uVar5 = 1;
      goto LAB_0061e304;
    }
    if (uVar1 != 1) {
      if (uVar1 == 0x100) {
        do {
          uVar2 = *param_1;
                    /* try { // try from 0061e368 to 0071e3a7 has its CatchHandler @ 0061e2f8 */
          if (uVar2 != 0x100) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *param_1 = 0x10100;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar1 = 0x10100;
        if (uVar2 != 0x100) {
          if (uVar2 == 1) goto LAB_0061e300;
          if (uVar2 == 0) goto LAB_0061e2d8;
        }
      }
                    /* try { // try from 0061e348 to 0071e35b has its CatchHandler @ 0061ed68 */
      syscall(0x62,param_1,0,(ulong)uVar1,0);
                    /* try { // try from 0061e35c to 0071e367 has its CatchHandler @ 0061ecf4 */
      goto LAB_0061e2d8;
    }
    goto LAB_0061e300;
  }
  goto LAB_0061e2d8;
}


