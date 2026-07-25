/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055FA7C
 * Mangled: sub_55FA7C
 * Demangled: sub_55FA7C
 *
 * Callers: 3
 *   0x000000000055FB8C  sub_55FB8C
 *   0x000000000055FDB4  sub_55FDB4
 *   0x000000000055FF8C  sub_55FF8C
 *
 * Callees: 2
 *   0x000000000051F8B4  sub_51F8B4
 *   0x000000000055F224  sub_55F224
 *
 * Referenced strings: 19
 *   insn=0x000000000055FAA8 string=0x000000000055FB00 "`"
 *   insn=0x000000000055FABC string=0x000000000055FAC0 ""
 *   insn=0x000000000055FAC0 string=0x000000000055FAC4 ""
 *   insn=0x000000000055FAC4 string=0x000000000055FAC8 "\t"
 *   insn=0x000000000055FAD0 string=0x000000000055FAD4 "!"
 *   insn=0x000000000055FAE8 string=0x000000000055FAEC "a"
 *   insn=0x000000000055FAF0 string=0x000000000055FAF4 "A"
 *   insn=0x000000000055FB00 string=0x000000000055FB04 "l"
 *   insn=0x000000000055FB0C string=0x000000000055FB10 "aN@"
 *   insn=0x000000000055FB14 string=0x000000000055FB18 "bj@"
 *   insn=0x000000000055FB1C string=0x000000000055FB20 "bv"
 *   insn=0x000000000055FB24 string=0x000000000055FB28 "br"
 *   insn=0x000000000055FB3C string=0x000000000055FB40 "a"
 *   insn=0x000000000055FB44 string=0x000000000055FB48 "a\n"
 *   insn=0x000000000055FB4C string=0x000000000055FB50 "a"
 *   insn=0x000000000055FB5C string=0x000000000055FB60 "tB"
 *   insn=0x000000000055FB78 string=0x000000000055FB7C ""
 *   insn=0x000000000055FB7C string=0x000000000055FB80 ""
 *   insn=0x000000000055FB80 string=0x000000000055FB84 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_55FA7C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __off_t result; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  char v13; // [xsp+0h] [xbp+0h]
  int v15; // [xsp+28h] [xbp+28h]

  v15 = a3;
  if ( !(unsigned __int8)sub_55F224(a1, a2, a3, a4, a5, a6, a7, a8, v13) )
    return -1;
  result = sub_51F8B4((FILE **)(a1 + 104), a2, v15);
  if ( result != -1 )
  {
    v11 = *(_QWORD *)(a1 + 152);
    v12 = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 232) = v12;
    *(_QWORD *)(a1 + 224) = v12;
    *(_BYTE *)(a1 + 169) = 0;
    *(_BYTE *)(a1 + 170) = 0;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 132) = a4;
  }
  return result;
}

