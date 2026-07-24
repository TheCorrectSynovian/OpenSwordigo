/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e59e8
 * Function: google::protobuf::io::StringOutputStream::Next
 * Signature: undefined __thiscall Next(StringOutputStream * this, void * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::StringOutputStream::Next(void**, int*) */

undefined8 __thiscall
google::protobuf::io::StringOutputStream::Next(StringOutputStream *this,void **param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
                    /* catch() { ... } // from try @ 005e524c with catch @ 005e5a0c */
  lVar3 = **(long **)(this + 8);
                    /* catch() { ... } // from try @ 005e5154 with catch @ 005e5a10 */
  uVar2 = *(ulong *)(lVar3 + -0x10);
  iVar4 = (int)*(undefined8 *)(lVar3 + -0x18);
                    /* catch() { ... } // from try @ 005e5078 with catch @ 005e5a14 */
  if (uVar2 <= (ulong)(long)iVar4) {
    uVar1 = iVar4 * 2;
    if ((int)uVar1 < 0x11) {
      uVar1 = 0x10;
    }
    uVar2 = (ulong)uVar1;
  }
  FUN_00669650(*(long **)(this + 8),uVar2,0);
  plVar5 = *(long **)(this + 8);
  lVar3 = *plVar5;
  if (*(long *)(lVar3 + -0x18) == 0) {
    lVar3 = 0;
  }
  else if (-1 < *(int *)(lVar3 + -8)) {
    FUN_00668ea8(plVar5);
    lVar3 = *plVar5;
                    /* catch() { ... } // from try @ 005e56e8 with catch @ 005e5a64 */
  }
  *param_1 = (void *)(lVar3 + iVar4);
  *param_2 = *(int *)(**(long **)(this + 8) + -0x18) - iVar4;
  return 1;
}


