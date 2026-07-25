/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0A9C
 * Mangled: _ZN5Caver18CopyToFileBuffer16EPhPKhi
 * Demangled: Caver::CopyToFileBuffer16(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x00000000001FD8F0  Caver::CopyToFileBuffer16(uchar *,uchar const*,int)
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x00000000004D0AA0 string=0x00000000004D0AA4 "("
 *   insn=0x00000000004D0AA8 string=0x00000000004D0AAC ")"
 *   insn=0x00000000004D0AAC string=0x00000000004D0AB0 ")"
 *   insn=0x00000000004D0AB0 string=0x00000000004D0AB4 ")\t"
 *   insn=0x00000000004D0AB4 string=0x00000000004D0AB8 "*"
 *   insn=0x00000000004D0AB8 string=0x00000000004D0ABC "_"
 *   insn=0x00000000004D0AC0 string=0x00000000004D0AC4 "\t"
 *   insn=0x00000000004D0AC0 string=0x00000000004D0AFC "J"
 *   insn=0x00000000004D0AC4 string=0x00000000004D0AC8 "?"
 *   insn=0x00000000004D0AD4 string=0x00000000004D0AD8 "I"
 *   insn=0x00000000004D0AD8 string=0x00000000004D0ADC "*$@x)"
 *   insn=0x00000000004D0ADC string=0x00000000004D0AE0 ")"
 *   insn=0x00000000004D0AE0 string=0x00000000004D0AE4 "\n"
 *   insn=0x00000000004D0AE4 string=0x00000000004D0AE8 "J}S\n"
 *   insn=0x00000000004D0AE8 string=0x00000000004D0AEC "\n"
 *   insn=0x00000000004D0AEC string=0x00000000004D0AF0 "\t"
 *   insn=0x00000000004D0AF0 string=0x00000000004D0AF4 "A"
 *   insn=0x00000000004D0AFC string=0x00000000004D0B00 "\t"
 *   insn=0x00000000004D0B00 string=0x00000000004D0B04 ","
 *   insn=0x00000000004D0B04 string=0x00000000004D0B08 "+@"
 *   insn=0x00000000004D0B08 string=0x00000000004D0B0C ""
 *   insn=0x00000000004D0B0C string=0x00000000004D0B10 "!"
 *   insn=0x00000000004D0B18 string=0x00000000004D0B1C "`"
 *   insn=0x00000000004D0B20 string=0x00000000004D0B24 "k"
 *   insn=0x00000000004D0B2C string=0x00000000004D0B30 "$(!"
 *   insn=0x00000000004D0B34 string=0x00000000004D0B38 "%"
 *   insn=0x00000000004D0B48 string=0x00000000004D0B4C "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int16x8_t __fastcall Caver::CopyToFileBuffer16(Caver *this, char *a2, const unsigned __int8 *a3)
{
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x9
  Caver *v7; // x8
  int v8; // w9
  __int16 v9; // t1
  unsigned __int8 *v10; // x11
  char *v11; // x12
  __int64 v12; // x13
  int16x8_t result; // q0
  int16x8_t v14; // q1
  char *v15; // x14
  int8x8x2_t v16; // 0:d2.8,8:d3.8
  int8x8x2_t v17; // 0:d4.8,8:d5.8

  v3 = (unsigned int)((_DWORD)a3 - 1);
  if ( (int)a3 >= 1 )
  {
    v4 = v3 + 1;
    if ( (unsigned __int64)(v3 + 1) <= 0xF || (v5 = 2 * v3 + 2, &a2[v5] > (char *)this) && (char *)this + v5 > a2 )
    {
      LODWORD(v6) = 0;
      v7 = this;
LABEL_6:
      v8 = (_DWORD)a3 - v6;
      do
      {
        v9 = *(_WORD *)a2;
        a2 += 2;
        --v8;
        *(_WORD *)v7 = v9;
        v7 = (Caver *)((char *)v7 + 2);
      }
      while ( v8 );
      return result;
    }
    v6 = v4 - ((unsigned __int8)a3 & 0xF);
    v10 = (unsigned __int8 *)(a2 + 16);
    v7 = (Caver *)((char *)this + 2 * v6);
    a2 += 2 * v6;
    v11 = (char *)this + 16;
    v12 = v6;
    do
    {
      result = *((int16x8_t *)v10 - 1);
      v14 = *(int16x8_t *)v10;
      v15 = v11 - 16;
      v10 += 32;
      v12 -= 16;
      v16.val[0] = vmovn_s16(result);
      v17.val[0] = vmovn_s16(v14);
      v16.val[1] = vshrn_n_s16(result, 8u);
      v17.val[1] = vshrn_n_s16(v14, 8u);
      vst2_s8(v15, v16);
      vst2_s8(v11, v17);
      v11 += 32;
    }
    while ( v12 );
    if ( ((unsigned __int8)a3 & 0xF) != 0 )
      goto LABEL_6;
  }
  return result;
}

