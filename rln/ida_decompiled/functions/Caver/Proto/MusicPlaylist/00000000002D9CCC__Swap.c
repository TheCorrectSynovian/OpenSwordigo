/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9CCC
 * Mangled: _ZN5Caver5Proto13MusicPlaylist4SwapEPS1_
 * Demangled: Caver::Proto::MusicPlaylist::Swap(Caver::Proto::MusicPlaylist*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 9
 *   insn=0x00000000002D9CE4 string=0x00000000002D9CE8 "h\n@"
 *   insn=0x00000000002D9CF0 string=0x00000000002D9CF4 "ab"
 *   insn=0x00000000002D9CF8 string=0x00000000002D9CFC "i\n"
 *   insn=0x00000000002D9CFC string=0x00000000002D9D00 "xx"
 *   insn=0x00000000002D9D00 string=0x00000000002D9D04 "hR@"
 *   insn=0x00000000002D9D00 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002D9D0C string=0x00000000002D9D10 "iR"
 *   insn=0x00000000002D9D10 string=0x00000000002D9D14 "h\n@"
 *   insn=0x00000000002D9D1C string=0x00000000002D9D20 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::MusicPlaylist *__fastcall Caver::Proto::MusicPlaylist::Swap(
        Caver::Proto::MusicPlaylist *this,
        Caver::Proto::MusicPlaylist *a2)
{
  Caver::Proto::MusicPlaylist *v3; // x20
  __int64 v4; // x9
  int v5; // w9
  int v6; // w9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    this = (Caver::Proto::MusicPlaylist *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                            (Caver::Proto::MusicPlaylist *)((char *)this + 24),
                                            (Caver::Proto::MusicPlaylist *)((char *)a2 + 24));
    v5 = *((_DWORD *)v3 + 20);
    *((_DWORD *)v3 + 20) = *((_DWORD *)a2 + 20);
    *((_DWORD *)a2 + 20) = v5;
    v6 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

