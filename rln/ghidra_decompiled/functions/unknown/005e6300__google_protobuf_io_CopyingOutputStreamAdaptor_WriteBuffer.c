/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6300
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer
 * Signature: undefined __thiscall WriteBuffer(CopyingOutputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer() */

undefined8 __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::WriteBuffer(CopyingOutputStreamAdaptor *this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
                    /* try { // try from 005e630c to 006e633b has its CatchHandler @ 005e6510 */
  if (this[0x11] == (CopyingOutputStreamAdaptor)0x0) {
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
          operator_delete__(*(void **)(this + 0x20));
          uVar2 = 0;
          *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 005e638c to 006e63d3 has its CatchHandler @ 005e65b0 */
        }
      }
      else {
        iVar1 = *(int *)(this + 0x2c);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar2 = 1;
                    /* try { // try from 005e635c to 006e6383 has its CatchHandler @ 005e65c0 */
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)iVar1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


