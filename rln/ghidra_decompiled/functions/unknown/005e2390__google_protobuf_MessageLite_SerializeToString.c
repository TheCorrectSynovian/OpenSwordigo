/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2390
 * Function: google::protobuf::MessageLite::SerializeToString
 * Signature: undefined __thiscall SerializeToString(MessageLite * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializeToString(std::string*) const */

undefined8 __thiscall
google::protobuf::MessageLite::SerializeToString(MessageLite *this,string *param_1)

{
                    /* catch() { ... } // from try @ 005e2254 with catch @ 005e2394 */
                    /* catch() { ... } // from try @ 005e2200 with catch @ 005e239c */
  FUN_00668cb8(param_1,0,*(undefined8 *)(*(long *)param_1 + -0x18),0);
                    /* try { // try from 005e23c0 to 006e23c7 has its CatchHandler @ 005e23cc */
  AppendPartialToString(this,param_1);
                    /* catch() { ... } // from try @ 005e23c0 with catch @ 005e23cc */
                    /* catch() { ... } // from try @ 005e2230 with catch @ 005e23d0 */
  return 1;
}


