/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5998
 * Function: google::protobuf::io::StringOutputStream::StringOutputStream
 * Signature: undefined __thiscall StringOutputStream(StringOutputStream * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::StringOutputStream::StringOutputStream(std::string*) */

void __thiscall
google::protobuf::io::StringOutputStream::StringOutputStream
          (StringOutputStream *this,string *param_1)

{
  *(undefined **)this = PTR_vtable_007e5470 + 0x10;
  *(string **)(this + 8) = param_1;
  return;
}


