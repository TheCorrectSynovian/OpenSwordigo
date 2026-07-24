/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2b38
 * Function: google::protobuf::internal::FieldSkipper::SkipField
 * Signature: undefined __thiscall SkipField(FieldSkipper * this, CodedInputStream * param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::FieldSkipper::SkipField(google::protobuf::io::CodedInputStream*,
   unsigned int) */

void __thiscall
google::protobuf::internal::FieldSkipper::SkipField
          (FieldSkipper *this,CodedInputStream *param_1,uint param_2)

{
  WireFormatLite::SkipField(param_1,param_2);
  return;
}


