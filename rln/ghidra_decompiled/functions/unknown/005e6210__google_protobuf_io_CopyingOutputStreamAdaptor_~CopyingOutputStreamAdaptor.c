/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6210
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor
 * Signature: undefined __thiscall ~CopyingOutputStreamAdaptor(CopyingOutputStreamAdaptor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor() */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor
          (CopyingOutputStreamAdaptor *this)

{
  CopyingOutputStreamAdaptor CVar1;
  int iVar2;
  ulong uVar3;
  
                    /* try { // try from 005e6220 to 006e6227 has its CatchHandler @ 005e64b4 */
                    /* try { // try from 005e6228 to 006e62b7 has its CatchHandler @ 005e611c */
  *(undefined **)this = PTR_vtable_007e5800 + 0x10;
  if ((this[0x11] == (CopyingOutputStreamAdaptor)0x0) && (*(int *)(this + 0x2c) != 0)) {
    uVar3 = (**(code **)(**(long **)(this + 8) + 0x10))
                      (*(long **)(this + 8),*(undefined8 *)(this + 0x20));
    if ((uVar3 & 1) != 0) {
      iVar2 = *(int *)(this + 0x2c);
      *(undefined4 *)(this + 0x2c) = 0;
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)iVar2;
      CVar1 = this[0x10];
      goto joined_r0x005e62d0;
    }
                    /* try { // try from 005e62b8 to 006e62c3 has its CatchHandler @ 005e65c0 */
    this[0x11] = (CopyingOutputStreamAdaptor)0x1;
    *(undefined4 *)(this + 0x2c) = 0;
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
      *(undefined8 *)(this + 0x20) = 0;
      CVar1 = this[0x10];
      goto joined_r0x005e62d0;
    }
  }
  CVar1 = this[0x10];
joined_r0x005e62d0:
  if ((CVar1 != (CopyingOutputStreamAdaptor)0x0) && (*(long **)(this + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  ZeroCopyOutputStream::~ZeroCopyOutputStream((ZeroCopyOutputStream *)this);
  return;
}


