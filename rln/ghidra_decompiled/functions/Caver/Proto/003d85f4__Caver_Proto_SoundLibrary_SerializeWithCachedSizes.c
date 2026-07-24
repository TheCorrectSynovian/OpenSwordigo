/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d85f4
 * Function: Caver::Proto::SoundLibrary::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SoundLibrary * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SoundLibrary::SerializeWithCachedSizes(SoundLibrary *this,CodedOutputStream *param_1)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (1,*(MessageLite **)(*(long *)(this + 0x10) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x18));
  }
  return;
}


