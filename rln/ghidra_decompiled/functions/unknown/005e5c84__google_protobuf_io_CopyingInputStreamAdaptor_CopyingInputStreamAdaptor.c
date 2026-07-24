/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5c84
 * Function: google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor
 * Signature: undefined __thiscall CopyingInputStreamAdaptor(CopyingInputStreamAdaptor * this, CopyingInputStream * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor(google::protobuf::io::CopyingInputStream*,
   int) */

void __thiscall
google::protobuf::io::CopyingInputStreamAdaptor::CopyingInputStreamAdaptor
          (CopyingInputStreamAdaptor *this,CopyingInputStream *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 < 1) {
    param_2 = 0x2000;
  }
  puVar1 = PTR_vtable_007e6c80 + 0x10;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 005e5188 with catch @ 005e5ca4 */
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined **)this = puVar1;
  *(CopyingInputStream **)(this + 8) = param_1;
  *(int *)(this + 0x28) = param_2;
  return;
}


