/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7fa4
 * Function: google::protobuf::internal::FunctionClosure0::Run
 * Signature: undefined __thiscall Run(FunctionClosure0 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::FunctionClosure0::Run() */

void __thiscall google::protobuf::internal::FunctionClosure0::Run(FunctionClosure0 *this)

{
  (**(code **)(this + 8))();
  if ((this != (FunctionClosure0 *)0x0) && (this[0x10] != (FunctionClosure0)0x0)) {
                    /* catch() { ... } // from try @ 005d7dd4 with catch @ 005d7fc8
                       catch() { ... } // from try @ 005d7f70 with catch @ 005d7fc8 */
                    /* catch() { ... } // from try @ 005d7d90 with catch @ 005d7fd4
                       catch() { ... } // from try @ 005d7e50 with catch @ 005d7fd4 */
                    /* WARNING: Could not recover jumptable at 0x005d7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))(this);
    return;
  }
  return;
}


