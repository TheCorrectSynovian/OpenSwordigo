/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED778
 * Mangled: _ZN5Caver5Proto9QuestText4SwapEPS1_
 * Demangled: Caver::Proto::QuestText::Swap(Caver::Proto::QuestText*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 8
 *   insn=0x00000000002ED790 string=0x00000000002ED794 "h\n@"
 *   insn=0x00000000002ED79C string=0x00000000002ED7A0 "ab"
 *   insn=0x00000000002ED7A4 string=0x00000000002ED7A8 "i\n"
 *   insn=0x00000000002ED7AC string=0x00000000002ED7B0 "hR@"
 *   insn=0x00000000002ED7AC string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002ED7B8 string=0x00000000002ED7BC "iR"
 *   insn=0x00000000002ED7BC string=0x00000000002ED7C0 "h\n@"
 *   insn=0x00000000002ED7C8 string=0x00000000002ED7CC "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::QuestText *__fastcall Caver::Proto::QuestText::Swap(
        Caver::Proto::QuestText *this,
        Caver::Proto::QuestText *a2)
{
  Caver::Proto::QuestText *v3; // x20
  __int64 v4; // x9
  int v5; // w9
  int v6; // w9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    this = (Caver::Proto::QuestText *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                        (Caver::Proto::QuestText *)((char *)this + 24),
                                        (Caver::Proto::QuestText *)((char *)a2 + 24));
    v5 = *((_DWORD *)v3 + 20);
    *((_DWORD *)v3 + 20) = *((_DWORD *)a2 + 20);
    *((_DWORD *)a2 + 20) = v5;
    v6 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

