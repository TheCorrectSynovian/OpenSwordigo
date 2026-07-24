/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5bd8
 * Function: google::protobuf::io::CopyingInputStream::~CopyingInputStream
 * Signature: undefined __thiscall ~CopyingInputStream(CopyingInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStream::~CopyingInputStream() */

void __thiscall
google::protobuf::io::CopyingInputStream::~CopyingInputStream(CopyingInputStream *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5e5bdc);
  (*pcVar1)();
}


