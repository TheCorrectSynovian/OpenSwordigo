/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4FF4
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream13WriteVarint64Em
 * Demangled: google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *
 * Callers: 1
 *   0x00000000001F6D10  google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 85
 *   insn=0x00000000004E5008 string=0x00000000004E500C "V"
 *   insn=0x00000000004E5024 string=0x00000000004E5028 "+"
 *   insn=0x00000000004E5028 string=0x00000000004E502C "h"
 *   insn=0x00000000004E5028 string=0x00000000004E504C "?"
 *   insn=0x00000000004E502C string=0x00000000004E5030 "+"
 *   insn=0x00000000004E5030 string=0x00000000004E5034 "*"
 *   insn=0x00000000004E5034 string=0x00000000004E5038 ""
 *   insn=0x00000000004E5040 string=0x00000000004E5044 ")"
 *   insn=0x00000000004E5040 string=0x00000000004E5134 ")"
 *   insn=0x00000000004E5044 string=0x00000000004E5048 "?"
 *   insn=0x00000000004E5048 string=0x00000000004E5144 "k"
 *   insn=0x00000000004E505C string=0x00000000004E5060 ","
 *   insn=0x00000000004E5060 string=0x00000000004E5064 "a"
 *   insn=0x00000000004E5064 string=0x00000000004E5068 "m"
 *   insn=0x00000000004E5068 string=0x00000000004E506C "Li)8)"
 *   insn=0x00000000004E506C string=0x00000000004E5070 ")"
 *   insn=0x00000000004E5074 string=0x00000000004E5078 "M"
 *   insn=0x00000000004E5084 string=0x00000000004E5088 "*"
 *   insn=0x00000000004E508C string=0x00000000004E5090 "`"
 *   insn=0x00000000004E5094 string=0x00000000004E5098 "7"
 *   insn=0x00000000004E50AC string=0x00000000004E50B0 "`"
 *   insn=0x00000000004E50B0 string=0x00000000004E50B4 "x"
 *   insn=0x00000000004E50BC string=0x00000000004E50C0 ""
 *   insn=0x00000000004E50C0 string=0x00000000004E50C4 "\t@"
 *   insn=0x00000000004E50C8 string=0x00000000004E50CC "`\t"
 *   insn=0x00000000004E50CC string=0x00000000004E50D0 "h&B)"
 *   insn=0x00000000004E50DC string=0x00000000004E50E0 ")"
 *   insn=0x00000000004E50E4 string=0x00000000004E50E8 "`"
 *   insn=0x00000000004E50E8 string=0x00000000004E50EC "i"
 *   insn=0x00000000004E5100 string=0x00000000004E5104 "h"
 *   insn=0x00000000004E5104 string=0x00000000004E5108 "i"
 *   insn=0x00000000004E5108 string=0x00000000004E510C ""
 *   insn=0x00000000004E510C string=0x00000000004E5110 ")"
 *   insn=0x00000000004E5110 string=0x00000000004E5114 "-"
 *   insn=0x00000000004E5114 string=0x00000000004E51C8 "h"
 *   insn=0x00000000004E5118 string=0x00000000004E511C "I}"
 *   insn=0x00000000004E5118 string=0x00000000004E520C ")|"
 *   insn=0x00000000004E511C string=0x00000000004E5120 ")"
 *   insn=0x00000000004E5120 string=0x00000000004E5124 "_"
 *   insn=0x00000000004E5120 string=0x00000000004E5224 "_"
 *   insn=0x00000000004E5130 string=0x00000000004E5170 "J"
 *   insn=0x00000000004E5134 string=0x00000000004E5138 ")"
 *   insn=0x00000000004E5138 string=0x00000000004E513C "\t%"
 *   insn=0x00000000004E513C string=0x00000000004E5140 "I"
 *   insn=0x00000000004E5144 string=0x00000000004E5148 "!"
 *   insn=0x00000000004E5148 string=0x00000000004E514C "+"
 *   insn=0x00000000004E514C string=0x00000000004E5150 "k"
 *   insn=0x00000000004E5150 string=0x00000000004E5154 ""
 *   insn=0x00000000004E5154 string=0x00000000004E5158 "+"
 *   insn=0x00000000004E5158 string=0x00000000004E515C "k"
 *   insn=0x00000000004E515C string=0x00000000004E5160 ""
 *   insn=0x00000000004E5160 string=0x00000000004E5164 "+"
 *   insn=0x00000000004E5164 string=0x00000000004E5168 "k"
 *   insn=0x00000000004E5168 string=0x00000000004E516C ""
 *   insn=0x00000000004E5170 string=0x00000000004E5174 "\n"
 *   insn=0x00000000004E5174 string=0x00000000004E5178 "*|"
 *   insn=0x00000000004E5178 string=0x00000000004E517C "J"
 *   insn=0x00000000004E517C string=0x00000000004E5180 "\n"
 *   insn=0x00000000004E5180 string=0x00000000004E5184 "*|"
 *   insn=0x00000000004E5184 string=0x00000000004E5188 "J"
 *   insn=0x00000000004E5188 string=0x00000000004E518C "\n\t"
 *   insn=0x00000000004E518C string=0x00000000004E5190 "*|SJ"
 *   insn=0x00000000004E5190 string=0x00000000004E5194 "J"
 *   insn=0x00000000004E5194 string=0x00000000004E5198 "\n"
 *   insn=0x00000000004E5198 string=0x00000000004E519C "*"
 *   insn=0x00000000004E519C string=0x00000000004E51A0 "+}@"
 *   insn=0x00000000004E51A0 string=0x00000000004E51A4 "\n"
 *   insn=0x00000000004E51A4 string=0x00000000004E51A8 ""
 *   insn=0x00000000004E51A8 string=0x00000000004E51AC "\n"
 *   insn=0x00000000004E51AC string=0x00000000004E51B0 "J"
 *   insn=0x00000000004E51B0 string=0x00000000004E51B4 "\n"
 *   insn=0x00000000004E51B4 string=0x00000000004E51B8 "h"
 *   insn=0x00000000004E51B8 string=0x00000000004E51BC "j"
 *   insn=0x00000000004E51BC string=0x00000000004E51C0 ""
 *   insn=0x00000000004E51C0 string=0x00000000004E51C4 "I"
 *   insn=0x00000000004E51C8 string=0x00000000004E51CC "i"
 *   insn=0x00000000004E51D8 string=0x00000000004E51DC "A"
 *   insn=0x00000000004E51DC string=0x00000000004E5264 "D"
 *   insn=0x00000000004E5200 string=0x00000000004E5204 "hb"
 *   insn=0x00000000004E520C string=0x00000000004E5210 ")"
 *   insn=0x00000000004E5210 string=0x00000000004E5214 "?"
 *   insn=0x00000000004E5210 string=0x00000000004E5234 "?"
 *   insn=0x00000000004E5224 string=0x00000000004E5228 """
 *   insn=0x00000000004E5234 string=0x00000000004E5238 """
 *   insn=0x00000000004E5264 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteVarint64(__int64 this, unsigned __int64 a2)
{
  _QWORD *v2; // x19
  int v3; // w8
  __int64 v4; // x20
  _BYTE *v5; // x8
  unsigned __int64 v6; // x10
  int v7; // w9
  __int64 v8; // x9
  unsigned __int64 v9; // x11
  char v10; // w12
  unsigned __int64 v11; // x13
  _BYTE *v12; // x21
  void *v13; // x0
  int v14; // w23
  __int64 v15; // x24
  int v16; // w9
  __int64 v17; // x8
  int v18; // w9
  void *v19; // [xsp+0h] [xbp-50h] BYREF
  _BYTE v20[12]; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v21; // [xsp+18h] [xbp-38h]

  v2 = (_QWORD *)this;
  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this + 16;
  v3 = *(_DWORD *)(this + 16);
  if ( v3 >= 10 )
  {
    v5 = *(_BYTE **)(this + 8);
    v6 = a2 >> 28;
    if ( HIBYTE(a2) )
    {
      if ( (unsigned int)HIBYTE(a2) >= 0x80 )
      {
        v5[9] = ((a2 & 0x8000000000000000LL) != 0LL) | 0x80;
        v7 = 10;
      }
      else
      {
        v7 = 9;
      }
      v5[8] = HIBYTE(a2) | 0x80;
    }
    else
    {
      if ( !(_DWORD)v6 )
      {
        if ( !((unsigned int)a2 >> 14) )
        {
          if ( (unsigned int)a2 < 0x80 )
          {
            v7 = 1;
            goto LABEL_28;
          }
          v7 = 2;
LABEL_27:
          v5[1] = ((unsigned int)a2 >> 7) | 0x80;
LABEL_28:
          *v5 = a2 | 0x80;
          v5[v7 - 1] &= ~0x80u;
          v17 = *(_QWORD *)(this + 8) + v7;
          v18 = *(_DWORD *)(this + 16) - v7;
          goto LABEL_29;
        }
        if ( (unsigned int)a2 < 0x200000 )
        {
          v7 = 3;
          goto LABEL_26;
        }
        v7 = 4;
LABEL_25:
        v5[3] = ((unsigned int)a2 >> 21) | 0x80;
LABEL_26:
        v5[2] = ((unsigned int)a2 >> 14) | 0x80;
        goto LABEL_27;
      }
      if ( !((unsigned int)v6 >> 14) )
      {
        if ( (unsigned int)v6 < 0x80 )
        {
          v7 = 5;
LABEL_24:
          v5[4] = v6 | 0x80;
          goto LABEL_25;
        }
        v7 = 6;
LABEL_23:
        v5[5] = (a2 >> 35) | 0x80;
        goto LABEL_24;
      }
      if ( (unsigned int)v6 < 0x200000 )
      {
        v7 = 7;
        goto LABEL_22;
      }
      v7 = 8;
    }
    v5[7] = (a2 >> 49) | 0x80;
LABEL_22:
    v5[6] = (a2 >> 42) | 0x80;
    goto LABEL_23;
  }
  if ( a2 < 0x80 )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    v8 = 0;
    v9 = a2;
    do
    {
      v10 = a2 | 0x80;
      a2 = v9 >> 7;
      v11 = v9 >> 14;
      v20[v8++] = v10;
      v9 >>= 7;
    }
    while ( v11 );
  }
  v12 = v20;
  v20[(int)v8] = a2 & 0x7F;
  v13 = *(void **)(this + 8);
  v14 = v8 + 1;
  if ( v3 > (int)v8 )
  {
LABEL_14:
    this = (__int64)memcpy(v13, v12, v14);
    v17 = v2[1] + v14;
    v18 = *((_DWORD *)v2 + 4) - v14;
LABEL_29:
    v2[1] = v17;
    *((_DWORD *)v2 + 4) = v18;
    return this;
  }
  v12 = v20;
  while ( 1 )
  {
    memcpy(v13, v12, v3);
    v15 = *((int *)v2 + 4);
    this = (*(__int64 (__fastcall **)(_QWORD, void **, __int64))(*(_QWORD *)*v2 + 16LL))(*v2, &v19, v4);
    if ( (this & 1) == 0 )
      break;
    v3 = *((_DWORD *)v2 + 4);
    v13 = v19;
    v14 -= v15;
    v12 += v15;
    v16 = *((_DWORD *)v2 + 5) + v3;
    v2[1] = v19;
    *((_DWORD *)v2 + 5) = v16;
    if ( v3 >= v14 )
      goto LABEL_14;
  }
  v2[1] = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_BYTE *)v2 + 24) = 1;
  return this;
}

