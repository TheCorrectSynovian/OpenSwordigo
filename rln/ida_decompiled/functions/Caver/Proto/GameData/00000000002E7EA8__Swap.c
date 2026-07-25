/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7EA8
 * Mangled: _ZN5Caver5Proto8GameData4SwapEPS1_
 * Demangled: Caver::Proto::GameData::Swap(Caver::Proto::GameData*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 10
 *   insn=0x00000000002E7EC4 string=0x00000000002E7EC8 "aB"
 *   insn=0x00000000002E7ECC string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002E7ED0 string=0x00000000002E7ED4 "a""
 *   insn=0x00000000002E7EDC string=0x00000000002E7EE0 "a"
 *   insn=0x00000000002E7EE8 string=0x00000000002E7EEC "a"
 *   insn=0x00000000002E7EF4 string=0x00000000002E7EF8 "a"
 *   insn=0x00000000002E7EFC string=0x00000000002E7F00 "h*A"
 *   insn=0x00000000002E7F08 string=0x00000000002E7F0C "i*"
 *   insn=0x00000000002E7F0C string=0x00000000002E7F10 "h\n@"
 *   insn=0x00000000002E7F18 string=0x00000000002E7F1C "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::GameData *__fastcall Caver::Proto::GameData::Swap(
        Caver::Proto::GameData *this,
        Caver::Proto::GameData *a2)
{
  Caver::Proto::GameData *v3; // x20
  int v4; // w9
  int v5; // w9

  v3 = this;
  if ( a2 != this )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GameData *)((char *)this + 16),
      (Caver::Proto::GameData *)((char *)a2 + 16));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GameData *)((char *)v3 + 72),
      (Caver::Proto::GameData *)((char *)a2 + 72));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GameData *)((char *)v3 + 128),
      (Caver::Proto::GameData *)((char *)a2 + 128));
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GameData *)((char *)v3 + 184),
      (Caver::Proto::GameData *)((char *)a2 + 184));
    this = (Caver::Proto::GameData *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                       (Caver::Proto::GameData *)((char *)v3 + 240),
                                       (Caver::Proto::GameData *)((char *)a2 + 240));
    v4 = *((_DWORD *)v3 + 74);
    *((_DWORD *)v3 + 74) = *((_DWORD *)a2 + 74);
    *((_DWORD *)a2 + 74) = v4;
    v5 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

