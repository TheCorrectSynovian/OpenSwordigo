/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DEE88
 * Mangled: _ZN5Caver5Proto7MapZone4SwapEPS1_
 * Demangled: Caver::Proto::MapZone::Swap(Caver::Proto::MapZone*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 14
 *   insn=0x00000000002DEEA0 string=0x00000000002DEEA4 "h\n@"
 *   insn=0x00000000002DEEAC string=0x00000000002DEEB0 "a"
 *   insn=0x00000000002DEEB4 string=0x00000000002DEEB8 "i\n"
 *   insn=0x00000000002DEEB8 string=0x00000000002DEEBC "h"
 *   insn=0x00000000002DEEC4 string=0x00000000002DEEC8 "i"
 *   insn=0x00000000002DEECC string=0x00000000002DEED0 "hZ@"
 *   insn=0x00000000002DEECC string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002DEED8 string=0x00000000002DEEDC "iZ"
 *   insn=0x00000000002DEEDC string=0x00000000002DEEE0 "h2@"
 *   insn=0x00000000002DEEE8 string=0x00000000002DEEEC "i2"
 *   insn=0x00000000002DEEEC string=0x00000000002DEEF0 "hj@"
 *   insn=0x00000000002DEEF8 string=0x00000000002DEEFC "ij"
 *   insn=0x00000000002DEEFC string=0x00000000002DEF00 "h\n@"
 *   insn=0x00000000002DEF08 string=0x00000000002DEF0C "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::MapZone *__fastcall Caver::Proto::MapZone::Swap(Caver::Proto::MapZone *this, Caver::Proto::MapZone *a2)
{
  Caver::Proto::MapZone *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  int v6; // w9
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
    this = (Caver::Proto::MapZone *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                      (Caver::Proto::MapZone *)((char *)this + 32),
                                      (Caver::Proto::MapZone *)((char *)a2 + 32));
    v6 = *((_DWORD *)v3 + 22);
    *((_DWORD *)v3 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)a2 + 22) = v6;
    v7 = *((_QWORD *)v3 + 12);
    *((_QWORD *)v3 + 12) = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = v7;
    LODWORD(v7) = *((_DWORD *)v3 + 26);
    *((_DWORD *)v3 + 26) = *((_DWORD *)a2 + 26);
    *((_DWORD *)a2 + 26) = v7;
    LODWORD(v7) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

