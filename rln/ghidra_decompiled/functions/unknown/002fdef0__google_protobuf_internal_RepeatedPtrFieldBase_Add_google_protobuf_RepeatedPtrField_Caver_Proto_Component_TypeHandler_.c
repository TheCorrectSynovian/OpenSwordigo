/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fdef0
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>
 * Signature: Type * __thiscall Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(RepeatedPtrFieldBase * this)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


Type * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>
          (RepeatedPtrFieldBase *this)

{
  Type *pTVar1;
  
  pTVar1 = (Type *)(*(code *)
                     PTR_Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>_007e17a8
                   )();
  return pTVar1;
}


