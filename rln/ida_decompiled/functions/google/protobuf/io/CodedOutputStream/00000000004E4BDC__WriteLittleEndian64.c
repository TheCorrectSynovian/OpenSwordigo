/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4BDC
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream19WriteLittleEndian64Em
 * Demangled: google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *
 * Callers: 1
 *   0x00000000001FFB00  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 43
 *   insn=0x00000000004E4BF0 string=0x00000000004E4BF4 "V"
 *   insn=0x00000000004E4C08 string=0x00000000004E4C0C "?!"
 *   insn=0x00000000004E4C0C string=0x00000000004E4C10 "c"
 *   insn=0x00000000004E4C10 string=0x00000000004E4C14 "h"
 *   insn=0x00000000004E4C18 string=0x00000000004E4C20 "+|H"
 *   insn=0x00000000004E4C20 string=0x00000000004E4C24 "?!"
 *   insn=0x00000000004E4C24 string=0x00000000004E4C28 ")|P"
 *   insn=0x00000000004E4C28 string=0x00000000004E4C2C ""
 *   insn=0x00000000004E4C2C string=0x00000000004E4C30 "+|X"
 *   insn=0x00000000004E4C30 string=0x00000000004E4C34 "*"
 *   insn=0x00000000004E4C34 string=0x00000000004E4C38 "\t\t"
 *   insn=0x00000000004E4C38 string=0x00000000004E4C3C ")"
 *   insn=0x00000000004E4C3C string=0x00000000004E4C40 ""
 *   insn=0x00000000004E4C40 string=0x00000000004E4C44 "+"
 *   insn=0x00000000004E4C44 string=0x00000000004E4C48 ","
 *   insn=0x00000000004E4C4C string=0x00000000004E4C50 "\n"
 *   insn=0x00000000004E4C50 string=0x00000000004E4C54 "\t"
 *   insn=0x00000000004E4C54 string=0x00000000004E4C58 ""
 *   insn=0x00000000004E4C60 string=0x00000000004E4C64 "h"
 *   insn=0x00000000004E4C60 string=0x00000000004E4C78 "h"
 *   insn=0x00000000004E4C64 string=0x00000000004E4C68 "i"
 *   insn=0x00000000004E4C68 string=0x00000000004E4C6C "!"
 *   insn=0x00000000004E4C6C string=0x00000000004E4C70 ")!"
 *   insn=0x00000000004E4C70 string=0x00000000004E4C74 "&"
 *   insn=0x00000000004E4C74 string=0x00000000004E4D0C "h"
 *   insn=0x00000000004E4C78 string=0x00000000004E4C7C "`"
 *   insn=0x00000000004E4C98 string=0x00000000004E4C9C "`"
 *   insn=0x00000000004E4C9C string=0x00000000004E4CA0 "x"
 *   insn=0x00000000004E4CA8 string=0x00000000004E4CAC ""
 *   insn=0x00000000004E4CAC string=0x00000000004E4CB0 "\t@"
 *   insn=0x00000000004E4CB4 string=0x00000000004E4CB8 " "
 *   insn=0x00000000004E4CB8 string=0x00000000004E4CBC "h&B)"
 *   insn=0x00000000004E4CC8 string=0x00000000004E4CCC ")"
 *   insn=0x00000000004E4CD0 string=0x00000000004E4CD4 "`"
 *   insn=0x00000000004E4CD4 string=0x00000000004E4CD8 "i"
 *   insn=0x00000000004E4CF8 string=0x00000000004E4CFC "h"
 *   insn=0x00000000004E4CFC string=0x00000000004E4D00 "i"
 *   insn=0x00000000004E4D00 string=0x00000000004E4D04 ""
 *   insn=0x00000000004E4D04 string=0x00000000004E4D08 ")"
 *   insn=0x00000000004E4D0C string=0x00000000004E4D10 "i"
 *   insn=0x00000000004E4D20 string=0x00000000004E4D50 "`E"
 *   insn=0x00000000004E4D44 string=0x00000000004E4D48 "hb"
 *   insn=0x00000000004E4D50 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian64(__int64 this, __int64 a2)
{
  _QWORD *v2; // x19
  unsigned int v3; // w9
  __int64 v4; // x20
  char *v5; // x8
  __int64 v6; // x8
  int v7; // w9
  int v8; // w8
  void *v9; // x0
  int v10; // w23
  char *v11; // x21
  __int64 v12; // x24
  int v13; // w9
  void *v14; // [xsp+8h] [xbp-48h] BYREF
  char v15; // [xsp+10h] [xbp-40h] BYREF
  __int64 v16; // [xsp+18h] [xbp-38h]

  v2 = (_QWORD *)this;
  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this + 16;
  v3 = *(_DWORD *)(this + 16);
  if ( v3 < 8 )
    v5 = &v15;
  else
    v5 = *(char **)(this + 8);
  *(_QWORD *)v5 = a2;
  if ( v3 >= 8 )
  {
    v6 = *(_QWORD *)(this + 8) + 8LL;
    v7 = *(_DWORD *)(this + 16) - 8;
LABEL_13:
    v2[1] = v6;
    *((_DWORD *)v2 + 4) = v7;
    return this;
  }
  v8 = *(_DWORD *)(this + 16);
  v9 = *(void **)(this + 8);
  if ( v8 > 7 )
  {
    v11 = &v15;
    v10 = 8;
LABEL_12:
    this = (__int64)memcpy(v9, v11, v10);
    v6 = v2[1] + v10;
    v7 = *((_DWORD *)v2 + 4) - v10;
    goto LABEL_13;
  }
  v10 = 8;
  v11 = &v15;
  while ( 1 )
  {
    memcpy(v9, v11, v8);
    v12 = *((int *)v2 + 4);
    this = (*(__int64 (__fastcall **)(_QWORD, void **, __int64))(*(_QWORD *)*v2 + 16LL))(*v2, &v14, v4);
    if ( (this & 1) == 0 )
      break;
    v8 = *((_DWORD *)v2 + 4);
    v9 = v14;
    v10 -= v12;
    v11 += v12;
    v13 = *((_DWORD *)v2 + 5) + v8;
    v2[1] = v14;
    *((_DWORD *)v2 + 5) = v13;
    if ( v8 >= v10 )
      goto LABEL_12;
  }
  v2[1] = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_BYTE *)v2 + 24) = 1;
  return this;
}

