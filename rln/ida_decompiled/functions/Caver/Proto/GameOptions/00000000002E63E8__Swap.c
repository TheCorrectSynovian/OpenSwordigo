/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E63E8
 * Mangled: _ZN5Caver5Proto11GameOptions4SwapEPS1_
 * Demangled: Caver::Proto::GameOptions::Swap(Caver::Proto::GameOptions*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 24
 *   insn=0x00000000002E6404 string=0x00000000002E6408 "aB"
 *   insn=0x00000000002E640C string=0x00000000002E6410 "h"A9"
 *   insn=0x00000000002E640C string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002E6418 string=0x00000000002E641C "i""
 *   insn=0x00000000002E641C string=0x00000000002E6420 "h&A9"
 *   insn=0x00000000002E6428 string=0x00000000002E642C "i&"
 *   insn=0x00000000002E642C string=0x00000000002E6430 "hN@"
 *   insn=0x00000000002E6438 string=0x00000000002E643C "iN"
 *   insn=0x00000000002E643C string=0x00000000002E6440 "hR@"
 *   insn=0x00000000002E6448 string=0x00000000002E644C "iR"
 *   insn=0x00000000002E644C string=0x00000000002E6450 "h.@"
 *   insn=0x00000000002E6458 string=0x00000000002E645C "i."
 *   insn=0x00000000002E645C string=0x00000000002E6460 "h2@"
 *   insn=0x00000000002E6468 string=0x00000000002E646C "i2"
 *   insn=0x00000000002E646C string=0x00000000002E6470 "h"
 *   insn=0x00000000002E6478 string=0x00000000002E647C "i"
 *   insn=0x00000000002E647C string=0x00000000002E6480 "h"
 *   insn=0x00000000002E6488 string=0x00000000002E648C "i"
 *   insn=0x00000000002E648C string=0x00000000002E6490 "h"
 *   insn=0x00000000002E6498 string=0x00000000002E649C "i"
 *   insn=0x00000000002E649C string=0x00000000002E64A0 "hn@"
 *   insn=0x00000000002E64A8 string=0x00000000002E64AC "in"
 *   insn=0x00000000002E64AC string=0x00000000002E64B0 "h\n@"
 *   insn=0x00000000002E64B8 string=0x00000000002E64BC "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::Swap(__int64 this, Caver::Proto::GameOptions *a2)
{
  __int64 v3; // x20
  char v4; // w9
  char v5; // w9
  int v6; // w9
  int v7; // w9
  __int64 v8; // x9
  __int64 v9; // x9

  v3 = this;
  if ( a2 != (Caver::Proto::GameOptions *)this )
  {
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 16),
             (Caver::Proto::GameOptions *)((char *)a2 + 16));
    v4 = *(_BYTE *)(v3 + 72);
    *(_BYTE *)(v3 + 72) = *((_BYTE *)a2 + 72);
    *((_BYTE *)a2 + 72) = v4;
    v5 = *(_BYTE *)(v3 + 73);
    *(_BYTE *)(v3 + 73) = *((_BYTE *)a2 + 73);
    *((_BYTE *)a2 + 73) = v5;
    v6 = *(_DWORD *)(v3 + 76);
    *(_DWORD *)(v3 + 76) = *((_DWORD *)a2 + 19);
    *((_DWORD *)a2 + 19) = v6;
    v7 = *(_DWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 80) = *((_DWORD *)a2 + 20);
    *((_DWORD *)a2 + 20) = v7;
    v8 = *(_QWORD *)(v3 + 88);
    *(_QWORD *)(v3 + 88) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v8;
    v9 = *(_QWORD *)(v3 + 96);
    *(_QWORD *)(v3 + 96) = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = v9;
    LOBYTE(v9) = *(_BYTE *)(v3 + 104);
    *(_BYTE *)(v3 + 104) = *((_BYTE *)a2 + 104);
    *((_BYTE *)a2 + 104) = v9;
    LOBYTE(v9) = *(_BYTE *)(v3 + 105);
    *(_BYTE *)(v3 + 105) = *((_BYTE *)a2 + 105);
    *((_BYTE *)a2 + 105) = v9;
    LOBYTE(v9) = *(_BYTE *)(v3 + 106);
    *(_BYTE *)(v3 + 106) = *((_BYTE *)a2 + 106);
    *((_BYTE *)a2 + 106) = v9;
    LODWORD(v9) = *(_DWORD *)(v3 + 108);
    *(_DWORD *)(v3 + 108) = *((_DWORD *)a2 + 27);
    *((_DWORD *)a2 + 27) = v9;
    LODWORD(v9) = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v9;
  }
  return this;
}

