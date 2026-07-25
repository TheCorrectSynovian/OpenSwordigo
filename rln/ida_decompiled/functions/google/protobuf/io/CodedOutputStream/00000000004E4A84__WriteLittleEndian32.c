/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4A84
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream19WriteLittleEndian32Ej
 * Demangled: google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *
 * Callers: 1
 *   0x00000000001F9290  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 34
 *   insn=0x00000000004E4A98 string=0x00000000004E4A9C "V"
 *   insn=0x00000000004E4AB4 string=0x00000000004E4AB8 "c"
 *   insn=0x00000000004E4AB8 string=0x00000000004E4ABC "i"
 *   insn=0x00000000004E4AC0 string=0x00000000004E4AC8 "*|S+|"
 *   insn=0x00000000004E4AC8 string=0x00000000004E4ACC "+|"
 *   insn=0x00000000004E4ACC string=0x00000000004E4AD0 ",|"
 *   insn=0x00000000004E4AD4 string=0x00000000004E4AD8 "!"
 *   insn=0x00000000004E4AD8 string=0x00000000004E4ADC "*"
 *   insn=0x00000000004E4ADC string=0x00000000004E4AE0 "+\t"
 *   insn=0x00000000004E4AE0 string=0x00000000004E4AE4 ","
 *   insn=0x00000000004E4AE8 string=0x00000000004E4AEC "h"
 *   insn=0x00000000004E4AE8 string=0x00000000004E4B00 "h"
 *   insn=0x00000000004E4AEC string=0x00000000004E4AF0 "i"
 *   insn=0x00000000004E4AF0 string=0x00000000004E4AF4 ""
 *   insn=0x00000000004E4AF4 string=0x00000000004E4AF8 ")"
 *   insn=0x00000000004E4AF8 string=0x00000000004E4AFC "&"
 *   insn=0x00000000004E4AFC string=0x00000000004E4B94 "h"
 *   insn=0x00000000004E4B00 string=0x00000000004E4B04 "`"
 *   insn=0x00000000004E4B20 string=0x00000000004E4B24 "`"
 *   insn=0x00000000004E4B24 string=0x00000000004E4B28 "x"
 *   insn=0x00000000004E4B30 string=0x00000000004E4B34 ""
 *   insn=0x00000000004E4B34 string=0x00000000004E4B38 "\t@"
 *   insn=0x00000000004E4B3C string=0x00000000004E4B40 " "
 *   insn=0x00000000004E4B40 string=0x00000000004E4B44 "h&B)"
 *   insn=0x00000000004E4B50 string=0x00000000004E4B54 ")"
 *   insn=0x00000000004E4B58 string=0x00000000004E4B5C "`"
 *   insn=0x00000000004E4B5C string=0x00000000004E4B60 "i"
 *   insn=0x00000000004E4B80 string=0x00000000004E4B84 "h"
 *   insn=0x00000000004E4B84 string=0x00000000004E4B88 "i"
 *   insn=0x00000000004E4B88 string=0x00000000004E4B8C ""
 *   insn=0x00000000004E4B8C string=0x00000000004E4B90 ")"
 *   insn=0x00000000004E4B94 string=0x00000000004E4B98 "i"
 *   insn=0x00000000004E4BCC string=0x00000000004E4BD0 "hb"
 *   insn=0x00000000004E4BD8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteLittleEndian32(__int64 this, int a2)
{
  _QWORD *v2; // x19
  unsigned int v3; // w8
  __int64 v4; // x20
  _DWORD *v5; // x9
  __int64 v6; // x8
  int v7; // w9
  int v8; // w8
  void *v9; // x0
  int v10; // w23
  _BYTE *v11; // x21
  __int64 v12; // x24
  int v13; // w9
  void *v14; // [xsp+8h] [xbp-48h] BYREF
  _BYTE v15[4]; // [xsp+14h] [xbp-3Ch] BYREF
  __int64 v16; // [xsp+18h] [xbp-38h]

  v2 = (_QWORD *)this;
  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this + 16;
  v3 = *(_DWORD *)(this + 16);
  if ( v3 < 4 )
    v5 = v15;
  else
    v5 = *(_DWORD **)(this + 8);
  *v5 = a2;
  if ( v3 >= 4 )
  {
    v6 = *(_QWORD *)(this + 8) + 4LL;
    v7 = *(_DWORD *)(this + 16) - 4;
LABEL_13:
    v2[1] = v6;
    *((_DWORD *)v2 + 4) = v7;
    return this;
  }
  v8 = *(_DWORD *)(this + 16);
  v9 = *(void **)(this + 8);
  if ( v8 > 3 )
  {
    v11 = v15;
    v10 = 4;
LABEL_12:
    this = (__int64)memcpy(v9, v11, v10);
    v6 = v2[1] + v10;
    v7 = *((_DWORD *)v2 + 4) - v10;
    goto LABEL_13;
  }
  v10 = 4;
  v11 = v15;
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

