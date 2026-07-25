/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330F44
 * Mangled: _ZN5Caver5Proto17ItemDropComponent4SwapEPS1_
 * Demangled: Caver::Proto::ItemDropComponent::Swap(Caver::Proto::ItemDropComponent*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 14
 *   insn=0x0000000000330F5C string=0x0000000000330F60 "h\n@"
 *   insn=0x0000000000330F68 string=0x0000000000330F6C "a"
 *   insn=0x0000000000330F70 string=0x0000000000330F74 "i\n"
 *   insn=0x0000000000330F74 string=0x0000000000330F78 "h"
 *   insn=0x0000000000330F80 string=0x0000000000330F84 "i"
 *   insn=0x0000000000330F88 string=0x0000000000330F8C "hbA9"
 *   insn=0x0000000000330F88 string=0x00000000001F7EE0 "0'"
 *   insn=0x0000000000330F94 string=0x0000000000330F98 "ib"
 *   insn=0x0000000000330F98 string=0x0000000000330F9C "hfA9"
 *   insn=0x0000000000330FA4 string=0x0000000000330FA8 "if"
 *   insn=0x0000000000330FA8 string=0x0000000000330FAC "h^@"
 *   insn=0x0000000000330FB4 string=0x0000000000330FB8 "i^"
 *   insn=0x0000000000330FB8 string=0x0000000000330FBC "h\n@"
 *   insn=0x0000000000330FC4 string=0x0000000000330FC8 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::ItemDropComponent *__fastcall Caver::Proto::ItemDropComponent::Swap(
        Caver::Proto::ItemDropComponent *this,
        Caver::Proto::ItemDropComponent *a2)
{
  Caver::Proto::ItemDropComponent *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  char v6; // w9
  char v7; // w9
  int v8; // w9
  int v9; // w9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v5;
    this = (Caver::Proto::ItemDropComponent *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                                (Caver::Proto::ItemDropComponent *)((char *)this + 32),
                                                (Caver::Proto::ItemDropComponent *)((char *)a2 + 32));
    v6 = *((_BYTE *)v3 + 88);
    *((_BYTE *)v3 + 88) = *((_BYTE *)a2 + 88);
    *((_BYTE *)a2 + 88) = v6;
    v7 = *((_BYTE *)v3 + 89);
    *((_BYTE *)v3 + 89) = *((_BYTE *)a2 + 89);
    *((_BYTE *)a2 + 89) = v7;
    v8 = *((_DWORD *)v3 + 23);
    *((_DWORD *)v3 + 23) = *((_DWORD *)a2 + 23);
    *((_DWORD *)a2 + 23) = v8;
    v9 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v9;
  }
  return this;
}

