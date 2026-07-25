/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E36E8
 * Mangled: _ZN6google8protobuf2io16CodedInputStream18SetTotalBytesLimitEii
 * Demangled: google::protobuf::io::CodedInputStream::SetTotalBytesLimit(int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000004E36E8 string=0x00000000004E36EC "@"
 *   insn=0x00000000004E36EC string=0x00000000004E36F0 "\t@"
 *   insn=0x00000000004E36F0 string=0x00000000004E36F4 ""
 *   insn=0x00000000004E36F4 string=0x00000000004E36F8 "J}@"
 *   insn=0x00000000004E36F8 string=0x00000000004E36FC "\t"
 *   insn=0x00000000004E36FC string=0x00000000004E3700 ""
 *   insn=0x00000000004E3700 string=0x00000000004E3704 "j"
 *   insn=0x00000000004E3704 string=0x00000000004E3708 "I"
 *   insn=0x00000000004E3708 string=0x00000000004E370C "?"
 *   insn=0x00000000004E370C string=0x00000000004E3710 ")"
 *   insn=0x00000000004E3710 string=0x00000000004E3714 "?"
 *   insn=0x00000000004E3714 string=0x00000000004E3718 "\t"
 *   insn=0x00000000004E3718 string=0x00000000004E371C ")"
 *   insn=0x00000000004E371C string=0x00000000004E3720 "i"
 *   insn=0x00000000004E3720 string=0x00000000004E3724 ""
 *   insn=0x00000000004E3728 string=0x00000000004E372C ""
 *   insn=0x00000000004E372C string=0x00000000004E3730 "\t,"
 *   insn=0x00000000004E3730 string=0x00000000004E3734 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::SetTotalBytesLimit(__int64 this, int a2, int a3)
{
  int v3; // w12
  __int64 v4; // x8
  int v5; // w11
  __int64 v6; // x10
  int v7; // w9
  __int64 v8; // x8
  int v9; // w9
  bool v10; // vf
  int v11; // w9

  v3 = *(_DWORD *)(this + 40);
  v4 = *(_QWORD *)(this + 16);
  v5 = *(_DWORD *)(this + 24);
  v6 = *(int *)(this + 44);
  v7 = v4 - *(_DWORD *)(this + 8);
  v8 = v4 + v6;
  v9 = v5 - v6 - v7;
  if ( v9 < a2 )
    v9 = a2;
  *(_DWORD *)(this + 48) = v9;
  *(_DWORD *)(this + 52) = a3;
  if ( v9 >= v3 )
    v9 = v3;
  v10 = __OFSUB__(v5, v9);
  v11 = v5 - v9;
  *(_QWORD *)(this + 16) = v8;
  if ( (v11 < 0) ^ v10 | (v11 == 0) )
  {
    *(_DWORD *)(this + 44) = 0;
  }
  else
  {
    *(_DWORD *)(this + 44) = v11;
    *(_QWORD *)(this + 16) = v8 - v11;
  }
  return this;
}

