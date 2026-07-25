/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E47A4
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream4SkipEi
 * Demangled: google::protobuf::io::CodedOutputStream::Skip(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 9
 *   insn=0x00000000004E47B8 string=0x00000000004E47BC "V"
 *   insn=0x00000000004E47F0 string=0x00000000004E47F4 ""
 *   insn=0x00000000004E47F4 string=0x00000000004E47F8 "\t@"
 *   insn=0x00000000004E4808 string=0x00000000004E480C "s"
 *   insn=0x00000000004E480C string=0x00000000004E4810 "J"
 *   insn=0x00000000004E4820 string=0x00000000004E4824 ","
 *   insn=0x00000000004E482C string=0x00000000004E4840 ""
 *   insn=0x00000000004E4848 string=0x00000000004E484C ""
 *   insn=0x00000000004E4894 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::Skip(google::protobuf::io::CodedOutputStream *this, int a2)
{
  int v2; // w19
  _DWORD *v4; // x20
  int v5; // w23
  _QWORD *v6; // x24
  int v7; // w9
  __int64 v8; // x8
  int v9; // w10
  __int64 result; // x0
  _QWORD v11[2]; // [xsp+0h] [xbp-40h] BYREF

  v2 = a2;
  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 0 )
    return 0;
  v4 = (_DWORD *)((char *)this + 16);
  v5 = *((_DWORD *)this + 4);
  if ( v5 >= a2 )
  {
    v8 = *((_QWORD *)this + 1);
    v6 = (_QWORD *)((char *)this + 8);
LABEL_9:
    result = 1;
    *v6 = v8 + v2;
    *v4 = v5 - v2;
  }
  else
  {
    v6 = (_QWORD *)((char *)this + 8);
    while ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**(_QWORD **)this + 16LL))(
               *(_QWORD *)this,
               v11,
               (char *)this + 16)
           & 1) != 0 )
    {
      v7 = *((_DWORD *)this + 4);
      v8 = v11[0];
      v2 -= v5;
      v9 = *((_DWORD *)this + 5) + v7;
      v5 = v7;
      *((_QWORD *)this + 1) = v11[0];
      *((_DWORD *)this + 5) = v9;
      if ( v2 <= v7 )
      {
        v5 = v7;
        goto LABEL_9;
      }
    }
    result = 0;
    *((_QWORD *)this + 1) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 24) = 1;
  }
  return result;
}

