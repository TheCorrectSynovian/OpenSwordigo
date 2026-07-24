/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdfcc
 * Function: Caver::Proto::DateTime::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(DateTime * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::DateTime::SerializeWithCachedSizes(DateTime *this,CodedOutputStream *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteDouble(1,*(double *)(this + 0x10),param_1);
  return;
}


