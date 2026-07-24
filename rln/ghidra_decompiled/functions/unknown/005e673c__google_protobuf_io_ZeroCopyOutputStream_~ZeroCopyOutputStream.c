/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e673c
 * Function: google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream
 * Signature: undefined __thiscall ~ZeroCopyOutputStream(ZeroCopyOutputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream() */

void __thiscall
google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(ZeroCopyOutputStream *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5e6740);
  (*pcVar1)();
}


