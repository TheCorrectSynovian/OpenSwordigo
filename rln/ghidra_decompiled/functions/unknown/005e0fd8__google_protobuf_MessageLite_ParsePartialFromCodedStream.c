/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e0fd8
 * Function: google::protobuf::MessageLite::ParsePartialFromCodedStream
 * Signature: undefined __thiscall ParsePartialFromCodedStream(MessageLite * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::ParsePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
google::protobuf::MessageLite::ParsePartialFromCodedStream
          (MessageLite *this,CodedInputStream *param_1)

{
  (**(code **)(*(long *)this + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x005e1010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x40))(this,param_1);
  return;
}


