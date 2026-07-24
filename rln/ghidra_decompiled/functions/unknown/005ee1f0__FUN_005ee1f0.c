/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee1f0
 * Function: FUN_005ee1f0
 * Signature: undefined FUN_005ee1f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ee1f0(long param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  
                    /* try { // try from 005ee1f4 to 006ee1fb has its CatchHandler @ 005ee72c */
  lVar3 = *(long *)(param_1 + 0x20);
  bVar1 = *(byte *)(lVar3 + 0x21);
  if (1 < bVar1) goto LAB_005ee234;
  *(undefined4 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(long *)(lVar3 + 0x30) = lVar3 + 0x28;
  *(undefined8 *)(lVar3 + 0x38) = 0;
                    /* try { // try from 005ee224 to 006ee22f has its CatchHandler @ 005ee6dc */
  *(undefined1 *)(lVar3 + 0x21) = 2;
  do {
    FUN_005edd78(param_1);
    bVar1 = *(byte *)(lVar3 + 0x21);
LAB_005ee234:
  } while (bVar1 != 4);
  FUN_005ee294(param_1);
  cVar2 = *(char *)(lVar3 + 0x21);
  while (cVar2 != '\0') {
                    /* try { // try from 005ee250 to 006ee277 has its CatchHandler @ 005ee624 */
    FUN_005edd78(param_1);
    cVar2 = *(char *)(lVar3 + 0x21);
  }
                    /* try { // try from 005ee278 to 006ee28b has its CatchHandler @ 005ee6d8 */
  *(ulong *)(lVar3 + 0x70) = (*(ulong *)(lVar3 + 0x80) / 100) * (long)*(int *)(lVar3 + 0x90);
                    /* try { // try from 005ee28c to 006ee29b has its CatchHandler @ 005ee908 */
  return;
}


