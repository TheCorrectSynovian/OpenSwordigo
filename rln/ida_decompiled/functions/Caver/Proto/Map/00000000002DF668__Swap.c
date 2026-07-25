/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF668
 * Mangled: _ZN5Caver5Proto3Map4SwapEPS1_
 * Demangled: Caver::Proto::Map::Swap(Caver::Proto::Map*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 6
 *   insn=0x00000000002DF684 string=0x00000000002DF688 "aB"
 *   insn=0x00000000002DF68C string=0x00000000002DF690 "hJ@"
 *   insn=0x00000000002DF68C string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002DF698 string=0x00000000002DF69C "iJ"
 *   insn=0x00000000002DF69C string=0x00000000002DF6A0 "h\n@"
 *   insn=0x00000000002DF6A8 string=0x00000000002DF6AC "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::Swap(__int64 this, Caver::Proto::Map *a2)
{
  __int64 v3; // x20
  int v4; // w9
  int v5; // w9

  v3 = this;
  if ( a2 != (Caver::Proto::Map *)this )
  {
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 16),
             (Caver::Proto::Map *)((char *)a2 + 16));
    v4 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 72) = *((_DWORD *)a2 + 18);
    *((_DWORD *)a2 + 18) = v4;
    v5 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

