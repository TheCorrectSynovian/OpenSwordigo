/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC4FC
 * Mangled: _ZN5Caver5Proto15StateProperties4SwapEPS1_
 * Demangled: Caver::Proto::StateProperties::Swap(Caver::Proto::StateProperties*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 7
 *   insn=0x00000000002EC518 string=0x00000000002EC51C "aB"
 *   insn=0x00000000002EC51C string=0x00000000002EC520 "p."
 *   insn=0x00000000002EC520 string=0x00000000002EC524 "hJ@"
 *   insn=0x00000000002EC520 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002EC52C string=0x00000000002EC530 "iJ"
 *   insn=0x00000000002EC530 string=0x00000000002EC534 "h\n@"
 *   insn=0x00000000002EC53C string=0x00000000002EC540 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::Swap(__int64 this, Caver::Proto::StateProperties *a2)
{
  __int64 v3; // x20
  int v4; // w9
  int v5; // w9

  v3 = this;
  if ( a2 != (Caver::Proto::StateProperties *)this )
  {
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 16),
             (Caver::Proto::StateProperties *)((char *)a2 + 16));
    v4 = *(_DWORD *)(v3 + 72);
    *(_DWORD *)(v3 + 72) = *((_DWORD *)a2 + 18);
    *((_DWORD *)a2 + 18) = v4;
    v5 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

