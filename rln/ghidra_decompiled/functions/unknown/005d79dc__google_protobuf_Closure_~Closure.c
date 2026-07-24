/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d79dc
 * Function: google::protobuf::Closure::~Closure
 * Signature: undefined __thiscall ~Closure(Closure * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::Closure::~Closure() */

void __thiscall google::protobuf::Closure::~Closure(Closure *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5d79e0);
  (*pcVar1)();
}


