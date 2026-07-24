/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e07ec
 * Function: google::protobuf::MessageLite::~MessageLite
 * Signature: undefined __thiscall ~MessageLite(MessageLite * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::~MessageLite() */

void __thiscall google::protobuf::MessageLite::~MessageLite(MessageLite *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5e07f0);
  (*pcVar1)();
}


