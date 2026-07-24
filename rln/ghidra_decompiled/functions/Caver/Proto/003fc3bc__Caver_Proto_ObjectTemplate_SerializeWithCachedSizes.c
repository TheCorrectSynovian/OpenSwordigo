/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc3bc
 * Function: Caver::Proto::ObjectTemplate::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ObjectTemplate * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ObjectTemplate::SerializeWithCachedSizes
          (ObjectTemplate *this,CodedOutputStream *param_1)

{
  ObjectTemplate *pOVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x1c);
  if ((uVar2 & 1) != 0) {
    pOVar1 = *(ObjectTemplate **)PTR_default_instance__007e4a98;
    if (*(long *)(this + 0x10) != 0) {
      pOVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pOVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x1c);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x18),param_1);
  return;
}


