/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302664
 * Mangled: _ZN5Caver5Proto5Scene4SwapEPS1_
 * Demangled: Caver::Proto::Scene::Swap(Caver::Proto::Scene*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 14
 *   insn=0x0000000000302678 string=0x000000000030267C "`"
 *   insn=0x0000000000302680 string=0x0000000000302684 "aB"
 *   insn=0x0000000000302688 string=0x00000000001F7EE0 "0'"
 *   insn=0x000000000030268C string=0x0000000000302690 "a""
 *   insn=0x0000000000302694 string=0x0000000000302698 "hB@"
 *   insn=0x00000000003026A0 string=0x00000000003026A4 "iB"
 *   insn=0x00000000003026A4 string=0x00000000003026A8 "hF@"
 *   insn=0x00000000003026B0 string=0x00000000003026B4 "iF"
 *   insn=0x00000000003026B4 string=0x00000000003026B8 "hJ@"
 *   insn=0x00000000003026C0 string=0x00000000003026C4 "iJ"
 *   insn=0x00000000003026C4 string=0x00000000003026C8 "h"
 *   insn=0x00000000003026D0 string=0x00000000003026D4 "i"
 *   insn=0x00000000003026D4 string=0x00000000003026D8 "h\n@"
 *   insn=0x00000000003026E0 string=0x00000000003026E4 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::Swap(__int64 this, Caver::Proto::Scene *a2)
{
  __int64 v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9

  v3 = this;
  if ( a2 != (Caver::Proto::Scene *)this )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 16),
      (Caver::Proto::Scene *)((char *)a2 + 16));
    this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
             (google::protobuf::internal::RepeatedPtrFieldBase *)(v3 + 72),
             (Caver::Proto::Scene *)((char *)a2 + 72));
    v4 = *(_QWORD *)(v3 + 128);
    *(_QWORD *)(v3 + 128) = *((_QWORD *)a2 + 16);
    *((_QWORD *)a2 + 16) = v4;
    v5 = *(_QWORD *)(v3 + 136);
    *(_QWORD *)(v3 + 136) = *((_QWORD *)a2 + 17);
    *((_QWORD *)a2 + 17) = v5;
    v6 = *(_QWORD *)(v3 + 144);
    *(_QWORD *)(v3 + 144) = *((_QWORD *)a2 + 18);
    *((_QWORD *)a2 + 18) = v6;
    LODWORD(v6) = *(_DWORD *)(v3 + 152);
    *(_DWORD *)(v3 + 152) = *((_DWORD *)a2 + 38);
    *((_DWORD *)a2 + 38) = v6;
    LODWORD(v6) = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

