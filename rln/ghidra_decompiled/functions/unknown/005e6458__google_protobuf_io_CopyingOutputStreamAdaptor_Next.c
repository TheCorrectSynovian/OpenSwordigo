/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6458
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::Next
 * Signature: undefined __thiscall Next(CopyingOutputStreamAdaptor * this, void * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::Next(void**, int*) */

undefined8 __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::Next
          (CopyingOutputStreamAdaptor *this,void **param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x2c);
  if (iVar4 == *(int *)(this + 0x28)) {
    if (this[0x11] != (CopyingOutputStreamAdaptor)0x0) {
      return 0;
    }
    if (iVar4 != 0) {
      uVar2 = (**(code **)(**(long **)(this + 8) + 0x10))
                        (*(long **)(this + 8),*(undefined8 *)(this + 0x20),iVar4);
      if ((uVar2 & 1) == 0) {
        this[0x11] = (CopyingOutputStreamAdaptor)0x1;
        *(undefined4 *)(this + 0x2c) = 0;
        if (*(void **)(this + 0x20) == (void *)0x0) {
          return 0;
        }
        operator_delete__(*(void **)(this + 0x20));
        *(undefined8 *)(this + 0x20) = 0;
        return 0;
      }
                    /* catch() { ... } // from try @ 005e6220 with catch @ 005e64b4 */
      iVar1 = *(int *)(this + 0x2c);
      iVar4 = 0;
      *(undefined4 *)(this + 0x2c) = 0;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)iVar1;
    }
  }
  pvVar3 = *(void **)(this + 0x20);
                    /* try { // try from 005e64d0 to 006e660b has its CatchHandler @ 005e6614 */
  iVar1 = *(int *)(this + 0x28);
  uVar2 = (ulong)iVar1;
  if (pvVar3 == (void *)0x0) {
                    /* catch() { ... } // from try @ 005e61bc with catch @ 005e64dc */
    if ((long)uVar2 < 0) {
      uVar2 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar2);
    *(void **)(this + 0x20) = pvVar3;
  }
  *param_1 = (void *)((long)pvVar3 + (long)iVar4);
  *param_2 = iVar1 - iVar4;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x28);
                    /* catch() { ... } // from try @ 005e6420 with catch @ 005e650c */
                    /* catch() { ... } // from try @ 005e630c with catch @ 005e6510 */
  return 1;
}


