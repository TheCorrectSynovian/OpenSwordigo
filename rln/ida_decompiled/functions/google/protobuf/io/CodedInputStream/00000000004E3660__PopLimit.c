/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3660
 * Mangled: _ZN6google8protobuf2io16CodedInputStream8PopLimitEi
 * Demangled: google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Callers: 1
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000004E3660 string=0x00000000004E3664 "@"
 *   insn=0x00000000004E3664 string=0x00000000004E3668 ""
 *   insn=0x00000000004E366C string=0x00000000004E3670 "_"
 *   insn=0x00000000004E3670 string=0x00000000004E3674 ")}@"
 *   insn=0x00000000004E3674 string=0x00000000004E3678 ""
 *   insn=0x00000000004E3678 string=0x00000000004E367C "I"
 *   insn=0x00000000004E367C string=0x00000000004E3680 "i"
 *   insn=0x00000000004E3680 string=0x00000000004E3684 ""
 *   insn=0x00000000004E3688 string=0x00000000004E368C ""
 *   insn=0x00000000004E368C string=0x00000000004E3690 "\t,"
 *   insn=0x00000000004E3690 string=0x00000000004E3694 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::PopLimit(__int64 this, int a2)
{
  int v2; // w9
  int v3; // w10
  __int64 v4; // x8
  int v5; // w11
  __int64 v6; // x8
  int v7; // w9
  bool v8; // vf
  int v9; // w9

  v2 = *(_DWORD *)(this + 44);
  v3 = *(_DWORD *)(this + 48);
  v4 = *(_QWORD *)(this + 16);
  v5 = *(_DWORD *)(this + 24);
  *(_DWORD *)(this + 40) = a2;
  v6 = v4 + v2;
  if ( v3 >= a2 )
    v7 = a2;
  else
    v7 = v3;
  v8 = __OFSUB__(v5, v7);
  v9 = v5 - v7;
  *(_QWORD *)(this + 16) = v6;
  if ( (v9 < 0) ^ v8 | (v9 == 0) )
  {
    *(_DWORD *)(this + 44) = 0;
  }
  else
  {
    *(_DWORD *)(this + 44) = v9;
    *(_QWORD *)(this + 16) = v6 - v9;
  }
  *(_BYTE *)(this + 36) = 0;
  return this;
}

