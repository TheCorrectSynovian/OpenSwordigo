/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8834
 * Function: google::protobuf::internal::ExtensionSet::Extension::Free
 * Signature: undefined __thiscall Free(Extension * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Extension::Free() */

void __thiscall google::protobuf::internal::ExtensionSet::Extension::Free(Extension *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  
                    /* catch() { ... } // from try @ 005d8830 with catch @ 005d8834 */
                    /* try { // try from 005d8838 to 006d883b has its CatchHandler @ 005d8844 */
                    /* try { // try from 005d883c to 006d8847 has its CatchHandler @ 005d87cc */
                    /* catch() { ... } // from try @ 005d8838 with catch @ 005d8844 */
                    /* catch() { ... } // from try @ 005d88f8 with catch @ 005d8848 */
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005d8860 to 006d8867 has its CatchHandler @ 005d8904 */
  iVar9 = *(int *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)this[8] * 4);
  if (this[9] == (Extension)0x0) {
    if (iVar9 == 10) {
      if (*(long **)this != (long *)0x0) {
                    /* try { // try from 005d8914 to 006d891f has its CatchHandler @ 005d8920 */
        (**(code **)(**(long **)this + 8))();
                    /* catch() { ... } // from try @ 005d8914 with catch @ 005d8920 */
      }
      goto switchD_005d8888_default;
    }
    if ((iVar9 != 9) || (plVar10 = *(long **)this, plVar10 == (long *)0x0))
    goto switchD_005d8888_default;
                    /* try { // try from 005d88d0 to 006d88f7 has its CatchHandler @ 005d8900 */
    puVar4 = (undefined *)(*plVar10 + -0x18);
    if (puVar4 != PTR_DAT_007e5de8) {
                    /* try { // try from 005d89c0 to 006d89c3 has its CatchHandler @ 005d8a20 */
      piVar8 = (int *)(*plVar10 + -8);
                    /* try { // try from 005d89c4 to 006d8a3f has its CatchHandler @ 005d8954 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(puVar4);
      }
    }
  }
  else {
    switch(iVar9) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      plVar10 = *(long **)this;
      if (plVar10 == (long *)0x0) goto switchD_005d8888_default;
                    /* try { // try from 005d8894 to 006d889f has its CatchHandler @ 005d88ac */
      plVar5 = (long *)*plVar10;
      if (plVar5 == plVar10 + 2) goto LAB_005d88e0;
      goto LAB_005d88a4;
    case 9:
      plVar10 = *(long **)this;
      if (plVar10 == (long *)0x0) goto switchD_005d8888_default;
      plVar5 = (long *)*plVar10;
      if (0 < *(int *)((long)plVar10 + 0xc)) {
        lVar11 = 0;
        do {
          StringTypeHandlerBase::Delete((string *)plVar5[lVar11]);
          plVar5 = (long *)*plVar10;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((long)plVar10 + 0xc));
      }
      break;
    case 10:
                    /* try { // try from 005d8924 to 006d8927 has its CatchHandler @ 005d892c */
      plVar10 = *(long **)this;
      if (plVar10 == (long *)0x0) goto switchD_005d8888_default;
                    /* catch() { ... } // from try @ 005d8924 with catch @ 005d892c */
      iVar9 = *(int *)((long)plVar10 + 0xc);
      plVar5 = (long *)*plVar10;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          plVar7 = (long *)plVar5[lVar11];
          if (plVar7 != (long *)0x0) {
                    /* catch() { ... } // from try @ 005d89c4 with catch @ 005d8954
                       catch() { ... } // from try @ 005d8a68 with catch @ 005d8954 */
            (**(code **)(*plVar7 + 8))(plVar7);
            iVar9 = *(int *)((long)plVar10 + 0xc);
            plVar5 = (long *)*plVar10;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar9);
      }
      break;
    default:
      goto switchD_005d8888_default;
    }
    if (plVar5 != plVar10 + 3) {
LAB_005d88a4:
      if (plVar5 != (long *)0x0) {
        operator_delete__(plVar5);
                    /* catch() { ... } // from try @ 005d8894 with catch @ 005d88ac */
      }
    }
  }
LAB_005d88e0:
  operator_delete(plVar10);
switchD_005d8888_default:
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005d88f8 to 006d8913 has its CatchHandler @ 005d8848 */
                    /* catch() { ... } // from try @ 005d88d0 with catch @ 005d8900 */
                    /* catch() { ... } // from try @ 005d8860 with catch @ 005d8904 */
  return;
}


