/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fad40
 * Function: google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>
 * Signature: bool __cdecl ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int param_1, uint param_2, CodedInputStream * param_3, RepeatedField * param_4)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool google::protobuf::internal::WireFormatLite::
     ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>
               (int param_1,uint param_2,CodedInputStream *param_3,RepeatedField *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)
            PTR_ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>_007dfed0
          )(param_1,param_2);
  return (bool)uVar1;
}


