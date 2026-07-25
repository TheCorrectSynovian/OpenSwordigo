/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E35E0
 * Mangled: _ZN6google8protobuf2io16CodedInputStream9PushLimitEi
 * Demangled: google::protobuf::io::CodedInputStream::PushLimit(int)
 *
 * Callers: 1
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004E35E0 string=0x00000000004E35E4 "\n"
 *   insn=0x00000000004E35E4 string=0x00000000004E35E8 "\t@"
 *   insn=0x00000000004E35E8 string=0x00000000004E35EC "@"
 *   insn=0x00000000004E35F8 string=0x00000000004E35FC "+"
 *   insn=0x00000000004E35FC string=0x00000000004E3600 ")"
 *   insn=0x00000000004E3600 string=0x00000000004E3604 "L"
 *   insn=0x00000000004E3610 string=0x00000000004E3614 "k"
 *   insn=0x00000000004E3614 string=0x00000000004E3618 "("
 *   insn=0x00000000004E3620 string=0x00000000004E3624 ""
 *   insn=0x00000000004E3628 string=0x00000000004E362C "("
 *   insn=0x00000000004E3630 string=0x00000000004E3634 "J"
 *   insn=0x00000000004E3634 string=0x00000000004E3638 "\t"
 *   insn=0x00000000004E363C string=0x00000000004E3640 ")"
 *   insn=0x00000000004E3640 string=0x00000000004E3644 "\n,"
 *   insn=0x00000000004E3644 string=0x00000000004E3648 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::PushLimit(
        google::protobuf::io::CodedInputStream *this,
        int a2)
{
  int v2; // w8
  int v3; // w10
  __int64 v4; // x9
  __int64 v5; // x12
  int v6; // w14
  int v7; // w11
  __int64 v8; // x9
  int v9; // w11
  int v10; // w11
  bool v12; // vf
  int v13; // w10

  v2 = *((_DWORD *)this + 10);
  v3 = *((_DWORD *)this + 6);
  v4 = *((_QWORD *)this + 2);
  v5 = *((int *)this + 11);
  v6 = *((_DWORD *)this + 12);
  v7 = v4 - *((_DWORD *)this + 2);
  v8 = v4 + v5;
  v9 = v3 - v5 - v7;
  LODWORD(v5) = 0x7FFFFFFF - v9;
  v10 = v9 + a2;
  if ( (int)v5 < a2 || a2 < 0 )
    v10 = 0x7FFFFFFF;
  if ( v2 < v10 )
    v10 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v10;
  if ( v6 < v10 )
    v10 = v6;
  v12 = __OFSUB__(v3, v10);
  v13 = v3 - v10;
  *((_QWORD *)this + 2) = v8;
  if ( (v13 < 0) ^ v12 | (v13 == 0) )
  {
    *((_DWORD *)this + 11) = 0;
  }
  else
  {
    *((_DWORD *)this + 11) = v13;
    *((_QWORD *)this + 2) = v8 - v13;
  }
  return (unsigned int)v2;
}

