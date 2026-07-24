/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec3b4
 * Function: Caver::Proto::StateProperties::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(StateProperties * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::StateProperties::SerializeWithCachedSizes
          (StateProperties *this,CodedOutputStream *param_1)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteString
                (1,*(string **)(*(long *)(this + 0x10) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x18));
  }
  return;
}


