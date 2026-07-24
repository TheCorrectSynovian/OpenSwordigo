/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00302a10
 * Function: google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>
 * Signature: bool __cdecl ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(CodedInputStream * param_1, RepeatedField * param_2)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool google::protobuf::internal::WireFormatLite::
     ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>
               (CodedInputStream *param_1,RepeatedField *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(*(code *)
                  PTR_ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>_007e3d38
                )((char)param_1);
  return bVar1;
}


