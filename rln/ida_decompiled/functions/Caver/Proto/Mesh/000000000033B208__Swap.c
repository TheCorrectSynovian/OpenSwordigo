/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B208
 * Mangled: _ZN5Caver5Proto4Mesh4SwapEPS1_
 * Demangled: Caver::Proto::Mesh::Swap(Caver::Proto::Mesh*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 30
 *   insn=0x000000000033B220 string=0x000000000033B224 "h"
 *   insn=0x000000000033B22C string=0x000000000033B230 "a"
 *   insn=0x000000000033B234 string=0x000000000033B238 "i"
 *   insn=0x000000000033B238 string=0x000000000033B23C "h"
 *   insn=0x000000000033B244 string=0x000000000033B248 "i"
 *   insn=0x000000000033B248 string=0x000000000033B24C "h"
 *   insn=0x000000000033B254 string=0x000000000033B258 "i"
 *   insn=0x000000000033B258 string=0x000000000033B25C "h"
 *   insn=0x000000000033B264 string=0x000000000033B268 "i"
 *   insn=0x000000000033B268 string=0x000000000033B26C "h"
 *   insn=0x000000000033B274 string=0x000000000033B278 "i"
 *   insn=0x000000000033B27C string=0x000000000033B280 "h6@"
 *   insn=0x000000000033B27C string=0x00000000001F7EE0 "0'"
 *   insn=0x000000000033B288 string=0x000000000033B28C "i6"
 *   insn=0x000000000033B28C string=0x000000000033B290 "h:@"
 *   insn=0x000000000033B298 string=0x000000000033B29C "i:"
 *   insn=0x000000000033B29C string=0x000000000033B2A0 "h>@"
 *   insn=0x000000000033B2A8 string=0x000000000033B2AC "i>"
 *   insn=0x000000000033B2AC string=0x000000000033B2B0 "hB@"
 *   insn=0x000000000033B2B8 string=0x000000000033B2BC "iB"
 *   insn=0x000000000033B2BC string=0x000000000033B2C0 "hF@"
 *   insn=0x000000000033B2C8 string=0x000000000033B2CC "iF"
 *   insn=0x000000000033B2CC string=0x000000000033B2D0 "hJ@"
 *   insn=0x000000000033B2D8 string=0x000000000033B2DC "iJ"
 *   insn=0x000000000033B2DC string=0x000000000033B2E0 "hN@"
 *   insn=0x000000000033B2E8 string=0x000000000033B2EC "iN"
 *   insn=0x000000000033B2EC string=0x000000000033B2F0 "h"
 *   insn=0x000000000033B2F8 string=0x000000000033B2FC "i"
 *   insn=0x000000000033B2FC string=0x000000000033B300 "h\n@"
 *   insn=0x000000000033B308 string=0x000000000033B30C "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::Swap(__int64 this, Caver::Proto::Mesh *a2)
{
  __int64 v3; // x20
  int v4; // w9
  int v5; // w9
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9
  __int64 v9; // x9
  __int64 v10; // x9
  __int64 v11; // x9
  __int64 v12; // x9
  __int64 v13; // x9
  __int64 v14; // x9
  __int64 v15; // x9

  v3 = this;
  if ( a2 != (Caver::Proto::Mesh *)this )
  {
    v4 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v4;
    v5 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v5;
    v6 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v6;
    v7 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v7;
    v8 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v8;
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 48),
             (Caver::Proto::Mesh *)((char *)a2 + 48));
    v9 = *(_QWORD *)(v3 + 104);
    *(_QWORD *)(v3 + 104) = *((_QWORD *)a2 + 13);
    *((_QWORD *)a2 + 13) = v9;
    v10 = *(_QWORD *)(v3 + 112);
    *(_QWORD *)(v3 + 112) = *((_QWORD *)a2 + 14);
    *((_QWORD *)a2 + 14) = v10;
    v11 = *(_QWORD *)(v3 + 120);
    *(_QWORD *)(v3 + 120) = *((_QWORD *)a2 + 15);
    *((_QWORD *)a2 + 15) = v11;
    v12 = *(_QWORD *)(v3 + 128);
    *(_QWORD *)(v3 + 128) = *((_QWORD *)a2 + 16);
    *((_QWORD *)a2 + 16) = v12;
    v13 = *(_QWORD *)(v3 + 136);
    *(_QWORD *)(v3 + 136) = *((_QWORD *)a2 + 17);
    *((_QWORD *)a2 + 17) = v13;
    v14 = *(_QWORD *)(v3 + 144);
    *(_QWORD *)(v3 + 144) = *((_QWORD *)a2 + 18);
    *((_QWORD *)a2 + 18) = v14;
    v15 = *(_QWORD *)(v3 + 152);
    *(_QWORD *)(v3 + 152) = *((_QWORD *)a2 + 19);
    *((_QWORD *)a2 + 19) = v15;
    LODWORD(v15) = *(_DWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 160) = *((_DWORD *)a2 + 40);
    *((_DWORD *)a2 + 40) = v15;
    LODWORD(v15) = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v15;
  }
  return this;
}

