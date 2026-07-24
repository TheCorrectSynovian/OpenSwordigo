/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2828
 * Function: google::protobuf::internal::StringTypeHandlerBase::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::StringTypeHandlerBase::New() */

void google::protobuf::internal::StringTypeHandlerBase::New(void)

{
  long *plVar1;
  
                    /* try { // try from 005e2828 to 006e282f has its CatchHandler @ 005e2834 */
                    /* catch() { ... } // from try @ 005e2828 with catch @ 005e2834 */
  plVar1 = operator_new(8);
                    /* catch() { ... } // from try @ 005e2718 with catch @ 005e2838 */
                    /* catch() { ... } // from try @ 005e26d0 with catch @ 005e2840 */
  *plVar1 = (long)(PTR_DAT_007e5de8 + 0x18);
  return;
}


