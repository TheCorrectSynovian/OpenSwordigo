/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308650
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent4SwapEPS1_
 * Demangled: Caver::Proto::GroundMeshComponent::Swap(Caver::Proto::GroundMeshComponent*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 19
 *   insn=0x0000000000308668 string=0x000000000030866C "h\n@"
 *   insn=0x0000000000308674 string=0x0000000000308678 "a"
 *   insn=0x000000000030867C string=0x0000000000308680 "i\n"
 *   insn=0x0000000000308680 string=0x0000000000308684 "h"
 *   insn=0x000000000030868C string=0x0000000000308690 "i"
 *   insn=0x0000000000308694 string=0x0000000000308698 "h.@"
 *   insn=0x0000000000308694 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000003086A0 string=0x00000000003086A4 "a"
 *   insn=0x00000000003086A8 string=0x00000000003086AC "i."
 *   insn=0x00000000003086B4 string=0x00000000003086B8 "ab"
 *   insn=0x00000000003086B8 string=0x00000000003086BC "\t"
 *   insn=0x00000000003086BC string=0x00000000003086C0 "hj@"
 *   insn=0x00000000003086C8 string=0x00000000003086CC "ij"
 *   insn=0x00000000003086CC string=0x00000000003086D0 "hbC9"
 *   insn=0x00000000003086D8 string=0x00000000003086DC "ib"
 *   insn=0x00000000003086DC string=0x00000000003086E0 "h"
 *   insn=0x00000000003086E8 string=0x00000000003086EC "i"
 *   insn=0x00000000003086EC string=0x00000000003086F0 "h\n@"
 *   insn=0x00000000003086F8 string=0x00000000003086FC "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::GroundMeshComponent *__fastcall Caver::Proto::GroundMeshComponent::Swap(
        Caver::Proto::GroundMeshComponent *this,
        Caver::Proto::GroundMeshComponent *a2)
{
  Caver::Proto::GroundMeshComponent *v3; // x20
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
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GroundMeshComponent *)((char *)this + 32),
      (Caver::Proto::GroundMeshComponent *)((char *)a2 + 32));
    v6 = *((_QWORD *)v3 + 11);
    *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v6;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GroundMeshComponent *)((char *)v3 + 96),
      (Caver::Proto::GroundMeshComponent *)((char *)a2 + 96));
    this = (Caver::Proto::GroundMeshComponent *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                                  (Caver::Proto::GroundMeshComponent *)((char *)v3 + 152),
                                                  (Caver::Proto::GroundMeshComponent *)((char *)a2 + 152));
    v7 = *((_QWORD *)v3 + 26);
    *((_QWORD *)v3 + 26) = *((_QWORD *)a2 + 26);
    *((_QWORD *)a2 + 26) = v7;
    LOBYTE(v7) = *((_BYTE *)v3 + 216);
    *((_BYTE *)v3 + 216) = *((_BYTE *)a2 + 216);
    *((_BYTE *)a2 + 216) = v7;
    LODWORD(v7) = *((_DWORD *)v3 + 55);
    *((_DWORD *)v3 + 55) = *((_DWORD *)a2 + 55);
    *((_DWORD *)a2 + 55) = v7;
    LODWORD(v7) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

