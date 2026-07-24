/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d99cc
 * Function: Caver::Proto::MusicPlaylist::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MusicPlaylist * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicPlaylist::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MusicPlaylist::SerializeWithCachedSizes
          (MusicPlaylist *this,CodedOutputStream *param_1)

{
  long lVar1;
  
  if (((byte)this[0x50] & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (2,*(MessageLite **)(*(long *)(this + 0x18) + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x20));
  }
  return;
}


