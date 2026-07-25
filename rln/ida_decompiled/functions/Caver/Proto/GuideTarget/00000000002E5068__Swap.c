/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E5068
 * Mangled: _ZN5Caver5Proto11GuideTarget4SwapEPS1_
 * Demangled: Caver::Proto::GuideTarget::Swap(Caver::Proto::GuideTarget*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 19
 *   insn=0x00000000002E5080 string=0x00000000002E5084 "h"
 *   insn=0x00000000002E508C string=0x00000000002E5090 "a"
 *   insn=0x00000000002E5094 string=0x00000000002E5098 "i"
 *   insn=0x00000000002E5098 string=0x00000000002E509C "h\n@"
 *   insn=0x00000000002E50A4 string=0x00000000002E50A8 "i\n"
 *   insn=0x00000000002E50A8 string=0x00000000002E50AC "h"
 *   insn=0x00000000002E50B4 string=0x00000000002E50B8 "i"
 *   insn=0x00000000002E50B8 string=0x00000000002E50BC "h"
 *   insn=0x00000000002E50C4 string=0x00000000002E50C8 "i"
 *   insn=0x00000000002E50C8 string=0x00000000002E50CC "h"
 *   insn=0x00000000002E50D4 string=0x00000000002E50D8 "i"
 *   insn=0x00000000002E50D8 string=0x00000000002E50DC "h"
 *   insn=0x00000000002E50E4 string=0x00000000002E50E8 "i"
 *   insn=0x00000000002E50E8 string=0x00000000002E50EC "}K"
 *   insn=0x00000000002E50EC string=0x00000000002E50F0 "hr@"
 *   insn=0x00000000002E50EC string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002E50F8 string=0x00000000002E50FC "ir"
 *   insn=0x00000000002E50FC string=0x00000000002E5100 "h\n@"
 *   insn=0x00000000002E5108 string=0x00000000002E510C "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget::Swap(__int64 this, Caver::Proto::GuideTarget *a2)
{
  __int64 v3; // x20
  int v4; // w9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9
  int v9; // w9
  int v10; // w9

  v3 = this;
  if ( a2 != (Caver::Proto::GuideTarget *)this )
  {
    v4 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v4;
    v5 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v5;
    v6 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v6;
    v7 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v7;
    v8 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v8;
    LOBYTE(v8) = *(_BYTE *)(this + 48);
    *(_BYTE *)(this + 48) = *((_BYTE *)a2 + 48);
    *((_BYTE *)a2 + 48) = v8;
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 56),
             (Caver::Proto::GuideTarget *)((char *)a2 + 56));
    v9 = *(_DWORD *)(v3 + 112);
    *(_DWORD *)(v3 + 112) = *((_DWORD *)a2 + 28);
    *((_DWORD *)a2 + 28) = v9;
    v10 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v10;
  }
  return this;
}

