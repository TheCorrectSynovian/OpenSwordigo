/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0B94
 * Mangled: _ZN5Caver20CopyFromFileBuffer16EPhPKhi
 * Demangled: Caver::CopyFromFileBuffer16(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x0000000000202640  Caver::CopyFromFileBuffer16(uchar *,uchar const*,int)
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000004D0B98 string=0x00000000004D0B9C "("
 *   insn=0x00000000004D0BA0 string=0x00000000004D0BA4 ")"
 *   insn=0x00000000004D0BA4 string=0x00000000004D0BA8 ")"
 *   insn=0x00000000004D0BA8 string=0x00000000004D0BAC ")\t"
 *   insn=0x00000000004D0BAC string=0x00000000004D0BB0 "*"
 *   insn=0x00000000004D0BB0 string=0x00000000004D0BB4 "_"
 *   insn=0x00000000004D0BB4 string=0x00000000004D0BB8 "\t"
 *   insn=0x00000000004D0BB8 string=0x00000000004D0BBC "\t"
 *   insn=0x00000000004D0BB8 string=0x00000000004D0BF8 "K"
 *   insn=0x00000000004D0BBC string=0x00000000004D0BC0 "?"
 *   insn=0x00000000004D0BD0 string=0x00000000004D0BD4 "J"
 *   insn=0x00000000004D0BD4 string=0x00000000004D0BD8 "+"
 *   insn=0x00000000004D0BD8 string=0x00000000004D0BDC ","
 *   insn=0x00000000004D0BDC string=0x00000000004D0BE0 "J"
 *   insn=0x00000000004D0BE0 string=0x00000000004D0BE4 ")\t"
 *   insn=0x00000000004D0BE8 string=0x00000000004D0BEC "%"
 *   insn=0x00000000004D0BEC string=0x00000000004D0BF0 "A"
 *   insn=0x00000000004D0BF8 string=0x00000000004D0BFC "\n"
 *   insn=0x00000000004D0BFC string=0x00000000004D0C00 "I"
 *   insn=0x00000000004D0C00 string=0x00000000004D0C04 ""
 *   insn=0x00000000004D0C04 string=0x00000000004D0C08 ")"
 *   insn=0x00000000004D0C0C string=0x00000000004D0C10 " "
 *   insn=0x00000000004D0C18 string=0x00000000004D0C1C " 8!."
 *   insn=0x00000000004D0C24 string=0x00000000004D0C28 "A"
 *   insn=0x00000000004D0C28 string=0x00000000004D0C2C "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int8x16_t *__fastcall Caver::CopyFromFileBuffer16(int8x16_t *this, const char *a2, const unsigned __int8 *a3)
{
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x10
  int8x16_t *v7; // x8
  unsigned __int8 *v8; // x9
  int v9; // w10
  unsigned __int8 v10; // w11
  __int16 v11; // w12
  __int64 v12; // x12
  int8x8x2_t v13; // 0:d0.8,8:d1.8

  v3 = (unsigned int)((_DWORD)a3 - 1);
  if ( (int)a3 >= 1 )
  {
    v4 = v3 + 1;
    if ( (unsigned __int64)(v3 + 1) <= 7 || (v5 = 2 * v3 + 2, &a2[v5] > (const char *)this) && (char *)this + v5 > a2 )
    {
      LODWORD(v6) = 0;
      v7 = this;
      v8 = (unsigned __int8 *)a2;
LABEL_6:
      v9 = (_DWORD)a3 - v6;
      do
      {
        v10 = *v8;
        v11 = v8[1];
        --v9;
        v8 += 2;
        v7->n128_u16[0] = v10 | (unsigned __int16)(v11 << 8);
        v7 = (int8x16_t *)((char *)v7 + 2);
      }
      while ( v9 );
      return this;
    }
    v6 = v4 - ((unsigned __int8)a3 & 7);
    v7 = (int8x16_t *)((char *)this + 2 * v6);
    v8 = (unsigned __int8 *)&a2[2 * v6];
    v12 = v6;
    do
    {
      v13 = vld2_s8(a2);
      a2 += 16;
      v12 -= 8;
      *this++ = vorrq_s8(vshll_n_s8(v13.val[1], 8u), vmovl_u8(v13.val[0]));
    }
    while ( v12 );
    if ( ((unsigned __int8)a3 & 7) != 0 )
      goto LABEL_6;
  }
  return this;
}

