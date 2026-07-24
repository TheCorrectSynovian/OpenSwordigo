/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005788b8
 * Function: Java_com_touchfoo_swordigo_Native_handleApplicationQuit
 * Signature: undefined Java_com_touchfoo_swordigo_Native_handleApplicationQuit(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_handleApplicationQuit(void)

{
  long *plVar1;
  long lVar2;
  
  if (DAT_007e9c20 != (long *)0x0) {
    if (DAT_007e9c79 == '\x01') {
      (**(code **)(*DAT_007e9c20 + 0x58))();
      DAT_007e9c79 = '\0';
    }
    (**(code **)(*DAT_007e9c20 + 0x38))();
    plVar1 = DAT_007e9c28;
    DAT_007e9c20 = (long *)0x0;
    DAT_007e9c28 = (long *)0x0;
    if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[1], plVar1[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    Caver::RenderingContext::SetCurrentContext((RenderingContext *)0x0);
    plVar1 = DAT_007e9c18;
    DAT_007e9c10 = 0;
    DAT_007e9c18 = (long *)0x0;
    if ((plVar1 != (long *)0x0) && (lVar2 = plVar1[1], plVar1[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar2 = plVar1[2];
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  DAT_007e9c7c = 0;
  if (DAT_007e9c68 != 0) {
    (**(code **)(*DAT_007e9c60 + 0xb0))();
  }
  DAT_007e9c78 = 0;
  return;
}


