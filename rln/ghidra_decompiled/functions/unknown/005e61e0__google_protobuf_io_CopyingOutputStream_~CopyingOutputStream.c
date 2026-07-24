/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e61e0
 * Function: google::protobuf::io::CopyingOutputStream::~CopyingOutputStream
 * Signature: undefined __thiscall ~CopyingOutputStream(CopyingOutputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingOutputStream::~CopyingOutputStream() */

void __thiscall
google::protobuf::io::CopyingOutputStream::~CopyingOutputStream(CopyingOutputStream *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5e61e4);
  (*pcVar1)();
}


