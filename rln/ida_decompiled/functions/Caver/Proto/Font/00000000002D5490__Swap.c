/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5490
 * Mangled: _ZN5Caver5Proto4Font4SwapEPS1_
 * Demangled: Caver::Proto::Font::Swap(Caver::Proto::Font*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 16
 *   insn=0x00000000002D54A8 string=0x00000000002D54AC "h\n@"
 *   insn=0x00000000002D54B4 string=0x00000000002D54B8 "a"
 *   insn=0x00000000002D54BC string=0x00000000002D54C0 "i\n"
 *   insn=0x00000000002D54C0 string=0x00000000002D54C4 "h"
 *   insn=0x00000000002D54CC string=0x00000000002D54D0 "i"
 *   insn=0x00000000002D54D4 string=0x00000000002D54D8 "h.@"
 *   insn=0x00000000002D54D4 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002D54E0 string=0x00000000002D54E4 "i."
 *   insn=0x00000000002D54E4 string=0x00000000002D54E8 "hb@"
 *   insn=0x00000000002D54F0 string=0x00000000002D54F4 "ib"
 *   insn=0x00000000002D54F4 string=0x00000000002D54F8 "h6@"
 *   insn=0x00000000002D5500 string=0x00000000002D5504 "i6"
 *   insn=0x00000000002D5504 string=0x00000000002D5508 "hr@"
 *   insn=0x00000000002D5510 string=0x00000000002D5514 "ir"
 *   insn=0x00000000002D5514 string=0x00000000002D5518 "h\n@"
 *   insn=0x00000000002D5520 string=0x00000000002D5524 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::Font *__fastcall Caver::Proto::Font::Swap(Caver::Proto::Font *this, Caver::Proto::Font *a2)
{
  Caver::Proto::Font *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v5;
    this = (Caver::Proto::Font *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                   (Caver::Proto::Font *)((char *)this + 32),
                                   (Caver::Proto::Font *)((char *)a2 + 32));
    v6 = *((_QWORD *)v3 + 11);
    *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v6;
    LODWORD(v6) = *((_DWORD *)v3 + 24);
    *((_DWORD *)v3 + 24) = *((_DWORD *)a2 + 24);
    *((_DWORD *)a2 + 24) = v6;
    v7 = *((_QWORD *)v3 + 13);
    *((_QWORD *)v3 + 13) = *((_QWORD *)a2 + 13);
    *((_QWORD *)a2 + 13) = v7;
    LODWORD(v7) = *((_DWORD *)v3 + 28);
    *((_DWORD *)v3 + 28) = *((_DWORD *)a2 + 28);
    *((_DWORD *)a2 + 28) = v7;
    LODWORD(v7) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

