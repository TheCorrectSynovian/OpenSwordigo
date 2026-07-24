/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e61e4
 * Function: google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor
 * Signature: undefined __thiscall CopyingOutputStreamAdaptor(CopyingOutputStreamAdaptor * this, CopyingOutputStream * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(google::protobuf::io::CopyingOutputStream*,
   int) */

void __thiscall
google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor
          (CopyingOutputStreamAdaptor *this,CopyingOutputStream *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 < 1) {
    param_2 = 0x2000;
  }
  puVar1 = PTR_vtable_007e5800 + 0x10;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)this = puVar1;
  *(CopyingOutputStream **)(this + 8) = param_1;
  *(int *)(this + 0x28) = param_2;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


