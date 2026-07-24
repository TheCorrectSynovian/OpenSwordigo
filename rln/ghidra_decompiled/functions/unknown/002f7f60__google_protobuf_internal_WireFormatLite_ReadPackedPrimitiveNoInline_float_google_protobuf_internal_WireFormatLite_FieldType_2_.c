/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f7f60
 * Function: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
 * Signature: bool __cdecl ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(CodedInputStream * param_1, RepeatedField * param_2)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool google::protobuf::internal::WireFormatLite::
     ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>
               (CodedInputStream *param_1,RepeatedField *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(*(code *)
                  PTR_ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>_007de7e0
                )((char)param_1);
  return bVar1;
}


