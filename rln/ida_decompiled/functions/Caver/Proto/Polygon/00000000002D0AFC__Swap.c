/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0AFC
 * Mangled: _ZN5Caver5Proto7Polygon4SwapEPS1_
 * Demangled: Caver::Proto::Polygon::Swap(Caver::Proto::Polygon*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 10
 *   insn=0x00000000002D0B18 string=0x00000000002D0B1C "aB"
 *   insn=0x00000000002D0B20 string=0x00000000002D0B24 "h"A9"
 *   insn=0x00000000002D0B20 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002D0B2C string=0x00000000002D0B30 "i""
 *   insn=0x00000000002D0B30 string=0x00000000002D0B34 "h&A9"
 *   insn=0x00000000002D0B3C string=0x00000000002D0B40 "i&"
 *   insn=0x00000000002D0B40 string=0x00000000002D0B44 "hN@"
 *   insn=0x00000000002D0B4C string=0x00000000002D0B50 "iN"
 *   insn=0x00000000002D0B50 string=0x00000000002D0B54 "h\n@"
 *   insn=0x00000000002D0B5C string=0x00000000002D0B60 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::Swap(__int64 this, Caver::Proto::Polygon *a2)
{
  __int64 v3; // x20
  char v4; // w9
  char v5; // w9
  int v6; // w9
  int v7; // w9

  v3 = this;
  if ( a2 != (Caver::Proto::Polygon *)this )
  {
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 16),
             (Caver::Proto::Polygon *)((char *)a2 + 16));
    v4 = *(_BYTE *)(v3 + 72);
    *(_BYTE *)(v3 + 72) = *((_BYTE *)a2 + 72);
    *((_BYTE *)a2 + 72) = v4;
    v5 = *(_BYTE *)(v3 + 73);
    *(_BYTE *)(v3 + 73) = *((_BYTE *)a2 + 73);
    *((_BYTE *)a2 + 73) = v5;
    v6 = *(_DWORD *)(v3 + 76);
    *(_DWORD *)(v3 + 76) = *((_DWORD *)a2 + 19);
    *((_DWORD *)a2 + 19) = v6;
    v7 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

