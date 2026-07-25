/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3540
 * Mangled: _ZN5Caver5Proto7Texture4SwapEPS1_
 * Demangled: Caver::Proto::Texture::Swap(Caver::Proto::Texture*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 15
 *   insn=0x00000000002D3558 string=0x00000000002D355C "h\n@"
 *   insn=0x00000000002D3564 string=0x00000000002D3568 "a"
 *   insn=0x00000000002D356C string=0x00000000002D3570 "i\n"
 *   insn=0x00000000002D3570 string=0x00000000002D3574 "h"
 *   insn=0x00000000002D357C string=0x00000000002D3580 "i"
 *   insn=0x00000000002D3580 string=0x00000000002D3584 "W"
 *   insn=0x00000000002D3584 string=0x00000000002D3588 "hZ@"
 *   insn=0x00000000002D3584 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002D3590 string=0x00000000002D3594 "iZ"
 *   insn=0x00000000002D3594 string=0x00000000002D3598 "h2@"
 *   insn=0x00000000002D35A0 string=0x00000000002D35A4 "i2"
 *   insn=0x00000000002D35A4 string=0x00000000002D35A8 "hj@"
 *   insn=0x00000000002D35B0 string=0x00000000002D35B4 "ij"
 *   insn=0x00000000002D35B4 string=0x00000000002D35B8 "h\n@"
 *   insn=0x00000000002D35C0 string=0x00000000002D35C4 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::Swap(__int64 this, Caver::Proto::Texture *a2)
{
  __int64 v3; // x20
  __int64 v4; // x9
  int v5; // w9
  __int64 v6; // x9

  v3 = this;
  if ( a2 != (Caver::Proto::Texture *)this )
  {
    v4 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v4;
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 32),
             (Caver::Proto::Texture *)((char *)a2 + 32));
    v5 = *(_DWORD *)(v3 + 88);
    *(_DWORD *)(v3 + 88) = *((_DWORD *)a2 + 22);
    *((_DWORD *)a2 + 22) = v5;
    v6 = *(_QWORD *)(v3 + 96);
    *(_QWORD *)(v3 + 96) = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = v6;
    LODWORD(v6) = *(_DWORD *)(v3 + 104);
    *(_DWORD *)(v3 + 104) = *((_DWORD *)a2 + 26);
    *((_DWORD *)a2 + 26) = v6;
    LODWORD(v6) = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

