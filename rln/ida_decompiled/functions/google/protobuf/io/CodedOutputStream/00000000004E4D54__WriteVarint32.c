/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4D54
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream13WriteVarint32Ej
 * Demangled: google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Callers: 1
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 67
 *   insn=0x00000000004E4D68 string=0x00000000004E4D6C "V"
 *   insn=0x00000000004E4D84 string=0x00000000004E4D88 ""
 *   insn=0x00000000004E4D88 string=0x00000000004E4D8C "h"
 *   insn=0x00000000004E4D88 string=0x00000000004E4DE8 "?"
 *   insn=0x00000000004E4D8C string=0x00000000004E4D90 ")"
 *   insn=0x00000000004E4D90 string=0x00000000004E4D94 "?"
 *   insn=0x00000000004E4D94 string=0x00000000004E4D98 "\t"
 *   insn=0x00000000004E4D9C string=0x00000000004E4DA0 ")|S)"
 *   insn=0x00000000004E4D9C string=0x00000000004E4E14 ")"
 *   insn=0x00000000004E4DA0 string=0x00000000004E4DA4 ")"
 *   insn=0x00000000004E4DA4 string=0x00000000004E4DA8 "?"
 *   insn=0x00000000004E4DA8 string=0x00000000004E4DAC "\t"
 *   insn=0x00000000004E4DAC string=0x00000000004E4DB0 "C\t"
 *   insn=0x00000000004E4DB0 string=0x00000000004E4DB4 ")|"
 *   insn=0x00000000004E4DB0 string=0x00000000004E4ED8 ")4S\t"
 *   insn=0x00000000004E4DB4 string=0x00000000004E4DB8 ")"
 *   insn=0x00000000004E4DB8 string=0x00000000004E4DBC "?"
 *   insn=0x00000000004E4DBC string=0x00000000004E4DC0 "\t\t"
 *   insn=0x00000000004E4DC0 string=0x00000000004E4DC4 "#\t"
 *   insn=0x00000000004E4DC4 string=0x00000000004E4DC8 ")|"
 *   insn=0x00000000004E4DC4 string=0x00000000004E4EE8 ")P"
 *   insn=0x00000000004E4DC8 string=0x00000000004E4DCC "*"
 *   insn=0x00000000004E4DCC string=0x00000000004E4DD0 ")|"
 *   insn=0x00000000004E4DD0 string=0x00000000004E4DD4 "\n"
 *   insn=0x00000000004E4DD4 string=0x00000000004E4DD8 "\t\t"
 *   insn=0x00000000004E4DD8 string=0x00000000004E4DDC "\t"
 *   insn=0x00000000004E4DD8 string=0x00000000004E4EF8 ")l"
 *   insn=0x00000000004E4DE0 string=0x00000000004E4DE4 "H"
 *   insn=0x00000000004E4DE4 string=0x00000000004E4F04 "i"
 *   insn=0x00000000004E4DF4 string=0x00000000004E4DF8 "+"
 *   insn=0x00000000004E4DF8 string=0x00000000004E4DFC ",|"
 *   insn=0x00000000004E4DFC string=0x00000000004E4E00 "Ki)8)"
 *   insn=0x00000000004E4E00 string=0x00000000004E4E04 ")"
 *   insn=0x00000000004E4E04 string=0x00000000004E4E08 "!|Sl"
 *   insn=0x00000000004E4E08 string=0x00000000004E4E0C "l"
 *   insn=0x00000000004E4E14 string=0x00000000004E4E18 "\t"
 *   insn=0x00000000004E4E1C string=0x00000000004E4E20 "9"
 *   insn=0x00000000004E4E28 string=0x00000000004E4E2C "*"
 *   insn=0x00000000004E4E30 string=0x00000000004E4E34 "`"
 *   insn=0x00000000004E4E38 string=0x00000000004E4E3C "7"
 *   insn=0x00000000004E4E4C string=0x00000000004E4E50 "Dr"
 *   insn=0x00000000004E4E50 string=0x00000000004E4E54 "`"
 *   insn=0x00000000004E4E54 string=0x00000000004E4E58 "x"
 *   insn=0x00000000004E4E60 string=0x00000000004E4E64 ""
 *   insn=0x00000000004E4E64 string=0x00000000004E4E68 "\t@"
 *   insn=0x00000000004E4E70 string=0x00000000004E4E74 "h&B)"
 *   insn=0x00000000004E4E80 string=0x00000000004E4E84 ")"
 *   insn=0x00000000004E4E88 string=0x00000000004E4E8C "`"
 *   insn=0x00000000004E4E8C string=0x00000000004E4E90 "i"
 *   insn=0x00000000004E4EA0 string=0x00000000004E4EA4 "/r"
 *   insn=0x00000000004E4EA4 string=0x00000000004E4EA8 "h"
 *   insn=0x00000000004E4EA8 string=0x00000000004E4EAC "i"
 *   insn=0x00000000004E4EAC string=0x00000000004E4EB0 ""
 *   insn=0x00000000004E4EB0 string=0x00000000004E4EB4 ")"
 *   insn=0x00000000004E4EB4 string=0x00000000004E4EB8 "h"
 *   insn=0x00000000004E4EB8 string=0x00000000004E4EBC "i"
 *   insn=0x00000000004E4ECC string=0x00000000004E4ED0 "hb"
 *   insn=0x00000000004E4ED8 string=0x00000000004E4EDC "\t"
 *   insn=0x00000000004E4EE0 string=0x00000000004E4EE4 ""
 *   insn=0x00000000004E4EE8 string=0x00000000004E4EEC "\t\t"
 *   insn=0x00000000004E4EF8 string=0x00000000004E4EFC "\t"
 *   insn=0x00000000004E4F04 string=0x00000000004E4F08 "j"
 *   insn=0x00000000004E4F08 string=0x00000000004E4F0C ")"
 *   insn=0x00000000004E4F0C string=0x00000000004E4F10 "H"
 *   insn=0x00000000004E4F10 string=0x00000000004E4F14 "i"
 *   insn=0x00000000004E4F14 string=0x00000000004E4F18 "h"
 *   insn=0x00000000004E4F44 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteVarint32(__int64 this, unsigned int a2)
{
  _QWORD *v2; // x19
  int v3; // w8
  __int64 v4; // x20
  _BYTE *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9
  unsigned int v8; // w12
  _BYTE *v9; // x21
  void *v10; // x0
  int v11; // w23
  __int64 v12; // x24
  int v13; // w9
  int v14; // w9
  __int64 v15; // x9
  int v16; // w8
  void *v17; // [xsp+8h] [xbp-48h] BYREF
  _BYTE v18[8]; // [xsp+10h] [xbp-40h] BYREF
  __int64 v19; // [xsp+18h] [xbp-38h]

  v2 = (_QWORD *)this;
  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this + 16;
  v3 = *(_DWORD *)(this + 16);
  if ( v3 < 5 )
  {
    if ( a2 < 0x80 )
    {
      LODWORD(v7) = 0;
    }
    else
    {
      v7 = 0;
      do
      {
        v8 = a2 >> 14;
        v18[v7++] = a2 | 0x80;
        a2 >>= 7;
      }
      while ( v8 );
    }
    v9 = v18;
    v18[(int)v7] = a2 & 0x7F;
    v10 = *(void **)(this + 8);
    v11 = v7 + 1;
    if ( v3 > (int)v7 )
    {
LABEL_17:
      this = (__int64)memcpy(v10, v9, v11);
      v14 = *((_DWORD *)v2 + 4) - v11;
      v2[1] += v11;
      *((_DWORD *)v2 + 4) = v14;
    }
    else
    {
      v9 = v18;
      while ( 1 )
      {
        memcpy(v10, v9, v3);
        v12 = *((int *)v2 + 4);
        this = (*(__int64 (__fastcall **)(_QWORD, void **, __int64))(*(_QWORD *)*v2 + 16LL))(*v2, &v17, v4);
        if ( (this & 1) == 0 )
          break;
        v3 = *((_DWORD *)v2 + 4);
        v10 = v17;
        v11 -= v12;
        v9 += v12;
        v13 = *((_DWORD *)v2 + 5) + v3;
        v2[1] = v17;
        *((_DWORD *)v2 + 5) = v13;
        if ( v3 >= v11 )
          goto LABEL_17;
      }
      v2[1] = 0;
      *((_DWORD *)v2 + 4) = 0;
      *((_BYTE *)v2 + 24) = 1;
    }
  }
  else
  {
    v5 = *(_BYTE **)(this + 8);
    *v5 = a2 | 0x80;
    if ( a2 < 0x80 )
    {
      *v5 = a2 & 0x7F;
      v6 = 1;
    }
    else
    {
      v5[1] = (a2 >> 7) | 0x80;
      if ( a2 < 0x4000 )
      {
        v5[1] = (a2 >> 7) & 0x7F;
        v6 = 2;
      }
      else
      {
        v5[2] = (a2 >> 14) | 0x80;
        if ( a2 < 0x200000 )
        {
          v5[2] = (a2 >> 14) & 0x7F;
          v6 = 3;
        }
        else
        {
          v5[3] = (a2 >> 21) | 0x80;
          if ( a2 >> 28 )
          {
            v5[4] = a2 >> 28;
            v6 = 5;
          }
          else
          {
            v5[3] = (a2 >> 21) & 0x7F;
            v6 = 4;
          }
        }
      }
    }
    v15 = *(_QWORD *)(this + 8) + v6;
    v16 = *(_DWORD *)(this + 16) - v6;
    *(_QWORD *)(this + 8) = v15;
    *(_DWORD *)(this + 16) = v16;
  }
  return this;
}

