/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cffd0
 * Function: Caver::Proto::Circle::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Circle * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */

void __thiscall
Caver::Proto::Circle::SerializeWithCachedSizes(Circle *this,CodedOutputStream *param_1)

{
  Circle *pCVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x1c);
  if ((uVar2 & 1) != 0) {
    pCVar1 = *(Circle **)PTR_default_instance__007e76b0;
    if (*(long *)(this + 0x10) != 0) {
      pCVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pCVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x1c);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x18),param_1);
  return;
}


