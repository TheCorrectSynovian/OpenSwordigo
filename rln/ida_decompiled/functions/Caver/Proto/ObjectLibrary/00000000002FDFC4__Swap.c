/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FDFC4
 * Mangled: _ZN5Caver5Proto13ObjectLibrary4SwapEPS1_
 * Demangled: Caver::Proto::ObjectLibrary::Swap(Caver::Proto::ObjectLibrary*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 12
 *   insn=0x00000000002FDFD8 string=0x00000000002FDFDC " "
 *   insn=0x00000000002FDFDC string=0x00000000002FDFE0 "h\n@"
 *   insn=0x00000000002FDFE8 string=0x00000000002FDFEC "ab"
 *   insn=0x00000000002FDFF0 string=0x00000000002FDFF4 "i\n"
 *   insn=0x00000000002FDFF8 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002FDFFC string=0x00000000002FE000 "aB"
 *   insn=0x00000000002FE008 string=0x00000000002FE00C "a""
 *   insn=0x00000000002FE014 string=0x00000000002FE018 "a"
 *   insn=0x00000000002FE01C string=0x00000000002FE020 "h"
 *   insn=0x00000000002FE028 string=0x00000000002FE02C "i"
 *   insn=0x00000000002FE02C string=0x00000000002FE030 "h\n@"
 *   insn=0x00000000002FE038 string=0x00000000002FE03C "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::ObjectLibrary *__fastcall Caver::Proto::ObjectLibrary::Swap(
        Caver::Proto::ObjectLibrary *this,
        Caver::Proto::ObjectLibrary *a2)
{
  Caver::Proto::ObjectLibrary *v3; // x20
  __int64 v4; // x9
  int v5; // w9
  int v6; // w9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::ObjectLibrary *)((char *)this + 24),
      (Caver::Proto::ObjectLibrary *)((char *)a2 + 24));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::ObjectLibrary *)((char *)v3 + 80),
      (Caver::Proto::ObjectLibrary *)((char *)a2 + 80));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::ObjectLibrary *)((char *)v3 + 136),
      (Caver::Proto::ObjectLibrary *)((char *)a2 + 136));
    this = (Caver::Proto::ObjectLibrary *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                            (Caver::Proto::ObjectLibrary *)((char *)v3 + 192),
                                            (Caver::Proto::ObjectLibrary *)((char *)a2 + 192));
    v5 = *((_DWORD *)v3 + 62);
    *((_DWORD *)v3 + 62) = *((_DWORD *)a2 + 62);
    *((_DWORD *)a2 + 62) = v5;
    v6 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

