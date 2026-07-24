/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e63c8
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::Flush
 * Signature: undefined __thiscall Flush(CopyingOutputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::Flush() */

undefined8 __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::Flush(CopyingOutputStreamAdaptor *this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (this[0x11] == (CopyingOutputStreamAdaptor)0x0) {
                    /* try { // try from 005e63f4 to 006e63ff has its CatchHandler @ 005e6560 */
    if (*(int *)(this + 0x2c) == 0) {
      uVar2 = 1;
    }
    else {
      uVar3 = (**(code **)(**(long **)(this + 8) + 0x10))
                        (*(long **)(this + 8),*(undefined8 *)(this + 0x20));
      if ((uVar3 & 1) == 0) {
        this[0x11] = (CopyingOutputStreamAdaptor)0x1;
        *(undefined4 *)(this + 0x2c) = 0;
        uVar2 = 0;
        if (*(void **)(this + 0x20) != (void *)0x0) {
                    /* try { // try from 005e6448 to 006e64cf has its CatchHandler @ 005e611c */
          operator_delete__(*(void **)(this + 0x20));
          uVar2 = 0;
          *(undefined8 *)(this + 0x20) = 0;
        }
      }
      else {
        iVar1 = *(int *)(this + 0x2c);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar2 = 1;
                    /* try { // try from 005e6420 to 006e6447 has its CatchHandler @ 005e650c */
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)iVar1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


