/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4950
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream8WriteRawEPKvi
 * Demangled: google::protobuf::io::CodedOutputStream::WriteRaw(void const*,int)
 *
 * Callers: 1
 *   0x00000000001FDBB0  google::protobuf::io::CodedOutputStream::WriteRaw(void const*,int)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 20
 *   insn=0x00000000004E4964 string=0x00000000004E4968 "W"
 *   insn=0x00000000004E4998 string=0x00000000004E499C "qs"
 *   insn=0x00000000004E499C string=0x00000000004E49A0 "`"
 *   insn=0x00000000004E49A0 string=0x00000000004E49A4 "x"
 *   insn=0x00000000004E49AC string=0x00000000004E49B0 ""
 *   insn=0x00000000004E49B0 string=0x00000000004E49B4 "\t@"
 *   insn=0x00000000004E49BC string=0x00000000004E49C0 "h&B)"
 *   insn=0x00000000004E49CC string=0x00000000004E49D0 ")"
 *   insn=0x00000000004E49D4 string=0x00000000004E49D8 "`"
 *   insn=0x00000000004E49D8 string=0x00000000004E49DC "i"
 *   insn=0x00000000004E49EC string=0x00000000004E49F0 "\s"
 *   insn=0x00000000004E49F0 string=0x00000000004E49F4 "h"
 *   insn=0x00000000004E49F4 string=0x00000000004E49F8 "i"
 *   insn=0x00000000004E49F8 string=0x00000000004E49FC ""
 *   insn=0x00000000004E49FC string=0x00000000004E4A00 ")"
 *   insn=0x00000000004E4A00 string=0x00000000004E4A04 "h"
 *   insn=0x00000000004E4A04 string=0x00000000004E4A08 "i"
 *   insn=0x00000000004E4A18 string=0x00000000004E4A1C "hb"
 *   insn=0x00000000004E4A2C string=0x00000000004E4A48 ""F"
 *   insn=0x00000000004E4A48 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteRaw(
        google::protobuf::io::CodedOutputStream *this,
        char *a2,
        int a3)
{
  int v4; // w20
  int v5; // w8
  char *v6; // x22
  void *v8; // x0
  __int64 v9; // x24
  __int64 result; // x0
  int v11; // w9
  int v12; // w9
  void *v13[2]; // [xsp+0h] [xbp-40h] BYREF

  v4 = a3;
  v13[1] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (char *)this + 16;
  v5 = *((_DWORD *)this + 4);
  v8 = (void *)*((_QWORD *)this + 1);
  if ( v5 >= a3 )
  {
LABEL_4:
    result = (__int64)memcpy(v8, a2, v4);
    v12 = *((_DWORD *)this + 4) - v4;
    *((_QWORD *)this + 1) += v4;
    *((_DWORD *)this + 4) = v12;
  }
  else
  {
    while ( 1 )
    {
      memcpy(v8, a2, v5);
      v9 = *((int *)this + 4);
      result = (*(__int64 (__fastcall **)(_QWORD, void **, char *))(**(_QWORD **)this + 16LL))(*(_QWORD *)this, v13, v6);
      if ( (result & 1) == 0 )
        break;
      v5 = *((_DWORD *)this + 4);
      v8 = v13[0];
      v4 -= v9;
      a2 += v9;
      v11 = *((_DWORD *)this + 5) + v5;
      *((void **)this + 1) = v13[0];
      *((_DWORD *)this + 5) = v11;
      if ( v5 >= v4 )
        goto LABEL_4;
    }
    *((_QWORD *)this + 1) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 24) = 1;
  }
  return result;
}

