/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D884C
 * Mangled: _ZN5Caver5Proto12SoundLibrary4SwapEPS1_
 * Demangled: Caver::Proto::SoundLibrary::Swap(Caver::Proto::SoundLibrary*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 6
 *   insn=0x00000000002D8868 string=0x00000000002D886C "aB"
 *   insn=0x00000000002D8870 string=0x00000000002D8874 "hJ@"
 *   insn=0x00000000002D8870 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002D887C string=0x00000000002D8880 "iJ"
 *   insn=0x00000000002D8880 string=0x00000000002D8884 "h\n@"
 *   insn=0x00000000002D888C string=0x00000000002D8890 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundLibrary::Swap(__int64 this, Caver::Proto::SoundLibrary *a2)
{
  __int64 v3; // x20
  int v4; // w9
  int v5; // w9

  v3 = this;
  if ( a2 != (Caver::Proto::SoundLibrary *)this )
  {
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 16),
             (Caver::Proto::SoundLibrary *)((char *)a2 + 16));
    v4 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 72) = *((_DWORD *)a2 + 18);
    *((_DWORD *)a2 + 18) = v4;
    v5 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

