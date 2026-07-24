/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5d6c
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::Next
 * Signature: undefined __thiscall Next(CopyingInputStreamAdaptor * this, void * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::Next(void const**, int*) */

undefined8 __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::Next
          (CopyingInputStreamAdaptor *this,void **param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  
  if (this[0x11] == (CopyingInputStreamAdaptor)0x0) {
    pvVar3 = *(void **)(this + 0x20);
    if (pvVar3 == (void *)0x0) {
      uVar4 = (ulong)*(int *)(this + 0x28);
      if ((long)uVar4 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new__(uVar4);
      *(void **)(this + 0x20) = pvVar3;
    }
    iVar1 = *(int *)(this + 0x30);
    if (iVar1 < 1) {
      iVar1 = (**(code **)(**(long **)(this + 8) + 0x10))
                        (*(long **)(this + 8),pvVar3,*(undefined4 *)(this + 0x28));
      *(int *)(this + 0x2c) = iVar1;
      if (iVar1 < 1) {
        if (iVar1 < 0) {
                    /* catch() { ... } // from try @ 005e52f8 with catch @ 005e5e38
                       catch() { ... } // from try @ 005e5388 with catch @ 005e5e38 */
          this[0x11] = (CopyingInputStreamAdaptor)0x1;
        }
        FreeBuffer(this);
        return 0;
      }
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)iVar1;
      *param_2 = iVar1;
      *param_1 = *(void **)(this + 0x20);
    }
    else {
      *param_1 = (void *)((long)pvVar3 + ((long)*(int *)(this + 0x2c) - (long)iVar1));
      *param_2 = iVar1;
      *(undefined4 *)(this + 0x30) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


