/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e03c4
 * Function: FUN_005e03c4
 * Signature: undefined FUN_005e03c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005e03c4(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *__s;
  size_t __n;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  pvVar3 = operator_new(0x30);
  uVar2 = DAT_006986a8;
                    /* try { // try from 005e03e4 to 006e03f7 has its CatchHandler @ 005e037c */
  *(undefined8 *)((long)pvVar3 + 0x10) = 0;
  *(undefined8 *)((long)pvVar3 + 0x18) = 0;
  *(undefined8 *)((long)pvVar3 + 0x28) = 0;
  puVar4 = (ulong *)PTR_DAT_007e5dd8;
                    /* catch() { ... } // from try @ 005e03bc with catch @ 005e03f4 */
                    /* try { // try from 005e03f8 to 006e03ff has its CatchHandler @ 005e0408 */
  uVar5 = 0x130;
  *(undefined8 *)((long)pvVar3 + 0x20) = uVar2;
  do {
                    /* try { // try from 005e0400 to 006e040b has its CatchHandler @ 005e037c */
    uVar6 = uVar5 >> 1;
                    /* catch() { ... } // from try @ 005e03f8 with catch @ 005e0408 */
                    /* catch() { ... } // from try @ 005e0498 with catch @ 005e040c */
    puVar1 = puVar4 + uVar6 + 1;
    uVar5 = (uVar5 - 1) - uVar6;
    if (9 < puVar4[uVar6]) {
      puVar1 = puVar4;
      uVar5 = uVar6;
    }
    puVar4 = puVar1;
  } while (0 < (long)uVar5);
  uVar5 = *puVar1;
  *(long *)((long)pvVar3 + 0x28) = (long)(float)*puVar1;
  *(ulong *)((long)pvVar3 + 0x10) = uVar5;
  if (uVar5 + 1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005e0490 with catch @ 005e049c */
    FUN_00665294();
  }
                    /* try { // try from 005e044c to 006e0473 has its CatchHandler @ 005e048c */
  __s = operator_new((uVar5 + 1) * 8);
  __n = uVar5 * 8;
  if (__n != 0) {
    memset(__s,0,__n);
  }
                    /* try { // try from 005e0474 to 006e047b has its CatchHandler @ 005e04a0 */
  *(void **)((long)pvVar3 + 8) = __s;
  *(undefined8 *)((long)__s + __n) = 0x1000;
  DAT_007ea080 = pvVar3;
                    /* catch() { ... } // from try @ 005e044c with catch @ 005e048c */
                    /* try { // try from 005e0490 to 006e0497 has its CatchHandler @ 005e049c */
                    /* try { // try from 005e0498 to 006e04b3 has its CatchHandler @ 005e040c */
  google::protobuf::internal::OnShutdown(FUN_005e04b4);
  return;
}


