/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e23d8
 * Function: google::protobuf::MessageLite::SerializePartialToString
 * Signature: undefined __thiscall SerializePartialToString(MessageLite * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializePartialToString(std::string*) const */

undefined8 __thiscall
google::protobuf::MessageLite::SerializePartialToString(MessageLite *this,string *param_1)

{
                    /* catch() { ... } // from try @ 005e2168 with catch @ 005e23e0 */
  FUN_00668cb8(param_1,0,*(undefined8 *)(*(long *)param_1 + -0x18),0);
                    /* try { // try from 005e2404 to 006e240b has its CatchHandler @ 005e2410 */
  AppendPartialToString(this,param_1);
                    /* catch() { ... } // from try @ 005e2404 with catch @ 005e2410 */
                    /* catch() { ... } // from try @ 005e2040 with catch @ 005e2414 */
  return 1;
}


