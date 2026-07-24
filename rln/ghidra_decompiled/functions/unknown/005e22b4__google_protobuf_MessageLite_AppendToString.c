/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e22b4
 * Function: google::protobuf::MessageLite::AppendToString
 * Signature: undefined __thiscall AppendToString(MessageLite * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::AppendToString(std::string*) const */

undefined8 __thiscall
google::protobuf::MessageLite::AppendToString(MessageLite *this,string *param_1)

{
                    /* try { // try from 005e22bc to 006e22e3 has its CatchHandler @ 005e24b4 */
  AppendPartialToString(this,param_1);
  return 1;
}


